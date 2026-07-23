/*
 * XREFs of LdrpEtwLogLoaderSnaps @ 0x1800DACB8
 * Callers:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlStringCchPrintfExW @ 0x180054298 (RtlStringCchPrintfExW.c)
 *     RtlMultiByteToUnicodeN @ 0x180059010 (RtlMultiByteToUnicodeN.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 *     RtlStringVPrintfWorkerA @ 0x1800DC550 (RtlStringVPrintfWorkerA.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpEtwLogLoaderSnaps(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  struct _PEB *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // bx
  ULONG v13; // edx
  ULONG BytesInUnicodeString[2]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v16[2]; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+6Ch] [rbp-94h]
  WCHAR *v18; // [rsp+70h] [rbp-90h]
  _WORD v19[2]; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+7Ch] [rbp-84h]
  _WORD *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  _WORD v23[128]; // [rsp+90h] [rbp-70h] BYREF
  CHAR MultiByteString[256]; // [rsp+190h] [rbp+90h] BYREF
  WCHAR UnicodeString[256]; // [rsp+290h] [rbp+190h] BYREF

  v5 = a2;
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v10 = (__int64)v8->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( *(char *)v10 < 0 )
      {
        memset_thunk_772440563353939046(v23, 0, 0x100uLL);
        memset_thunk_772440563353939046(MultiByteString, 0, 0x100uLL);
        memset_thunk_772440563353939046(UnicodeString, 0, 0x200uLL);
        v20 = 0;
        v17 = 0;
        LODWORD(v8) = RtlStringCchPrintfExW(
                        v23,
                        0x80uLL,
                        0LL,
                        (unsigned __int64 *)BytesInUnicodeString,
                        0,
                        L"%04x:%04x @ %08d - %S - %S",
                        LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
                        LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
                        (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
                        a1,
                        (&off_180133268)[2 * v5]);
        if ( !(_DWORD)v8 || (_DWORD)v8 == -2147483643 )
        {
          v12 = 128 - LOWORD(BytesInUnicodeString[0]);
          *(_QWORD *)BytesInUnicodeString = 0LL;
          v19[1] = 256;
          v19[0] = 2 * v12;
          v21 = v23;
          LODWORD(v8) = RtlStringVPrintfWorkerA(MultiByteString, v11, BytesInUnicodeString, a3, a4);
          v13 = 256 - BytesInUnicodeString[0];
          if ( (int)((_DWORD)v8 + 0x80000000) < 0 || (_DWORD)v8 == -2147483643 )
          {
            if ( !(_DWORD)v8 )
            {
LABEL_17:
              v16[1] = 512;
              v16[0] = 2 * (256 - v13);
              v18 = UnicodeString;
              LODWORD(v8) = RtlMultiByteToUnicodeN(
                              UnicodeString,
                              0x200u,
                              BytesInUnicodeString,
                              MultiByteString,
                              256 - v13);
              if ( !(_DWORD)v8 )
                LODWORD(v8) = LdrpLogEtwEvent(5335, 0, 0, 0, (__int64)v19, (__int64)v16);
              return (int)v8;
            }
          }
          else
          {
            v13 = v22;
          }
          if ( (_DWORD)v8 != -2147483643 )
            return (int)v8;
          goto LABEL_17;
        }
      }
    }
  }
  return (int)v8;
}
