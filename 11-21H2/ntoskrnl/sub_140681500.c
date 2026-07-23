/*
 * XREFs of sub_140681500 @ 0x140681500
 * Callers:
 *     sub_1406811B0 @ 0x1406811B0 (sub_1406811B0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140681500(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v3; // rsi
  unsigned int v4; // ebx
  void *v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)CurrentPrcb + 272);
  ++*(_DWORD *)(v3 + 20);
  v4 = 0;
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v3);
  if ( v5 )
    goto LABEL_2;
  ++*(_DWORD *)(v3 + 24);
  v7 = *((_QWORD *)CurrentPrcb + 273);
  ++*(_DWORD *)(v7 + 20);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v7);
  if ( v5
    || (v8 = *(unsigned int *)(v7 + 44),
        v9 = *(unsigned int *)(v7 + 36),
        ++*(_DWORD *)(v7 + 24),
        (v5 = (void *)sub_14042A5E0(v9, v8)) != 0LL) )
  {
LABEL_2:
    memset(v5, 0, 0x1E0uLL);
    *(_QWORD *)(a1 + 160) = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
