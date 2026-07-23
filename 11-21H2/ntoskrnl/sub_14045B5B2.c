/*
 * XREFs of sub_14045B5B2 @ 0x14045B5B2
 * Callers:
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14045B6F0 @ 0x14045B6F0 (sub_14045B6F0.c)
 * Callees:
 *     sub_14022F244 @ 0x14022F244 (sub_14022F244.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14045B5B2(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v2; // r9
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v2 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( a1 )
  {
    if ( byte_140C0CD20 )
    {
      RtlRbRemoveNode(&Tree, &Node);
      byte_140C0CD20 = 0;
      if ( dword_140C0CD28 )
        sub_14022F440(0, dword_140C0CD28, 1);
      sub_14022F4BC();
    }
  }
  else if ( !byte_140C0CD20 && dword_140D06AA0 )
  {
    sub_14022F2FC(dword_140D06AA0, 0, (__int64)&Node);
    sub_14022F244();
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v3 = KeGetCurrentIrql();
      if ( v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
