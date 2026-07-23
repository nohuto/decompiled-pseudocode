/*
 * XREFs of sub_1408436C0 @ 0x1408436C0
 * Callers:
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842D54 @ 0x140842D54 (sub_140842D54.c)
 *     sub_140A1467C @ 0x140A1467C (sub_140A1467C.c)
 *     sub_140A146C0 @ 0x140A146C0 (sub_140A146C0.c)
 */

_BOOL8 __fastcall sub_1408436C0(__int64 a1, unsigned int a2)
{
  BOOL v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

  v4 = 1;
  memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  v5 = (VersionInformation.dwBuildNumber | ((VersionInformation.dwMinorVersion | ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16;
  v6 = sub_140792CCC(a1, a2, 20509);
  if ( v6 )
  {
    v10 = sub_140842904(a1, v6, 0LL);
    v4 = sub_140A146C0(v10, v5) != 0;
  }
  v7 = sub_140792CCC(a1, a2, 20511);
  if ( v7 )
  {
    v11 = sub_140842904(a1, v7, 0LL);
    v4 = v4 && (unsigned int)sub_140A1467C(v11, v5);
  }
  v8 = sub_140792CCC(a1, a2, 20510);
  if ( v8 )
  {
    v12 = sub_140842904(a1, v8, 0LL);
    return v4 && sub_140842D54(v12, v5);
  }
  return v4;
}
