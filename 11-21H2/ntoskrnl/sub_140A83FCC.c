/*
 * XREFs of sub_140A83FCC @ 0x140A83FCC
 * Callers:
 *     sub_140A85B10 @ 0x140A85B10 (sub_140A85B10.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_LIST_ENTRY *__fastcall sub_140A83FCC(struct _LIST_ENTRY *a1)
{
  _LIST_ENTRY *v2; // rdi
  unsigned __int64 v3; // rbx
  _LIST_ENTRY *i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D575A0);
  for ( i = stru_140D57590.Flink; &stru_140D57590 != i; i = i->Flink )
  {
    if ( i[1].Blink == a1 && (SHIDWORD(i[2].Flink) <= 0 || LOBYTE(i[2].Flink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      Blink = i->Blink;
      if ( i->Flink->Blink != i || Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140D575A0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return v2;
}
