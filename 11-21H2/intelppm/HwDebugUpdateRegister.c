/*
 * XREFs of HwDebugUpdateRegister @ 0x1C0002794
 * Callers:
 *     HwDebugCreateRegisterGroup @ 0x1C002945C (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     ProcLibTraceRegisterValueChange @ 0x1C0002A24 (ProcLibTraceRegisterValueChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall HwDebugUpdateRegister(_QWORD *a1, __int64 a2))(__int64, unsigned __int64 *)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 (__fastcall *result)(__int64, unsigned __int64 *); // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = __readmsr(*(_DWORD *)(*a1 + 8LL));
  v5 = a1[1] & (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4);
  v7 = v5;
  if ( v5 != a1[2] )
  {
    a1[2] = v5;
    ProcLibTraceRegisterValueChange(a1);
  }
  result = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(v2 + 32);
  if ( result )
    return (__int64 (__fastcall *)(__int64, unsigned __int64 *))result(a2, &v7);
  return result;
}
