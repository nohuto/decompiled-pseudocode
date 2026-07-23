/*
 * XREFs of RtlRaiseException @ 0x140294A60
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     sub_14042A160 @ 0x14042A160 (sub_14042A160.c)
 *     sub_14054BF60 @ 0x14054BF60 (sub_14054BF60.c)
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 *     sub_1405798A8 @ 0x1405798A8 (sub_1405798A8.c)
 *     sub_1405E8980 @ 0x1405E8980 (sub_1405E8980.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x140294B90 (RtlVirtualUnwind.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041E540 @ 0x14041E540 (sub_14041E540.c)
 *     sub_140429AE0 @ 0x140429AE0 (sub_140429AE0.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 */

void __cdecl RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  void *v6; // rsp
  NTSTATUS v7; // ebx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rax
  unsigned int ContextRecord; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v13; // [rsp+138h] [rbp+F8h]

  ContextRecord = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = (_BYTE)byte_140E01841 != 0 ? 0x80 : 0;
  sub_1402956D0((unsigned int)(v2 + 1048587), &ContextRecord, 0LL);
  v3 = ContextRecord + 15LL;
  if ( v3 <= ContextRecord )
    v3 = 0xFFFFFFFFFFFFFF0LL;
  v4 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = alloca(v4);
  v6 = alloca(v4);
  v7 = sub_140297D10(&ContextRecord, (unsigned int)(v2 + 1048587), &ContextRecord, 0LL);
  sub_140429AE0(&ContextRecord);
  v8 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, 0LL);
  if ( !v8 )
LABEL_6:
    RtlRaiseStatus(v7);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v13, v8, (PCONTEXT)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v13;
  if ( !(unsigned __int8)sub_140295210((ULONG_PTR)ExceptionRecord) )
  {
    v7 = sub_14041E540(ExceptionRecord, &ContextRecord, 0LL);
    goto LABEL_6;
  }
}
