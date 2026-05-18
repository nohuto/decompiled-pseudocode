/*
 * XREFs of sub_18002DD34 @ 0x18002DD34
 * Callers:
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 * Callees:
 *     sub_18002E098 @ 0x18002E098 (sub_18002E098.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_18002DD34(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v10; // [rsp+70h] [rbp+28h]
  __int64 v11; // [rsp+78h] [rbp+30h]
  va_list va1; // [rsp+80h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, _QWORD);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 48LL);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[2] + 8LL))(a1[2], (__int64 *)va);
    v7 = (_QWORD *)sub_18002E098(v11);
    return v6(v5, v10, *v7);
  }
  return result;
}
