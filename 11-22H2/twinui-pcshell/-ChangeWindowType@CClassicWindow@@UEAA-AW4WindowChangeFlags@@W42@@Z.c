/*
 * XREFs of ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1800D1850
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D1A44 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1802D0480 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 */

__int64 __fastcall CClassicWindow::ChangeWindowType(CClassicWindow *a1, __int16 a2)
{
  unsigned int v2; // r14d
  char v5; // si
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  char v8; // cl
  unsigned __int8 v9; // bp
  char ShouldShowInSwitchers; // di
  bool v12; // zf

  v2 = *((_DWORD *)a1 + 18);
  if ( (a2 & 1) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 | 4;
  }
  else if ( (a2 & 2) != 0 )
  {
    *((_DWORD *)a1 + 18) = v2 & 0xFFFFFFFB;
    CClassicWindow::SetOwner(a1, 0LL);
  }
  if ( (a2 & 4) != 0 )
  {
    *((_DWORD *)a1 + 18) = *((_DWORD *)a1 + 18) & 0xFFFFFFFC | 1;
  }
  else if ( (a2 & 8) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~1u;
  }
  if ( (a2 & 0x20) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 2u;
  }
  else if ( (a2 & 0x40) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~2u;
  }
  if ( (a2 & 0x200) != 0 )
  {
    *((_DWORD *)a1 + 18) |= 8u;
  }
  else if ( (a2 & 0x400) != 0 )
  {
    *((_DWORD *)a1 + 18) &= ~8u;
  }
  v5 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
  {
    if ( (a2 & 0x2000) != 0 )
    {
      *((_DWORD *)a1 + 18) |= 0x10u;
    }
    else if ( (a2 & 0x4000) != 0 )
    {
      *((_DWORD *)a1 + 18) &= ~0x10u;
    }
  }
  v6 = *((_DWORD *)a1 + 18);
  v7 = a2 & 0x10;
  v8 = v2 ^ v6;
  if ( (((unsigned __int8)v2 ^ *((_BYTE *)a1 + 72)) & 4) != 0 )
    v7 |= 2 - ((v6 & 4) != 0);
  if ( (v8 & 1) != 0 )
    v7 |= 4 * ((v6 & 1) == 0) + 4;
  if ( (v8 & 2) != 0 )
    v7 |= (v6 & 2) != 0 ? 32 : 64;
  if ( (unsigned __int8)CClassicWindow::s_ShouldShowInSwitchers(v6) || (v12 = (v6 & 5) == 0, v9 = 0, !v12) )
    v9 = 1;
  if ( (unsigned __int8)CClassicWindow::s_ShouldShowInSwitchers(v2) || (v2 & 5) != 0 )
    v5 = 1;
  if ( v5 != v9 )
    v7 |= ((v9 ^ 1) << 7) + 128;
  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(*((unsigned int *)a1 + 18));
  if ( (unsigned __int8)CClassicWindow::s_ShouldShowInSwitchers(v2) != ShouldShowInSwitchers )
    v7 |= ShouldShowInSwitchers != 0 ? 2048 : 4096;
  return v7;
}
