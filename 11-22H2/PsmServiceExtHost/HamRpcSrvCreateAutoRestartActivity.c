/*
 * XREFs of HamRpcSrvCreateAutoRestartActivity @ 0x180098570
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180070B34 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 */

__int64 __fastcall HamRpcSrvCreateAutoRestartActivity(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        union _HAM_RESTART_PROPERTIES *a9)
{
  __int64 result; // rax
  _BYTE v10[560]; // [rsp+40h] [rbp-248h] BYREF

  result = HampUtilValidateAndCapturePsmInformation((struct _RM_PSM_HOST_INFO *)v10, a2, a3, a4, a5, a6, a7);
  if ( (int)result >= 0 )
  {
    result = ArSrvCheckCreateActivityForHost(0LL, (struct _RM_PSM_HOST_INFO *)v10, 0LL, a8, a9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
