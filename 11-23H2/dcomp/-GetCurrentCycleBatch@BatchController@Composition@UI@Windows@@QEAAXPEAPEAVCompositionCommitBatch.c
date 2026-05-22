/*
 * XREFs of ?GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch@234@@Z @ 0x180002D74
 * Callers:
 *     ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC (-GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEA.c)
 * Callees:
 *     ??$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVBatchController@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCommitBatch@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVBatchController@456@@Z @ 0x180002DCC (--$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@23.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::BatchController::GetCurrentCycleBatch(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::CompositionCommitBatch **a2)
{
  int v4; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass **v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*this )
  {
    v6 = this;
    v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::BatchController *>(
           this,
           this + 3,
           &v6);
    if ( v4 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
  }
  if ( *this )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*this);
  *a2 = *this;
}
