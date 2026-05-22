/*
 * XREFs of ?IsPropertyDebugged@AnimationLoggingManager@Composition@UI@Windows@@QEAA_NIIPEAPEAVCompObjectDiagnosticsPrincipal@@@Z @ 0x180077510
 * Callers:
 *     ?put_TopInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x1800495B0 (-put_TopInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wind.c)
 *     ?put_RightInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049A80 (-put_RightInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wi.c)
 *     ?put_LeftInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049F50 (-put_LeftInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Win.c)
 *     ?put_BottomInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18004A420 (-put_BottomInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@W.c)
 *     ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x18014F728 (-SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectP.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 */

char __fastcall Windows::UI::Composition::AnimationLoggingManager::IsPropertyDebugged(
        Windows::UI::Composition::AnimationLoggingManager *this,
        unsigned int a2,
        unsigned int a3,
        struct CompObjectDiagnosticsPrincipal **a4)
{
  __int64 *v4; // r10
  __int64 *v5; // rax
  __int64 *v6; // r11
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (__int64 *)*((_QWORD *)this + 17);
  *a4 = 0LL;
  v5 = v4;
  v6 = (__int64 *)v4[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 7) < a2 || *((_DWORD *)v6 + 7) == a2 && *((_DWORD *)v6 + 8) < a3 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  if ( *((_BYTE *)v5 + 25)
    || a2 < *((_DWORD *)v5 + 7)
    || a2 == *((_DWORD *)v5 + 7) && a3 < *((_DWORD *)v5 + 8)
    || v5 == v4 )
  {
    return 0;
  }
  *a4 = *(struct CompObjectDiagnosticsPrincipal **)(*(_QWORD *)std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
                                                                 (char *)this + 152,
                                                                 v8,
                                                                 &v9)
                                                  + 48LL);
  return 1;
}
