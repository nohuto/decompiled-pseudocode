/*
 * XREFs of ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F670
 * Callers:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F768 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x18007F70C (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 */

void __fastcall HampAppInfoInitialize(
        unsigned __int16 *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  unsigned int v9; // r9d

  memset_0(a5, 0, 0x218uLL);
  HampAppInfoValidate(a1, a2, a3, v9);
  StringCchCopyW((char *)a5, 232LL, (char *)a1);
  RtlCopySid(0x44u, (char *)a5 + 464, a2);
  *((_DWORD *)a5 + 133) = a4;
}
