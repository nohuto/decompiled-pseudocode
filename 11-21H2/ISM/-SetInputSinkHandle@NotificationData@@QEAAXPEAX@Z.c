/*
 * XREFs of ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x18000413C
 * Callers:
 *     NotifyInputSinkParented @ 0x1800038A0 (NotifyInputSinkParented.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationData::SetInputSinkHandle(NotificationData *this, void *a2)
{
  HANDLE *v3; // rsi
  __int64 v4; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  const char *v7; // r9
  DWORD LastError; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HANDLE *)((char *)this + 16);
  v4 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v4, v9, v10, v11);
    SetLastError(LastError);
  }
  *v3 = 0LL;
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( !DuplicateHandle(v6, a2, CurrentProcess, v3, 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\inc\\Inp"
                    "utSinkDataCache.h",
      v7);
}
