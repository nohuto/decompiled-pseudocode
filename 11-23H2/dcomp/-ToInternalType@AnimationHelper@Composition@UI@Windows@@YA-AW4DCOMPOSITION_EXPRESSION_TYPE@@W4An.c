/*
 * XREFs of ?ToInternalType@AnimationHelper@Composition@UI@Windows@@YA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationPropertyKind@Private@234@@Z @ 0x180089074
 * Callers:
 *     ?ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180056280 (-ProcessReferenceParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGIIPEA.c)
 *     ?PopulateReferenceNodeInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAUExpressionParameter@234@PEAV1234@PEAVCompositionAnimation@234@PEAUExpressionReferenceNode@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAI55@Z @ 0x180057CA0 (-PopulateReferenceNodeInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAUExpressio.c)
 *     ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C (-AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::AnimationHelper::ToInternalType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  if ( v10 == 1 )
                    return 265;
                }
                else
                {
                  return 104;
                }
              }
              else
              {
                return 70;
              }
            }
            else
            {
              return 71;
            }
          }
          else
          {
            return 69;
          }
        }
        else
        {
          return 52;
        }
      }
      else
      {
        return 35;
      }
    }
    else
    {
      return 17;
    }
  }
  else
  {
    return 18;
  }
  return v1;
}
