/*
 * XREFs of ?GetReceiverAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowReceiver@234@I@Z @ 0x1801837E4
 * Callers:
 *     ?GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowReceiver@345@PEAI@Z @ 0x1801A34E0 (-GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICo.c)
 *     ?MoveNext@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A35F0 (-MoveNext@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?get_Current@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1801A3700 (-get_Current@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAPEAU.c)
 *     ?get_HasCurrent@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A37B0 (-get_HasCurrent@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJPEAE.c)
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::CompositionProjectedShadowReceiver *__fastcall Windows::UI::Composition::CompositionProjectedShadow::GetReceiverAtIndex(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        unsigned int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 27);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 28) - v2) >> 3) )
    return 0LL;
  else
    return *(struct Windows::UI::Composition::CompositionProjectedShadowReceiver **)(v2 + 8LL * a2);
}
