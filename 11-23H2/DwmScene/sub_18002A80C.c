/*
 * XREFs of sub_18002A80C @ 0x18002A80C
 * Callers:
 *     sub_18002C5EC @ 0x18002C5EC (sub_18002C5EC.c)
 *     sub_180037DC0 @ 0x180037DC0 (sub_180037DC0.c)
 * Callees:
 *     sub_1800203A8 @ 0x1800203A8 (sub_1800203A8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A80C(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, __int64, __int64, int); // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  char v15; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  if ( (_BYTE)result )
  {
    v11 = *a1;
    v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, int))(*(_QWORD *)*a1 + 32LL);
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)a1[2] + 8LL))(a1[2], &v15);
    v13 = sub_1800203A8(a6);
    return v12(v11, a5, v14, v13, a4, a2, a3);
  }
  return result;
}
