/*
 * XREFs of sub_18002A740 @ 0x18002A740
 * Callers:
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 * Callees:
 *     nullsub_11 @ 0x18002A8D8 (nullsub_11.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_18002A740(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 48LL);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[2] + 8LL))(a1[2], (__int64 *)va);
    v7 = (_QWORD *)nullsub_11();
    return v6(v5, v10, *v7);
  }
  return result;
}
