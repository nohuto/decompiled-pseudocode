/*
 * XREFs of CempHostInfoInitialize @ 0x180008220
 * Callers:
 *     CempGetTokenHostInfo @ 0x180007FD0 (CempGetTokenHostInfo.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800082C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(
        unsigned __int16 *a1,
        PSID SourceSid,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 result; // rax

  memset_0(a6, 0, 0x228uLL);
  StringCchCopyW(a6, 0xE8uLL, a1);
  RtlCopySid(0x44u, a6 + 232, SourceSid);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_QWORD *)a6 + 68) = a5;
  *((_DWORD *)a6 + 134) = a4;
  return result;
}
