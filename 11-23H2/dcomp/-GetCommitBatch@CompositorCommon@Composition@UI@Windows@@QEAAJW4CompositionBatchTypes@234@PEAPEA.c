/*
 * XREFs of ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z @ 0x180002CBC
 * Callers:
 *     ?GetCommitBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionCommitBatch@345@@Z @ 0x180002C30 (-GetCommitBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUI.c)
 * Callees:
 *     ?ValidateCompositionBatchType@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@@Z @ 0x180002D58 (-ValidateCompositionBatchType@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTy.c)
 *     ?GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch@234@@Z @ 0x180002D74 (-GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::GetCommitBatch(
        __int64 a1,
        unsigned int a2,
        struct Windows::UI::Composition::CompositionCommitBatch **a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  char v9; // al
  bool v11; // zf
  struct Windows::UI::Composition::CompositionCommitBatch *v12; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::UI::Composition::BatchController *v14; // [rsp+58h] [rbp+20h] BYREF

  if ( Microsoft::WRL2::ContextSession::IsSessionThread((Microsoft::WRL2::ContextSession *)a1) )
  {
    v7 = Windows::UI::Composition::CompositorCommon::ValidateCompositionBatchType(v6, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v7,
        (int)v12);
      return v8;
    }
    else
    {
      v14 = 0LL;
      Windows::UI::Composition::CompositorCommon::GetBatchController(a1, a2, &v14);
      v12 = 0LL;
      Windows::UI::Composition::BatchController::GetCurrentCycleBatch(v14, &v12);
      v9 = *(_BYTE *)(a1 + 452);
      if ( (v9 & 1) == 0 )
      {
        v11 = *(_DWORD *)(a1 + 448) == 0;
        *(_BYTE *)(a1 + 452) = v9 | 1;
        if ( v11 )
          Windows::UI::Composition::CompositorCommon::EnableMessageGroup((Windows::UI::Composition::CompositorCommon *)a1);
      }
      *a3 = v12;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)0x8000000ELL,
      (int)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC19,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)0x8000000ELL,
      (int)v12);
    return 2147483662LL;
  }
}
