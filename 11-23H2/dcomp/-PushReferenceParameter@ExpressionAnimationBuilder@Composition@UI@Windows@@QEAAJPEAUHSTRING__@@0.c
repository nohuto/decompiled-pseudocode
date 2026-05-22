/*
 * XREFs of ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4
 * Callers:
 *     ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E5A8 (-ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918 (-PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMP.c)
 *     ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z @ 0x18003E940 (-AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJPEAPEAUEx.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B730E (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ??_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x18016288C (--_GExpressionParameter@Composition@UI@Windows@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z @ 0x180163468 (-Remove@-$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z.c)
 *     ?Remove@?$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionParameter@Composition@UI@Windows@@@Z @ 0x1801634D4 (-Remove@-$DynArray@PEAUExpressionParameter@Composition@UI@Windows@@$0A@@@QEAAHAEBQEAUExpressionP.c)
 *     ?GetMaskedOutputType@SubchannelMaskInfo@@SA?AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z @ 0x1801B34E0 (-GetMaskedOutputType@SubchannelMaskInfo@@SA-AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PushReferenceParameter(
        _DWORD *a1,
        HSTRING a2,
        HSTRING a3,
        unsigned int a4,
        Windows::UI::Composition::ExpressionParameter *a5)
{
  char v5; // r13
  bool v10; // al
  struct Windows::UI::Composition::ExpressionParameterNode *v11; // rbp
  Windows::UI::Composition::ExpressionParameter *v12; // rbx
  int MaskedOutputType; // r11d
  unsigned int ExpressionTypeChannelCount; // r9d
  unsigned __int8 *v15; // r10
  unsigned int v16; // eax
  Windows::UI::Composition::ExpressionAnimationBuilder *v17; // rcx
  signed int v18; // edi
  int v19; // eax
  unsigned int v20; // eax
  struct Windows::UI::Composition::ExpressionParameterNode *v22[2]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v10 = a5 && *((_BYTE *)a5 + 4);
  v11 = 0LL;
  v12 = 0LL;
  v22[0] = 0LL;
  MaskedOutputType = a4;
  a5 = 0LL;
  if ( v10 )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(a4);
    v16 = *v15;
    if ( ExpressionTypeChannelCount <= v16 )
    {
      if ( ExpressionTypeChannelCount < v16 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
    }
    else
    {
      MaskedOutputType = SubchannelMaskInfo::GetMaskedOutputType(*v15, a4);
    }
  }
  v18 = Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(a1, MaskedOutputType);
  if ( v18 < 0 )
  {
    v20 = 1634;
  }
  else
  {
    v5 = 1;
    v19 = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateParameterNodeInBuffer(v17, v22, &a5);
    v12 = a5;
    v18 = v19;
    if ( v19 < 0 )
    {
      v20 = 1643;
    }
    else
    {
      v18 = WindowsDuplicateString(a2, (HSTRING *)a5 + 1);
      if ( v18 >= 0 )
      {
        *((_DWORD *)v12 + 6) = a4;
        *((_BYTE *)v12 + 28) = 0;
        WindowsDuplicateString(a3, (HSTRING *)v12 + 2);
        return 0;
      }
      v20 = 1645;
    }
    v11 = v22[0];
  }
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *)"W", 1u, v18, v20, 0LL);
  if ( v5 && *a1 )
    --*a1;
  v22[0] = v11;
  DynArray<ExpressionNode *,0>::Remove(a1 + 4, v22);
  operator delete(v11);
  DynArray<Windows::UI::Composition::ExpressionParameter *,0>::Remove(a1 + 56, &a5);
  if ( v12 )
    Windows::UI::Composition::ExpressionParameter::`scalar deleting destructor'(v12);
  return (unsigned int)v18;
}
