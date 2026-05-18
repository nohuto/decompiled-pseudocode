/*
 * XREFs of sub_1800273E0 @ 0x1800273E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180026698 @ 0x180026698 (sub_180026698.c)
 *     sub_1800266EC @ 0x1800266EC (sub_1800266EC.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800273E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  _BYTE v10[32]; // [rsp+40h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_1800266EC(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      sub_180026698(a1, &v8, i);
      v7 = v8;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8);
      if ( result == a2 )
      {
        sub_18002A070(v7 + 8, v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        result = sub_180010F54((__int64)v10);
      }
      if ( v9 )
        result = sub_180010530(v9);
    }
  }
  return result;
}
