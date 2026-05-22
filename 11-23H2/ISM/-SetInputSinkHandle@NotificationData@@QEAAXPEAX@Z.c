/*
 * XREFs of ?SetInputSinkHandle@NotificationData@@QEAAXPEAX@Z @ 0x180009DC8
 * Callers:
 *     NotifyInputSinkParented @ 0x180009620 (NotifyInputSinkParented.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall NotificationData::SetInputSinkHandle(NotificationData *this, void *a2)
{
  HANDLE *v2; // rsi
  __int64 v4; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  const char *v7; // r9
  DWORD LastError; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (HANDLE *)((char *)this + 16);
  v4 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v4, v9, v10, v11);
    SetLastError(LastError);
  }
  *v2 = 0LL;
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( !DuplicateHandle(v6, a2, CurrentProcess, v2, 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\inc\\Inp"
                    "utSinkDataCache.h",
      v7);
}
