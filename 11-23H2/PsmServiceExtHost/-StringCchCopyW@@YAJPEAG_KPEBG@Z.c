/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C40
 * Callers:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     CempHostInfoInitialize @ 0x180013D48 (CempHostInfoInitialize.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CempUtilPackageInfoInitialize @ 0x1800361B0 (CempUtilPackageInfoInitialize.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368C4 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800418CC (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071A2C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180076434 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180079F08 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F330 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  unsigned int v4; // r11d
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v3 = 2147483646 - a2;
    v4 = 0;
    v5 = a3 - a1;
    while ( v3 + a2 )
    {
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
      {
        if ( !a2 )
        {
LABEL_6:
          a1 -= 2;
          v4 = -2147024774;
          break;
        }
        break;
      }
      *(_WORD *)a1 = v6;
      a1 += 2;
      if ( !--a2 )
        goto LABEL_6;
    }
    result = v4;
    goto LABEL_9;
  }
  result = 2147942487LL;
  if ( a2 )
LABEL_9:
    *(_WORD *)a1 = 0;
  return result;
}
