/*
 * XREFs of ?EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800075F0
 * Callers:
 *     ?InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180007070 (-InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 *     ?Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180007150 (-Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUIComposi.c)
 *     ?RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180007380 (-RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?First@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x18012FFC0 (-First@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAPEAU-$IIte.c)
 *     ?InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z @ 0x1801300A0 (-InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 *     ?InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180130220 (-InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAU.c)
 *     ?InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z @ 0x180130340 (-InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICo.c)
 *     ?get_Count@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x1801304C0 (-get_Count@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ @ 0x180073030 (-EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterCollection::EnsureValidState(
        Windows::UI::Composition::CompositionProjectedShadowCasterCollection *this)
{
  int valid; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  valid = Windows::UI::Composition::CompositionObject::EnsureValidState(this);
  if ( valid < 0 )
  {
    v4 = 67LL;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 256LL))(*((_QWORD *)this + 19));
    if ( valid >= 0 )
      return 0LL;
    v4 = 69LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowcastercollection.cpp",
    (const char *)(unsigned int)valid,
    v5);
  return (unsigned int)valid;
}
