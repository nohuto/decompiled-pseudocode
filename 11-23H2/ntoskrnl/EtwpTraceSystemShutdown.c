/*
 * XREFs of EtwpTraceSystemShutdown @ 0x1409E7144
 * Callers:
 *     EtwShutdown @ 0x1409E2DAC (EtwShutdown.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE7C0 (KeQuerySystemTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char EtwpTraceSystemShutdown()
{
  char result; // al
  int v1; // [rsp+30h] [rbp-29h] BYREF
  __int64 v2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  int v7; // [rsp+88h] [rbp+2Fh]
  int v8; // [rsp+8Ch] [rbp+33h]
  __int64 *v9; // [rsp+90h] [rbp+37h]
  int v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+9Ch] [rbp+43h]

  v2 = 0LL;
  result = KeQuerySystemTimePrecise(&v2);
  if ( (unsigned int)dword_140C066C0 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140C066C0, 0x400000000000LL);
    if ( result )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v1;
      v3 = v2;
      v7 = 4;
      v9 = &v3;
      v1 = 2;
      v10 = 8;
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140C066C0,
                 (unsigned __int8 *)word_140034C5A,
                 0LL,
                 0LL,
                 4u,
                 &v5);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
