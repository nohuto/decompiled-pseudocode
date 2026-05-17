/*
 * XREFs of CsrClientConnectToServer @ 0x18004B480
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandleEx @ 0x18002A220 (LdrGetDllHandleEx.c)
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x180074A9C (CsrpClientConnectToServer.c)
 *     RtlCreateTagHeap @ 0x180080060 (RtlCreateTagHeap.c)
 */

__int64 __fastcall CsrClientConnectToServer(_WORD *Src, unsigned int a2, __int64 *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v14) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = (__int64)v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_22:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, v12);
  v10 = CsrClientProcess;
  if ( *(_WORD *)(v12[0] + 92LL) != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0LL, 0LL, (__int64)&unk_1801330F0, &v14);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(v14, &qword_180133100, 0, &CsrServerApiRoutine, 0, retaddr);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((void *)CsrPortHeap);
    goto LABEL_22;
  }
  result = 0LL;
  if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_18;
    result = CsrpConnectToServer(Src, a2, a3, a4, &v14);
    if ( (int)result < 0 )
      return result;
    if ( (int)v14 < 0 )
LABEL_18:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
