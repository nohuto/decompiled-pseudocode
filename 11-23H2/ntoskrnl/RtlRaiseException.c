/*
 * XREFs of RtlRaiseException @ 0x14030D820
 * Callers:
 *     RaiseException @ 0x1403DE0B0 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x140549310 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1405493A0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1405494F0 (HvlpSetRegister64.c)
 *     KiStallBugcheckThread @ 0x14057BAA8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405AC0C0 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x1402A4050 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x1402A5720 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14030D950 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength2 @ 0x14030DA20 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14030DB10 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14041DF30 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1404294A0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
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
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v13; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextLength) = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2(v2 + 1048587, (PULONG)&ContextLength, 0LL);
  v3 = (unsigned int)ContextLength + 15LL;
  if ( v3 <= (unsigned int)ContextLength )
    v3 = 0xFFFFFFFFFFFFFF0LL;
  v4 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = alloca(v4);
  v6 = alloca(v4);
  v7 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v2 + 1048587, &ContextLength, 0LL);
  RtlpCaptureContext2(&ContextLength);
  v8 = RtlLookupFunctionEntry((DWORD64)v13, &ImageBase, 0LL);
  if ( !v8 )
LABEL_6:
    RtlRaiseStatus(v7);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v13, v8, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v13;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v7 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ContextLength, 0);
    goto LABEL_6;
  }
}
