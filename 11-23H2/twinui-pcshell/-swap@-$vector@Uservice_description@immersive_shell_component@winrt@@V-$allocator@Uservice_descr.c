/*
 * XREFs of ?swap@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1800D9228
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800D8F80 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ @ 0x1800D9264 (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::swap(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = *a2;
    v4 = a2[1];
    *a2 = v3;
    v5 = a1[1];
    a1[1] = v4;
    result = a2[2];
    a2[1] = v5;
    v7 = a1[2];
    a1[2] = result;
    a2[2] = v7;
  }
  return result;
}
