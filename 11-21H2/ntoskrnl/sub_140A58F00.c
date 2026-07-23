/*
 * XREFs of sub_140A58F00 @ 0x140A58F00
 * Callers:
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 *     sub_140B3023C @ 0x140B3023C (sub_140B3023C.c)
 * Callees:
 *     sub_14020F26C @ 0x14020F26C (sub_14020F26C.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B65D8 @ 0x1403B65D8 (sub_1403B65D8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_UNKNOWN **__fastcall sub_140A58F00(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( qword_140D06BD8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = *(unsigned __int8 *)(a1 + 208);
    KeAcquireSpinLockAtDpcLevel(&qword_140C2B8A0);
    sub_14020F26C(&qword_140D06A00);
    v5 = *(unsigned __int8 *)(a1 + 209);
    ++byte_140D07C90[v4];
    v6 = (unsigned int)v4;
    v7 = *(_QWORD *)(a1 + 200);
    ++dword_140D06D48;
    v8 = (unsigned int)(v5 + ((_DWORD)v4 << 6));
    *((_QWORD *)qword_140D06BD8 + v8) = v7;
    *((_QWORD *)Src + v8) = *(_QWORD *)(a1 + 200);
    qword_140D08090[2 * (unsigned int)v6] |= 1LL << v5;
    qword_140D07D30[v6] |= 1LL << v5;
    v9 = (_QWORD *)((char *)PsInitialSystemProcess + 2376);
    if ( (*((_DWORD *)PsInitialSystemProcess + 543) & 0x80u) != 0 )
      v9 = (_QWORD *)*v9;
    v9[v6] |= 1LL << v5;
    sub_1403B65D8(&qword_140D06A00);
    KeReleaseSpinLockFromDpcLevel(&qword_140C2B8A0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = (_UNKNOWN **)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
