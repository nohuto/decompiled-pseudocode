/*
 * XREFs of sub_140810734 @ 0x140810734
 * Callers:
 *     ClipInitHandles @ 0x140374A90 (ClipInitHandles.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x1408109D4 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933864 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 */

__int64 sub_140810734()
{
  NTSTATUS v0; // ebx

  dword_140C70A4C = 0;
  dword_140C70A5C = 0;
  qword_140C70A74 = 0LL;
  dword_140C70A7C = 0;
  dword_140C70A44 = 0;
  dword_140C70A48 = 0;
  qword_140C70A50 = 0LL;
  qword_140C70A68 = 0LL;
  qword_140C70A60 = (__int64)sub_1407BEDA0;
  dword_140C70A70 = 54;
  dword_140C70A40 = 8;
  dword_140C70A58 = 10;
  v0 = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_140C70A74 + 4), L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister_EtwRegister_EtwSetInformation(&unk_140C068C0);
  return (unsigned int)v0;
}
