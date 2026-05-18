/*
 * XREFs of sub_18002C9BC @ 0x18002C9BC
 * Callers:
 *     sub_18002E87C @ 0x18002E87C (sub_18002E87C.c)
 *     sub_18003C184 @ 0x18003C184 (sub_18003C184.c)
 * Callees:
 *     sub_1800216D4 @ 0x1800216D4 (sub_1800216D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C9BC(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
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
    v13 = sub_1800216D4(a6);
    return v12(v11, a5, v14, v13, a4, a2, a3);
  }
  return result;
}
