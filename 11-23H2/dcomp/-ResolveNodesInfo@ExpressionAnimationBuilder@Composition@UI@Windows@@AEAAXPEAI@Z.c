/*
 * XREFs of ?ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z @ 0x18005AB40
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ?GenerateNodeBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@IEAAJPEAPEAEPEAIPEAV1234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@111@Z @ 0x18005AA50 (-GenerateNodeBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@IEAAJPEAPEAEPEAIPEAV1234@.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ResolveNodesInfo(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        unsigned int *a2)
{
  __int64 v2; // rax
  int v4; // r10d
  int *v5; // r11
  int v6; // ecx
  __int64 v7; // r10
  int v8; // ecx

  v2 = 0LL;
  for ( *a2 = 0; (unsigned int)v2 < *((_DWORD *)this + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v4 = 4;
    v5 = *(int **)(*((_QWORD *)this + 2) + 8 * v2);
    v6 = *v5;
    if ( *v5 == 10 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 28) + 8LL * (unsigned int)v5[1]);
      if ( *(_BYTE *)(v7 + 28) )
      {
        v8 = *(_DWORD *)(v7 + 24);
        if ( v8 == 52 )
        {
LABEL_11:
          v4 = 16;
        }
        else
        {
          switch ( v8 )
          {
            case 17:
            case 18:
LABEL_5:
              v4 = 8;
              break;
            case 35:
LABEL_16:
              v4 = 12;
              break;
            case 69:
            case 70:
            case 71:
LABEL_18:
              v4 = 20;
              break;
            case 104:
LABEL_19:
              v4 = 28;
              break;
            case 265:
LABEL_14:
              v4 = 68;
              break;
            default:
LABEL_15:
              Microsoft::WRL2::FailFast::Unexpected(0LL);
          }
        }
      }
      else
      {
        v4 = 8;
      }
    }
    else if ( v6 != 15 )
    {
      switch ( v6 )
      {
        case 0:
        case 1:
        case 9:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 77:
        case 78:
        case 79:
          goto LABEL_5;
        case 2:
        case 51:
          goto LABEL_16;
        case 3:
        case 101:
          goto LABEL_11;
        case 4:
        case 5:
        case 6:
          goto LABEL_18;
        case 7:
          goto LABEL_19;
        case 8:
          goto LABEL_14;
        case 11:
        case 12:
        case 13:
        case 14:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 76:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
          break;
        case 52:
          v4 = v5[2] + v5[1] + 12;
          break;
        case 102:
          v4 = 24;
          break;
        default:
          goto LABEL_15;
      }
    }
    *a2 += v4;
  }
}
