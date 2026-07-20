/*
 * XREFs of SmpLoadDeferredSubsystem @ 0x1400198F0
 * Callers:
 *     <none>
 * Callees:
 *     SmpGetMuSessionIdFromClientContext @ 0x140003A84 (SmpGetMuSessionIdFromClientContext.c)
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 */

__int64 __fastcall SmpLoadDeferredSubsystem(__int64 a1, int *a2)
{
  unsigned int MuSessionIdFromClientContext; // esi
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  String1.Length = *(_WORD *)(a1 + 48);
  String1.MaximumLength = String1.Length;
  String1.Buffer = (PWSTR)(a1 + 52);
  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext((__int64)a2, &v12);
  if ( v12 )
  {
    v7 = *a2;
    v8 = SmpSubSystemsToDefer;
    v9 = &SmpSubSystemsRequired;
    if ( (v7 & 8) != 0 )
      v8 = SmpSubSystemsRequired;
    else
      v9 = &SmpSubSystemsToDefer;
    while ( 1 )
    {
      if ( (__int64 *)v8 == v9 )
        return 3221225524LL;
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v8 + 16), 1u) )
        break;
      v8 = *(_QWORD *)v8;
    }
    return SmpExecuteCommand(v8 + 32, MuSessionIdFromClientContext, v10, 72, 0LL);
  }
  else
  {
    v5 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    result = 3221225473LL;
    SmpGlobalLog[2 * v5 + 2] = 10004;
    SmpGlobalLog[2 * v5 + 3] = -1073741823;
    *(_QWORD *)&SmpGlobalLog[2 * v5 + 4] = a1;
  }
  return result;
}
