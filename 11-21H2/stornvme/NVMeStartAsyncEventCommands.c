/*
 * XREFs of NVMeStartAsyncEventCommands @ 0x1C00093EC
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x1C0009474 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeStartAsyncEventCommands(__int64 a1)
{
  unsigned __int16 v2; // dx
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // rsi

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v2 = 4;
    v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1640) + 259LL);
    if ( (unsigned int)(v3 + 1) < 4 )
      v2 = v3 + 1;
    v4 = a1 + 968;
    v5 = v2;
    do
    {
      NVMeIssueAsyncEventCommand(a1, v4);
      v4 += 112LL;
      --v5;
    }
    while ( v5 );
  }
  return 1;
}
