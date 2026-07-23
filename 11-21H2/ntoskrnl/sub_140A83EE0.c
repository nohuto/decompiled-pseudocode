/*
 * XREFs of sub_140A83EE0 @ 0x140A83EE0
 * Callers:
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

struct _LIST_ENTRY *__fastcall sub_140A83EE0(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rdi
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
  Flink = stru_140D57590.Flink;
  if ( &stru_140D57590 != stru_140D57590.Flink )
  {
    while ( 1 )
    {
      v5 = Flink->Flink;
      if ( Flink[1].Blink == a1 )
        break;
      Flink = Flink->Flink;
      if ( &stru_140D57590 == v5 )
        goto LABEL_4;
    }
    v2 = Flink;
    Blink = Flink->Blink;
    if ( v5->Blink != Flink || Blink->Flink != Flink )
      __fastfail(3u);
    Blink->Flink = v5;
    v5->Blink = Blink;
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(&qword_140D575A0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
