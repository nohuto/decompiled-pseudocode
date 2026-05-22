/*
 * XREFs of ?GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z @ 0x1801001E8
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180100088 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x180101C0C (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall ManipulationInjector::GetFirstContactIndexForDeviceId(
        ManipulationInjector *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // r8d
  __int64 result; // rax
  _DWORD *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 12);
  result = 0LL;
  if ( !v4 )
LABEL_5:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1172LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
  v6 = (_DWORD *)((char *)this + 712);
  while ( *v6 != a2 )
  {
    result = (unsigned int)(result + 1);
    ++v6;
    if ( (unsigned int)result >= v4 )
      goto LABEL_5;
  }
  return result;
}
