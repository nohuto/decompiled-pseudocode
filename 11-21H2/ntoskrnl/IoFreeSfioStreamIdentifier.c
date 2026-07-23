/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x140557510
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  __int64 v3; // rcx
  void **v4; // rbx
  NTSTATUS v5; // esi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  PVOID *v8; // rcx
  unsigned __int64 v9; // rdi
  void **v10; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf
  void **v17; // rax

  v4 = (void **)sub_1402A3A14((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( v4 )
  {
    v6 = (KSPIN_LOCK *)(v3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
    v8 = (PVOID *)*v4;
    v9 = v7;
    if ( *v4 != v4 )
    {
      while ( 1 )
      {
        v10 = (void **)*v8;
        if ( v8[3] == Signature )
          break;
        v8 = (PVOID *)*v8;
        if ( v10 == v4 )
          goto LABEL_5;
      }
      v17 = (void **)v8[1];
      if ( v10[1] != v8 || *v17 != v8 )
        __fastfail(3u);
      *v17 = v10;
      v10[1] = v17;
      ExFreePoolWithTag(v8, 0);
      v5 = 0;
    }
LABEL_5:
    KeReleaseSpinLockFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
  }
  return v5;
}
