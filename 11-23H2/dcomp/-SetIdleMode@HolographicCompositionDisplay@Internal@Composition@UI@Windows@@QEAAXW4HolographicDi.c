/*
 * XREFs of ?SetIdleMode@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXW4HolographicDisplayIdleMode@2345@@Z @ 0x18011A5A4
 * Callers:
 *     ?put_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4HolographicDisplayIdleMode@3456@@Z @ 0x18011ACE0 (-put_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4Holograp.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::SetIdleMode(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_DWORD *)(a1 + 156) & 0xFFFFFFB7;
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 156) = v4;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          185LL,
          (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositiondisplay.cpp",
          a4);
      v4 |= 0x40u;
    }
    else
    {
      v4 |= 8u;
    }
    *(_DWORD *)(a1 + 156) = v4;
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    1,
    v4);
}
