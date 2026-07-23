/*
 * XREFs of sub_1408603A8 @ 0x1408603A8
 * Callers:
 *     sub_140818A90 @ 0x140818A90 (sub_140818A90.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_140818D14 @ 0x140818D14 (sub_140818D14.c)
 */

NTSTATUS __fastcall sub_1408603A8(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  ReturnLength[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = a2;
  v6[3] = Src;
  LODWORD(v6[4]) = 3;
  LODWORD(Src[0]) = 48;
  result = sub_140781F40(2, L"Diagnostics\\Performance\\BootCKCLSettings", (__int64)v6, 0LL);
  if ( result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v4 = Src[0];
      if ( LODWORD(Src[0]) > 0x28 )
      {
        return -1073741789;
      }
      else
      {
        memmove(&unk_140C167C8, (char *)Src + 8, LODWORD(Src[0]));
        sub_140818D14(1, v4 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 &InputBufferLength,
                 InputBufferLength,
                 &InputBufferLength,
                 InputBufferLength,
                 ReturnLength);
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
