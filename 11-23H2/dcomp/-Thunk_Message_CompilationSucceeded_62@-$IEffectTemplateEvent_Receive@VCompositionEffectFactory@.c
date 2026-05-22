/*
 * XREFs of ?Thunk_Message_CompilationSucceeded_62@?$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180019C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 */

__int64 __fastcall IEffectTemplateEvent_Receive<Windows::UI::Composition::CompositionEffectFactory>::Thunk_Message_CompilationSucceeded_62(
        __int64 a1)
{
  Windows::UI::Composition::BatchController *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 176) = 1;
  Windows::UI::Composition::CompositorCommon::GetBatchController(*(_QWORD *)(a1 + 24), 2LL, &v3);
  Windows::UI::Composition::BatchController::NotifyObjectCompleted(
    v3,
    (struct Windows::UI::Composition::BatchMember *)(a1 + 200));
  return 0LL;
}
