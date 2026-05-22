/*
 * XREFs of ?SetOpacity@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x18006D404
 * Callers:
 *     ?UpdateVisible@VisualTreeIsland@Composition@UI@Windows@@MEAAX_N@Z @ 0x18006D3E0 (-UpdateVisible@VisualTreeIsland@Composition@UI@Windows@@MEAAX_N@Z.c)
 * Callees:
 *     ??$SetAnimatableSparseProperty@VVisual@Composition@UI@Windows@@MP81234@EBAMXZP81234@EAAXM@Z@ProxyObject@Composition@UI@Windows@@IEAAJPEAVVisual@123@AEBMP84123@EBAMXZP84123@EAAXM@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18006D484 (--$SetAnimatableSparseProperty@VVisual@Composition@UI@Windows@@MP81234@EBAMXZP81234@EAAXM@Z@Prox.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetOpacity(Windows::UI::Composition::Visual *this, float a2)
{
  void (__fastcall *v3)(Windows::UI::Composition::Visual *, float); // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  float (__fastcall *v5)(Windows::UI::Composition::Visual *); // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  float v7; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 0;
  v3 = Windows::UI::Composition::Visual::SetSparse_Opacity;
  v5 = Windows::UI::Composition::Visual::GetSparse_Opacity;
  v7 = fminf(1.0, fmaxf(a2, 0.0));
  return Windows::UI::Composition::ProxyObject::SetAnimatableSparseProperty<Windows::UI::Composition::Visual,float,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>(
           (_DWORD)this,
           (_DWORD)this,
           (unsigned int)&v7,
           (unsigned int)&v5,
           (__int64)&v3);
}
