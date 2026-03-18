/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x1C0047100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qzppq_EtwWriteTransfer @ 0x1C0047218 (McTemplateK0qzppq_EtwWriteTransfer.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceAuditApiSetWindowsHookEx(int a1, const unsigned __int16 *a2, char a3, char a4, int a5)
{
  const unsigned __int16 *v7; // r8
  int v8; // r11d
  unsigned __int16 *v9; // r9
  char result; // al
  unsigned __int16 v12[264]; // [rsp+70h] [rbp-228h] BYREF

  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  if ( (W32kEtwEnabledKeyword & 0x400) != 0 )
  {
    LOBYTE(a2) = 1;
    result = byte_1C028DB38 - 1;
    if ( (unsigned __int8)(byte_1C028DB38 - 1) <= 2u
      || (qword_1C028DB20 & 0x400) == 0
      || (result = 0, (qword_1C028DB28 & 0x400) != qword_1C028DB28) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 )
    {
      if ( v7 )
      {
        result = RtlStringCchCopyW(v12, 0x104uLL, v7);
        v9 = v12;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x800000000LL) != 0 )
        return McTemplateK0qzppq_EtwWriteTransfer(a1, (_DWORD)a2, (_DWORD)v7, v8, (__int64)v9, a3, a4, a5, a1);
    }
  }
  return result;
}
