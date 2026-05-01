/*
 * XREFs of wistd::__function::__func__lambda_289e51e165941d4d4f992817f61b40ae__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x1801B0C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1800E14F0 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 */

void __fastcall wistd::__function::__func__lambda_289e51e165941d4d4f992817f61b40ae__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::operator()(
        __int64 a1,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TouchKeyboardExperienceManager::OnHolographicDisplayChanged(*(TouchKeyboardExperienceManager **)(a1 + 8), a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15CB,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
