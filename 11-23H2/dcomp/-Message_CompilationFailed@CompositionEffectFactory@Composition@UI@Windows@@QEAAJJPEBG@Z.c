/*
 * XREFs of ?Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z @ 0x180176AA4
 * Callers:
 *     ?Thunk_Message_CompilationFailed_72@?$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180176C30 (-Thunk_Message_CompilationFailed_72@-$IEffectTemplateEvent_Receive@VCompositionEffectFactory@Com.c)
 * Callees:
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectFactory::Message_CompilationFailed(
        Windows::UI::Composition::CompositionEffectFactory *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  HSTRING v7; // rdx
  __int64 v8; // rdx
  HRESULT v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF
  Windows::UI::Composition::BatchController *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  string = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    WindowsDeleteString(0LL);
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = WindowsCreateString(a3, v8, &string);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        361LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectfactory.cpp",
        (const char *)(unsigned int)v9,
        v14);
    v7 = string;
  }
  if ( (unsigned int)RoOriginateError(a2, v7) )
    GetRestrictedErrorInfo((char *)this + 184, v10);
  v11 = 1;
  if ( a2 == -2147024809 || a2 == -2147483629 )
  {
    v3 = a2;
    v12 = 3;
  }
  else
  {
    v12 = 1;
  }
  *((_DWORD *)this + 44) = v12;
  *((_DWORD *)this + 45) = v3;
  if ( a2 != -2147024809 )
    v11 = -1;
  *((_DWORD *)this + 48) = v11;
  Windows::UI::Composition::CompositorCommon::GetBatchController(*((_QWORD *)this + 3), 2, &v17);
  Windows::UI::Composition::BatchController::NotifyObjectCompleted(
    v17,
    (Windows::UI::Composition::CompositionEffectFactory *)((char *)this + 200));
  WindowsDeleteString(string);
  return 0LL;
}
