/*
 * XREFs of ?Pause@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x180008970
 * Callers:
 *     ?Pause@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ @ 0x180084FB0 (-Pause@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::Pause(Windows::UI::Composition::KeyFrameAnimator *this)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 78) != 1 )
    return 0LL;
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    0x14u,
    2LL);
  v2 = *((_QWORD *)this + 40);
  *((_DWORD *)this + 78) = 2;
  if ( !v2 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x220,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
    (const char *)(unsigned int)v4,
    v6);
  return v5;
}
