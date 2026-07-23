/*
 * XREFs of RtlUnwind @ 0x180054680
 * Callers:
 *     _local_unwind @ 0x1800901F0 (_local_unwind.c)
 *     __longjmp_internal @ 0x1800A78B0 (__longjmp_internal.c)
 * Callees:
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x180054BA0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054C90 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A5E30 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  ULONG64 v4; // rdi
  char v5; // r10
  int v10; // eax
  ULONG v11; // esi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  v4 = 0LL;
  v5 = (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3;
  if ( v5 == 1 )
    v4 = 2048LL;
  v10 = 0;
  if ( v5 == 1 )
    v10 = 64;
  v11 = v10 + 1048587;
  RtlGetExtendedContextLength2(v10 + 1048587, (PULONG)&ContextLength, (unsigned int)v4);
  v12 = (unsigned int)ContextLength + 15LL;
  if ( v12 <= (unsigned int)ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v11, &ContextLength, v4);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextLength, 0LL);
}
