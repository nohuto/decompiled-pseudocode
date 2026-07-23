/*
 * XREFs of sub_140433E80 @ 0x140433E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 */

__int64 __fastcall sub_140433E80(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx

  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( *((_BYTE *)CurrentThread + 562) )
        sub_140434DC0(58LL, TargetFrame, ContextRecord, a4);
      v6 = *((_QWORD *)CurrentThread + 18);
      *((_QWORD *)CurrentThread + 18) = *(_QWORD *)(v6 + 312);
      *((_BYTE *)CurrentThread + 562) = *(_BYTE *)(v6 + 40);
    }
  }
  else
  {
    if ( &loc_1404343A7 == ExceptionRecord->ExceptionAddress
      || &loc_140434440 <= ExceptionRecord->ExceptionAddress && &loc_1404344B0 > ExceptionRecord->ExceptionAddress )
    {
      RtlUnwindEx(
        TargetFrame,
        &loc_1404344E0,
        ExceptionRecord,
        (PVOID)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
    }
    if ( *((_BYTE *)KeGetCurrentThread() + 562) )
      sub_140434DC0(59LL, ExceptionRecord->ExceptionCode, ExceptionRecord->ExceptionAddress, ContextRecord);
  }
  return 1LL;
}
