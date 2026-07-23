/*
 * XREFs of RtlUnwind @ 0x140387A90
 * Callers:
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_14041AF90 @ 0x14041AF90 (sub_14041AF90.c)
 * Callees:
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 */

void __cdecl RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  __int64 ContextRecord; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(ContextRecord) = 0;
  v8 = (_BYTE)byte_140E01841 != 0 ? 0x80 : 0;
  sub_1402956D0((unsigned int)(v8 + 1048587), &ContextRecord, 0LL);
  v9 = (unsigned int)ContextRecord + 15LL;
  if ( v9 <= (unsigned int)ContextRecord )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  sub_140297D10((__int64)&ContextRecord, v8 + 1048587, &ContextRecord, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextRecord, 0LL);
}
