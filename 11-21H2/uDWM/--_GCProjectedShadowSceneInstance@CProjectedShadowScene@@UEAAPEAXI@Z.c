/*
 * XREFs of ??_GCProjectedShadowSceneInstance@CProjectedShadowScene@@UEAAPEAXI@Z @ 0x1800C9E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ @ 0x1800C9D74 (--1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ.c)
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::`scalar deleting destructor'(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        char a2)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance::~CProjectedShadowSceneInstance(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CProjectedShadowScene::CProjectedShadowSceneInstance *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
