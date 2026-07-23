/*
 * XREFs of sub_140B0AEE8 @ 0x140B0AEE8
 * Callers:
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_140B0AEE8()
{
  __int64 v0; // r10
  unsigned int *v1; // r8
  int v2; // r11d
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 result; // rax
  _DWORD v7[64]; // [rsp+0h] [rbp-100h] BYREF

  v0 = qword_140C157D0;
  v1 = v7;
  v2 = qword_140C157A0;
  v3 = 64LL;
  qmemcpy(
    v7,
    "Io  Hal MdlPPooLObStIrp NDdbIrpLIoOpMdl FileCMVaSeSdNtFCPoolTCPrCMNbSeTdNtFsTCPTTCPCKey ObSqIoNmIoEaTCPcNtFaNtf0Sect"
    "IrpSTokeSe  ObClCcScNtFLSeAcFSfmCcWkFSimAfdCAfdEFSroNtfnUIRPNpFrNpFRSePaSeUsAcpFAcpMSeScObNmNpFsSeLuScPDEvenRqrvVadl"
    "Pp  VadSVad VadLVadFMmdi",
    sizeof(v7));
  do
  {
    v4 = *v1;
    v5 = v2 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
    while ( *(_DWORD *)(v0 + 80LL * v5) || v5 == qword_140C157C8 - 1 )
    {
      result = v2 & (v5 + 1);
      v5 = result;
      if ( (_DWORD)result == (v2 & ((40543 * (int)v4) ^ ((unsigned __int64)(40543 * v4) >> 32))) )
        goto LABEL_6;
    }
    result = 10LL * v5;
    *(_DWORD *)(v0 + 80LL * v5) = v4;
LABEL_6:
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
