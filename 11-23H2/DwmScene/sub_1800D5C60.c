/*
 * XREFs of sub_1800D5C60 @ 0x1800D5C60
 * Callers:
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D6AF4 @ 0x1800D6AF4 (sub_1800D6AF4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5C60(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v8, &v9);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
