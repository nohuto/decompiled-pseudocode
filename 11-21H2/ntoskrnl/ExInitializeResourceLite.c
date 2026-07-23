/*
 * XREFs of ExInitializeResourceLite @ 0x14030F740
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_14028D948 @ 0x14028D948 (sub_14028D948.c)
 *     sub_140608C80 @ 0x140608C80 (sub_140608C80.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_140768894 @ 0x140768894 (sub_140768894.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140827888 @ 0x140827888 (sub_140827888.c)
 *     sub_140844B5C @ 0x140844B5C (sub_140844B5C.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_1408506E0 @ 0x1408506E0 (sub_1408506E0.c)
 *     sub_140855918 @ 0x140855918 (sub_140855918.c)
 *     sub_14085D1F8 @ 0x14085D1F8 (sub_14085D1F8.c)
 *     sub_14085F65C @ 0x14085F65C (sub_14085F65C.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     sub_1409AB130 @ 0x1409AB130 (sub_1409AB130.c)
 *     sub_140AF33B0 @ 0x140AF33B0 (sub_140AF33B0.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B01314 @ 0x140B01314 (sub_140B01314.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 *     sub_140B0B180 @ 0x140B0B180 (sub_140B0B180.c)
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 *     sub_140B1ADD8 @ 0x140B1ADD8 (sub_140B1ADD8.c)
 *     sub_140B1F250 @ 0x140B1F250 (sub_140B1F250.c)
 *     sub_140B235FC @ 0x140B235FC (sub_140B235FC.c)
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 *     sub_140B290EC @ 0x140B290EC (sub_140B290EC.c)
 *     sub_140B2E474 @ 0x140B2E474 (sub_140B2E474.c)
 *     sub_140B2F780 @ 0x140B2F780 (sub_140B2F780.c)
 *     sub_140B30E74 @ 0x140B30E74 (sub_140B30E74.c)
 * Callees:
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_1405E4840 @ 0x1405E4840 (sub_1405E4840.c)
 *     sub_1405E48CC @ 0x1405E48CC (sub_1405E48CC.c)
 *     sub_1405E4CD4 @ 0x1405E4CD4 (sub_1405E4CD4.c)
 *     sub_140632710 @ 0x140632710 (sub_140632710.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rdx
  KSPIN_LOCK *v8; // rsi
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  memset(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v8 = qword_140C1BC48;
    if ( qword_140C1BC48 )
    {
      v10 = sub_1405E4840(qword_140C1BC48);
      if ( v10 )
      {
        v11 = sub_1405E4CD4(v8);
        v9 = v11;
        if ( !v11 )
          sub_1405E48CC(v8, v10);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = 0;
    }
    v2 = v9;
  }
  else
  {
    v2 = 0LL;
  }
  Resource->CreatorBackTraceIndex = v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(&dword_140D310C0, CurrentIrql);
  else
    sub_14030F870(&dword_140D310C0, CurrentIrql);
  v4 = (struct _LIST_ENTRY *)qword_140C11758;
  if ( *(__int64 **)qword_140C11758 != &qword_140C11750 )
    __fastfail(3u);
  Resource->SystemResourcesList.Flink = (struct _LIST_ENTRY *)&qword_140C11750;
  Resource->SystemResourcesList.Blink = v4;
  v4->Flink = &Resource->SystemResourcesList;
  qword_140C11758 = (__int64)Resource;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14063D8B0(&dword_140D310C0, retaddr);
  else
    dword_140D310C0 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v6 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v13 = *(_DWORD *)(v6 + 24) - 1;
      *(_DWORD *)(v6 + 24) = v13;
      if ( !v13 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(CurrentIrql);
  __incgsdword(0x8A58u);
  if ( (DWORD1(xmmword_140D06900) & 0x20000) != 0 )
    sub_140632710(65544LL, Resource, 0LL, 0LL);
  return 0;
}
