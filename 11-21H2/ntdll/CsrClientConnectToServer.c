/*
 * XREFs of CsrClientConnectToServer @ 0x1800794A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandleEx @ 0x180042DE0 (LdrGetDllHandleEx.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x180079A28 (CsrpClientConnectToServer.c)
 *     RtlCreateTagHeap @ 0x18007A050 (RtlCreateTagHeap.c)
 */

NTSTATUS __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  PVOID DllHandle; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(DllHandle) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_22:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = CsrClientProcess;
  if ( OutHeaders->OptionalHeader.Subsystem != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1u, 0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(
               DllHandle,
               (PANSI_STRING)&ProcedureName,
               0,
               &CsrServerApiRoutine,
               0,
               Callback);
    if ( result < 0 )
      return result;
    CsrPortHeap = NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap(CsrPortHeap, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_22;
  }
  result = 0;
  if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_18;
    result = CsrpConnectToServer(Src, (__int64)&DllHandle);
    if ( result < 0 )
      return result;
    if ( (int)DllHandle < 0 )
LABEL_18:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
