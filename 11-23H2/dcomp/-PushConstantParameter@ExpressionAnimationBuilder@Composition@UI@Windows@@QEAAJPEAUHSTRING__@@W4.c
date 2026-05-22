/*
 * XREFs of ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C
 * Callers:
 *     ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E5A8 (-ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@_N@Z @ 0x180057060 (-ProcessIdentifier@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_map@V-.c)
 *     ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z @ 0x18005A460 (-ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEBGII_N@Z.c)
 * Callees:
 *     ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918 (-PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMP.c)
 *     ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z @ 0x18003E940 (-AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUEx.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x18016288C (--_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z @ 0x180163468 (-Remove@-$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionParameter@Composition@UI@Windows@@@Z @ 0x1801634D4 (-Remove@-$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionP.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PushConstantParameter(
        _DWORD *a1,
        HSTRING a2,
        unsigned int a3)
{
  struct Windows::UI::Composition::ExpressionParameterNode *v4; // rbp
  Windows::UI::Composition::ExpressionParameter *v5; // rbx
  char v8; // r12
  Windows::UI::Composition::ExpressionAnimationBuilder *v9; // rcx
  HRESULT v10; // edi
  int v11; // eax
  HSTRING v12; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  struct Windows::UI::Composition::ExpressionParameterNode *v16[7]; // [rsp+30h] [rbp-38h] BYREF
  Windows::UI::Composition::ExpressionParameter *v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v16[0] = 0LL;
  v17 = 0LL;
  v8 = 0;
  v10 = Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(a1, a3);
  if ( v10 < 0 )
  {
    v14 = 1695;
  }
  else
  {
    v8 = 1;
    v11 = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateParameterNodeInBuffer(v9, v16, &v17);
    v5 = v17;
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 1704;
    }
    else
    {
      v10 = WindowsDuplicateString(a2, (HSTRING *)v17 + 1);
      if ( v10 >= 0 )
      {
        *((_DWORD *)v5 + 6) = a3;
        *((_BYTE *)v5 + 28) = 1;
        v12 = (HSTRING)*((_QWORD *)v5 + 2);
        if ( v12 )
        {
          WindowsDeleteString(v12);
          *((_QWORD *)v5 + 2) = 0LL;
        }
        return 0;
      }
      v14 = 1706;
    }
    v4 = v16[0];
  }
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v10, v14, 0LL);
  if ( v8 && *a1 )
    --*a1;
  v16[0] = v4;
  DynArray<ExpressionNode *,0>::Remove(a1 + 4, v16);
  operator delete(v4, 8uLL);
  DynArray<Windows::UI::Composition::ExpressionParameter *,0>::Remove(a1 + 56, &v17);
  if ( v5 )
    Windows::UI::Composition::ExpressionParameter::`scalar deleting destructor'(v5, v15);
  return (unsigned int)v10;
}
