/*
 * XREFs of ?GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowCaster@234@I@Z @ 0x1801837B4
 * Callers:
 *     ?GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowCaster@345@PEAI@Z @ 0x18018B2B0 (-GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIComp.c)
 *     ?MoveNext@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x18018B3C0 (-MoveNext@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 *     ?get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x18018B4D0 (-get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAPEAUIC.c)
 *     ?get_HasCurrent@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x18018B580 (-get_HasCurrent@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::CompositionProjectedShadowCaster *__fastcall Windows::UI::Composition::CompositionProjectedShadow::GetCasterAtIndex(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        unsigned int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 24);
  if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 25) - v2) >> 3) )
    return 0LL;
  else
    return *(struct Windows::UI::Composition::CompositionProjectedShadowCaster **)(v2 + 8LL * a2);
}
