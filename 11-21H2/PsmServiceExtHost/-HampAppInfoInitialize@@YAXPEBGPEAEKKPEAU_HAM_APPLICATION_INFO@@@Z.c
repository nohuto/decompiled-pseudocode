/*
 * XREFs of ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18000700C
 * Callers:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180006FA8 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180007110 (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampAppInfoInitialize(
        const unsigned __int16 *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  unsigned int v9; // r9d

  memset_0(a5, 0, 0x218uLL);
  HampAppInfoValidate(a1, a2, a3, v9);
  StringCchCopyW((unsigned __int16 *)a5, 0xE8uLL, a1);
  RtlCopySid(0x44u, (char *)a5 + 464, a2);
  *((_DWORD *)a5 + 133) = a4;
}
