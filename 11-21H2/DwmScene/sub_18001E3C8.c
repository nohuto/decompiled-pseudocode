/*
 * XREFs of sub_18001E3C8 @ 0x18001E3C8
 * Callers:
 *     sub_18001ED6C @ 0x18001ED6C (sub_18001ED6C.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001E4D4 @ 0x18001E4D4 (sub_18001E4D4.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18001E3C8(LPINIT_ONCE lpInitOnce, __int64 a2)
{
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  BOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  result = InitOnceBeginInitialize(lpInitOnce, 0, &fPending, 0LL);
  if ( !result
    || fPending
    && ((v7 = sub_18001D684(), (v10 = v7) == 0)
      ? (v8 = 0LL)
      : (v8 = sub_18001E4D4(v7, *(_QWORD *)(*(_QWORD *)a2 + 8LL), *(unsigned int *)(*(_QWORD *)a2 + 16LL))),
        **(_QWORD **)a2 = v8,
        (result = InitOnceComplete(lpInitOnce, 0, 0LL)) == 0) )
  {
    result = o_abort(v6, v5);
    __debugbreak();
  }
  return result;
}
