/*
 * XREFs of CempHostInfoInitialize @ 0x18009CCD4
 * Callers:
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180073300 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(char *a1, PSID SourceSid, int a3, int a4, __int64 a5, unsigned __int16 *a6)
{
  __int64 result; // rax

  memset_0(a6, 0, 0x228uLL);
  StringCchCopyW((char *)a6, 232LL, a1);
  RtlCopySid(0x44u, a6 + 232, SourceSid);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_QWORD *)a6 + 68) = a5;
  *((_DWORD *)a6 + 134) = a4;
  return result;
}
