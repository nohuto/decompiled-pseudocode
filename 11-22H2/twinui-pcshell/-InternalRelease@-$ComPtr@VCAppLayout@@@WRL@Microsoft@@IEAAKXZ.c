/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAppLayout@@@WRL@Microsoft@@IEAAKXZ @ 0x180140ABC
 * Callers:
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18016C4CC (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWin.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAppLayout>::InternalRelease(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::Release(
             v4,
             v4,
             a3,
             a4);
  }
  return result;
}
