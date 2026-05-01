/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ @ 0x1805A0808
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18059EED0 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@.c)
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18059EFBC (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x18059F4FC (--1-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18059FC34 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18059FCEC (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180549E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
