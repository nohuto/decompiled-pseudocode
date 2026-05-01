/*
 * XREFs of ?Update@GhostDivider@@UEAAXUtagPOINT@@@Z @ 0x18052C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 */

void __fastcall GhostDivider::Update(GhostDivider *this, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  LONG x; // ebx
  int v6; // r9d
  int v7; // ebx
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  x = a2.x;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((_BYTE *)this + 93) )
  {
    v6 = *((_DWORD *)this + 20);
    v7 = x - *((_DWORD *)this + 21) / 2;
    *((_DWORD *)this + 19) = v7;
  }
  else
  {
    v7 = *((_DWORD *)this + 19);
    v6 = y - *((_DWORD *)this + 22) / 2;
    *((_DWORD *)this + 20) = v6;
  }
  SetWindowPos(*((HWND *)this + 3), 0LL, v7, v6, 0, 0, 0x5Du);
}
