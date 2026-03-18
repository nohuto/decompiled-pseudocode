/*
 * XREFs of EngCloseFNTCache @ 0x1C0089CDC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C0088F60 (xxxLW_LoadFonts.c)
 *     EngFntCacheAllocInternal @ 0x1C028A3EC (EngFntCacheAllocInternal.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C0088514 (bSetFntCacheReg.c)
 *     ComputeFileviewCheckSum @ 0x1C0088700 (ComputeFileviewCheckSum.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0089E94 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 */

void __fastcall EngCloseFNTCache(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // ecx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(_DWORD *)(v1 + 19384);
  if ( (v2 & 3) != 0 )
  {
    v3 = *(_DWORD **)(v1 + 19392);
    if ( v3 )
    {
      if ( (v2 & 2) != 0 && *(_QWORD *)v3 && v3[5] )
      {
        *(_DWORD *)(*(_QWORD *)v3 + 20LL) = v3[2];
        *(_DWORD *)(**(_QWORD **)(v1 + 19392) + 36LL) = *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 32LL)
                                                      - *(_DWORD *)(*(_QWORD *)(v1 + 19392) + 24LL);
        ***(_DWORD ***)(v1 + 19392) = ComputeFileviewCheckSum(
                                        (_DWORD *)(**(_QWORD **)(v1 + 19392) + 4LL),
                                        *(_DWORD *)(**(_QWORD **)(v1 + 19392) + 24LL) - 4);
      }
      v4 = *(_QWORD *)(v1 + 19392);
      v5 = *(_DWORD *)(v4 + 16);
      if ( (*(_DWORD *)(v1 + 19384) & 2) != 0 )
      {
        if ( *(_DWORD *)(v4 + 12) != v5 )
          bSetFntCacheReg(1u, v5);
        v5 = 0;
        v6 = 0;
      }
      else
      {
        if ( (v5 & 3) == 0 )
        {
LABEL_6:
          vCleanUpFntCacheInternal();
          return;
        }
        v6 = 1;
      }
      bSetFntCacheReg(v6, v5);
      goto LABEL_6;
    }
  }
  *(_DWORD *)(v1 + 19384) = 0;
  *(_BYTE *)(v1 + 19404) = 1;
}
