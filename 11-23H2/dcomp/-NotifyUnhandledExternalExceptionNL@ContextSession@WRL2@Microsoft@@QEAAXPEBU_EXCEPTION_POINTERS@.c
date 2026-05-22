/*
 * XREFs of ?NotifyUnhandledExternalExceptionNL@ContextSession@WRL2@Microsoft@@QEAAXPEBU_EXCEPTION_POINTERS@@@Z @ 0x180108DCC
 * Callers:
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL2::ContextSession::NotifyUnhandledExternalExceptionNL(
        Microsoft::WRL2::ContextSession *this,
        const struct _EXCEPTION_POINTERS *a2)
{
  LPVOID v4; // rbx
  PEXCEPTION_RECORD ExceptionRecord; // rax

  *((_DWORD *)this + 27) = 1;
  v4 = HeapAlloc(0LL, 0x230u, 8uLL);
  if ( v4 )
  {
    ExceptionRecord = a2->ExceptionRecord;
    *(_OWORD *)v4 = *(_OWORD *)&a2->ExceptionRecord->ExceptionCode;
    *((_OWORD *)v4 + 1) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
    *((_OWORD *)v4 + 2) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
    *((_OWORD *)v4 + 3) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
    *((_OWORD *)v4 + 4) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
    *((_OWORD *)v4 + 5) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
    *((_OWORD *)v4 + 6) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
    *((_OWORD *)v4 + 7) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
    *((_OWORD *)v4 + 8) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
    *((_QWORD *)v4 + 18) = ExceptionRecord->ExceptionInformation[14];
    *((_DWORD *)v4 + 38) = GetCurrentThreadId();
    *((_WORD *)v4 + 78) = RtlCaptureStackBackTrace(0, 0x32u, (PVOID *)v4 + 20, 0LL);
    *((_QWORD *)this + 14) = v4;
  }
}
