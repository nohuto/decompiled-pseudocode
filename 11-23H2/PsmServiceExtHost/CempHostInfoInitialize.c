/*
 * XREFs of CempHostInfoInitialize @ 0x180013D48
 * Callers:
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180070914 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C40 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
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
