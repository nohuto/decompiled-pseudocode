/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UICompositionDrawingSurfaceDiagnostics@Composition@UI@Windows@@UICompositionInteropDiagnostics@567@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180100BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics,Windows::UI::Composition::ICompositionInteropDiagnostics>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[5] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
