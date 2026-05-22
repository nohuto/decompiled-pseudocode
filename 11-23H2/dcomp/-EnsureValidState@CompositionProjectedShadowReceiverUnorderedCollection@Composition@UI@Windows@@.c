/*
 * XREFs of ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60
 * Callers:
 *     ?Add@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x180006B10 (-Add@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAU.c)
 *     ?get_Count@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x180006C30 (-get_Count@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEA.c)
 *     ?RemoveAll@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006CD0 (-RemoveAll@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEA.c)
 *     ?First@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionProjectedShadowReceiver@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x1801A1740 (-First@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPE.c)
 *     ?Remove@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1801A1820 (-Remove@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ @ 0x180073030 (-EnsureValidState@CompositionObject@Composition@UI@Windows@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::EnsureValidState(
        Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection *this)
{
  int valid; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  valid = Windows::UI::Composition::CompositionObject::EnsureValidState(this);
  if ( valid < 0 )
  {
    v4 = 66LL;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 256LL))(*((_QWORD *)this + 19));
    if ( valid >= 0 )
      return 0LL;
    v4 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowreceiverunorderedcollection.cpp",
    (const char *)(unsigned int)valid,
    v5);
  return (unsigned int)valid;
}
