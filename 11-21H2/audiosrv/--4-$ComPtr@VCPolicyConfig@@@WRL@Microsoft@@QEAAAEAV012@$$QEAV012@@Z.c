/*
 * XREFs of ??4?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004FA60
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CPolicyConfig **__fastcall Microsoft::WRL::ComPtr<CPolicyConfig>::operator=(__int64 a1, __int64 *a2)
{
  CPolicyConfig *v2; // rcx
  __int64 v3; // rax
  CPolicyConfig *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v2 = (CPolicyConfig *)v3;
  }
  v4 = g_PolicyConfig;
  g_PolicyConfig = v2;
  v6 = (__int64)v4;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
  return &g_PolicyConfig;
}
