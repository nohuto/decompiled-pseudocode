/*
 * XREFs of MiReferenceDataSubsections @ 0x14026CF88
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140287180 (MiLocateSubsectionNode.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, __int64 *a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdx
  int v6; // ebx
  ULONG_PTR v9; // rbp
  __int16 v10; // si
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v16; // r8d
  __int64 SubsectionNode; // rax
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v4 = *a2;
  v6 = 0;
  *a4 = 3;
  v18[0] = 0LL;
  v20 = 0;
  v9 = MiOffsetToProtos(a1, v4, v18);
  if ( v9 )
  {
    v10 = 136;
    v11 = v18[0] + a3;
    if ( !v18[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (*(_BYTE *)(a1 + 62) & 0xC) != 0 )
        {
          v20 = 1;
          if ( a3 == *(_DWORD *)(v9 + 44) && !*(_QWORD *)(v9 + 8) )
            v10 = 1160;
        }
      }
    }
    v12 = MiAddViewsForSection(v9);
    v13 = v12;
    if ( (v10 & 0x400) != 0 )
    {
      if ( v12 >= 0 )
      {
        v14 = 1;
        goto LABEL_5;
      }
      v13 = MiAddViewsForSection(v9);
    }
    v14 = 0;
    if ( (v13 & 0x80000000) != 0 )
      return v13;
LABEL_5:
    if ( v20 )
    {
      if ( v14 )
      {
        LOBYTE(v6) = (*(_DWORD *)(v9 + 48) & 0xC0000000) == 0x40000000;
        *a4 = v6;
      }
      else
      {
        v16 = MiIncrementLargeSubsections(v9, v11);
        if ( v16 != -1 )
        {
          while ( a3 % MiLargePageSizes[v16] )
          {
            if ( (unsigned int)++v16 > 1 )
            {
              SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0LL);
              MiDecrementLargeSubsections(v9, SubsectionNode);
              return v13;
            }
          }
          *a4 = v16;
        }
      }
    }
    return v13;
  }
  return 3221225503LL;
}
