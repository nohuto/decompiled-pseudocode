/*
 * XREFs of ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7BB4
 * Callers:
 *     ?get_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7C30 (-get_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionAnimation@234@PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18014F34C (-GetPropertiesForParameter@CompositionAnimation@Composition@UI@Windows@@IEAAJPEBGPEAVExpressionA.c)
 *     ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x1801950C8 (-Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z.c)
 *     ?GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z @ 0x1801A28E4 (-GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU-$IKeyValuePair@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimation::GetExpression(
        Windows::UI::Composition::ExpressionAnimation *this,
        HSTRING *a2)
{
  HSTRING v2; // rcx
  HRESULT String; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HSTRING)*((_QWORD *)this + 124);
  if ( v2 )
  {
    String = WindowsDuplicateString(v2, a2);
    if ( String < 0 )
    {
      v4 = 391LL;
      goto LABEL_4;
    }
  }
  else
  {
    String = WindowsCreateString(0LL, 0, a2);
    if ( String < 0 )
    {
      v4 = 387LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
        (const char *)(unsigned int)String);
      return (unsigned int)String;
    }
  }
  return 0LL;
}
