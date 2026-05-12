/*
 * XREFs of ??$_tlgCreate1Sz@G@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z @ 0x1C0007108
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@U6@U6@U6@U6@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@3433888888@Z @ 0x1C0005EA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_tlgWrapperBy.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U4@U4@U4@U4@U4@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U5@U5@U5@U2@U2@U1@U1@U1@U1@U_tlgWrapperBinary@@U1@U1@U1@U1@U2@U2@U2@U1@U1@U1@U2@U2@U2@U3@U3@U1@U1@U1@U1@U1@U2@U3@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U2@U1@U1@U6@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3333AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@6666653AEBU?$_tlgWrapperByRef@$0BA@@@777443333AEBU_tlgWrapperBinary@@3333444333444553333345333AEBU?$_tlgWrapSz@G@@34338@Z @ 0x1C0007148 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U-$_ea_1C0007148.c)
 * Callees:
 *     <none>
 */

void __fastcall _tlgCreate1Sz<unsigned short>(__int64 a1, _WORD *a2)
{
  int v2; // r8d
  __int64 v3; // rax

  if ( a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a2[v3] );
    v2 = 2 * v3 + 2;
  }
  else
  {
    a2 = &unk_1C0012BF8;
    v2 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 12) = 0;
}
