/*
 * XREFs of ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B079C
 * Callers:
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall bCaptureLINEATTRS(struct _LINEATTRS **a1, struct _LINEATTRS *a2)
{
  unsigned int v4; // edi
  ULONG64 v5; // rdx
  PFLOAT_LONG pstyle; // r9
  __int64 cstyle; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  union _FLOAT_LONG *v11; // rsi

  v4 = 1;
  v5 = (ULONG64)*a1;
  if ( *a1 )
  {
    if ( v5 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    *(_OWORD *)&a2->fl = *(_OWORD *)v5;
    *(_OWORD *)&a2->eMiterLimit = *(_OWORD *)(v5 + 16);
    *(_QWORD *)&a2->elStyleState.e = *(_QWORD *)(v5 + 32);
    pstyle = a2->pstyle;
    if ( pstyle )
    {
      cstyle = a2->cstyle;
      if ( (unsigned int)cstyle > 0x9C4000 )
        return 0LL;
      v9 = cstyle;
      if ( 4 * cstyle && ((unsigned __int64)&pstyle[v9] > MmUserProbeAddress || &pstyle[v9] < pstyle) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        LODWORD(cstyle) = a2->cstyle;
      }
      v10 = (unsigned int)(4 * cstyle);
      if ( (_DWORD)v10 )
        v11 = (union _FLOAT_LONG *)Win32AllocPool(v10, 1886221639LL);
      else
        v11 = 0LL;
      if ( v11 )
      {
        memmove(v11, a2->pstyle, 4LL * a2->cstyle);
        a2->pstyle = v11;
      }
      else
      {
        a2->pstyle = 0LL;
        v4 = 0;
      }
    }
    *a1 = a2;
  }
  return v4;
}
