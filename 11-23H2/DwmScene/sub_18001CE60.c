/*
 * XREFs of sub_18001CE60 @ 0x18001CE60
 * Callers:
 *     sub_18001D81C @ 0x18001D81C (sub_18001D81C.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001D194 @ 0x18001D194 (sub_18001D194.c)
 *     sub_18001D37C @ 0x18001D37C (sub_18001D37C.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18001CE60(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  int result; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  union _RTL_RUN_ONCE *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  BOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  result = InitOnceBeginInitialize(a1, 0, &fPending, 0LL);
  if ( !result )
  {
    result = o_abort();
    __debugbreak();
  }
  if ( fPending )
  {
    v7 = a1;
    v8 = 4;
    v5 = sub_18001C190();
    v10 = v5;
    if ( v5 )
      v6 = sub_18001D194(v5, *(_QWORD *)(*(_QWORD *)a2 + 8LL), *(unsigned int *)(*(_QWORD *)a2 + 16LL));
    else
      v6 = 0LL;
    **(_QWORD **)a2 = v6;
    v8 = 0;
    return sub_18001D37C(&v7);
  }
  return result;
}
