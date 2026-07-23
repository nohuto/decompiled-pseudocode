/*
 * XREFs of ReportExceptionInternal @ 0x1800E7D68
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8440 (RtlReportExceptionHelper.c)
 *     RtlWerpReportException @ 0x1800E88C0 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     SendMessageToWERService @ 0x1800E88CC (SendMessageToWERService.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        void *a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD ReceiveMessage[176]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA[1].ClientId.UniqueProcess = (void *)__PAIR64__(a1, a5);
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = a2;
  if ( a3 && (_DWORD)v7 )
    memmove(&SendMessageA[1].MessageId, a3, 8 * v7);
  memset((char *)ReceiveMessage + 4, 0, 0x574uLL);
  LODWORD(ReceiveMessage[0]) = 91751760;
  result = SendMessageToWERService(SendMessageA, (PPORT_MESSAGE)ReceiveMessage);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = ReceiveMessage[6];
      return 0LL;
    }
  }
  return result;
}
