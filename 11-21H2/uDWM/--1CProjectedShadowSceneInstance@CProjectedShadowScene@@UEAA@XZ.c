/*
 * XREFs of ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800C9D74
 * Callers:
 *     ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800C9E70 (--_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::~CProjectedShadowSceneInstance(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  PVOID v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  while ( 1 )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 16), &RestartKey);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 16), v2);
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
