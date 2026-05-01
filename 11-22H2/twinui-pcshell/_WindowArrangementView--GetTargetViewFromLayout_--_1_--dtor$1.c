/*
 * XREFs of _WindowArrangementView::GetTargetViewFromLayout_::_1_::dtor$1 @ 0x1805D23DE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BD28 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall WindowArrangementView::GetTargetViewFromLayout_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(*(__int64 **)(a2 + 88));
  }
  return result;
}
