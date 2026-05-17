/*
 * XREFs of LdrpEtwLogLoaderSnaps @ 0x1800DAF24
 * Callers:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x180003FA4 (RtlStringCchPrintfExW.c)
 *     RtlMultiByteToUnicodeN @ 0x18000DD40 (RtlMultiByteToUnicodeN.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     RtlStringVPrintfWorkerA @ 0x1800DC680 (RtlStringVPrintfWorkerA.c)
 */

struct _PEB *__fastcall LdrpEtwLogLoaderSnaps(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  struct _PEB *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // bx
  int v13; // edx
  unsigned __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v15[2]; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h]
  _BYTE *v17; // [rsp+70h] [rbp-90h]
  _WORD v18[2]; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+7Ch] [rbp-84h]
  _WORD *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  _WORD v22[128]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[256]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v24[512]; // [rsp+290h] [rbp+190h] BYREF

  v5 = a2;
  result = (struct _PEB *)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v9 = (__int64)result->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v10 = (__int64)result->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( *(char *)v10 < 0 )
      {
        memset(v22, 0, sizeof(v22));
        memset(v23, 0, sizeof(v23));
        memset(v24, 0, sizeof(v24));
        v19 = 0;
        v16 = 0;
        result = (struct _PEB *)RtlStringCchPrintfExW(
                                  v22,
                                  0x80uLL,
                                  0LL,
                                  &v14,
                                  0,
                                  L"%04x:%04x @ %08d - %S - %S",
                                  LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
                                  LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
                                  (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
                                  a1,
                                  (&off_18012C228)[2 * v5]);
        if ( !(_DWORD)result || (_DWORD)result == -2147483643 )
        {
          v12 = 128 - v14;
          v14 = 0LL;
          v18[1] = 256;
          v18[0] = 2 * v12;
          v20 = v22;
          result = (struct _PEB *)RtlStringVPrintfWorkerA(v23, v11, &v14, a3, a4);
          v13 = 256 - v14;
          if ( (int)((_DWORD)result + 0x80000000) < 0 || (_DWORD)result == -2147483643 )
          {
            if ( !(_DWORD)result )
            {
LABEL_17:
              v15[1] = 512;
              v15[0] = 2 * (256 - v13);
              v17 = v24;
              result = (struct _PEB *)RtlMultiByteToUnicodeN(
                                        (__int64)v24,
                                        512LL,
                                        (__int64)&v14,
                                        (__int64)v23,
                                        256 - v13);
              if ( !(_DWORD)result )
                return (struct _PEB *)LdrpLogEtwEvent(5335, 0, 0, 0, (__int64)v18, (__int64)v15);
              return result;
            }
          }
          else
          {
            v13 = v21;
          }
          if ( (_DWORD)result != -2147483643 )
            return result;
          goto LABEL_17;
        }
      }
    }
  }
  return result;
}
