/*
 * XREFs of PnpTraceInterruptConnection @ 0x14078EDC4
 * Callers:
 *     IoDisconnectInterrupt @ 0x14078E3C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14078E950 (IopConnectInterrupt.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void PnpTraceInterruptConnection()
{
  __int64 v0; // r8
  int v1; // r9d
  char v2; // r10
  char v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  char *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03918, 0x400000000000LL) )
    {
      v8 = 8LL;
      v4 = (unsigned int)(v1 - 4);
      v7 = &v4;
      v10 = v4;
      v9 = &v3;
      v3 = v2;
      v11 = &v5;
      v5 = 0x1000000LL;
      v12 = 8LL;
      tlgWriteAgg((__int64)&dword_140C03918, (unsigned __int8 *)&word_14002CC8A, v0, v1, &v6);
    }
  }
}
