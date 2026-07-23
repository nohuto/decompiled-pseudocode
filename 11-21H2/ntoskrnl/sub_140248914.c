/*
 * XREFs of sub_140248914 @ 0x140248914
 * Callers:
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_140B2305C @ 0x140B2305C (sub_140B2305C.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C8460 @ 0x1406C8460 (sub_1406C8460.c)
 */

PSLIST_ENTRY __fastcall sub_140248914(_SLIST_ENTRY *a1, int a2)
{
  PSLIST_ENTRY v4; // rax
  PSLIST_ENTRY v5; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  PSLIST_ENTRY *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf

  v4 = sub_140202234((__int64)&unk_140CF5EC0);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    v5[1].Next = a1;
    LODWORD(v5[3].Next) = a2 & 0xFF000000 | 1;
    *((_DWORD *)&v5[3].Next + 2) = sub_1406C8460();
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
    ++dword_140C547BC;
    v7 = v6;
    v8 = (PSLIST_ENTRY *)off_140C043A0;
    if ( *off_140C043A0 != (_UNKNOWN *)&off_140C04398 )
      __fastfail(3u);
    v5->Next = (_SLIST_ENTRY *)&off_140C04398;
    *((_QWORD *)&v5->Next + 1) = v8;
    *v8 = v5;
    off_140C043A0 = (_UNKNOWN **)v5;
    KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    KeReleaseMutex(&Object, 0);
  }
  return v5;
}
