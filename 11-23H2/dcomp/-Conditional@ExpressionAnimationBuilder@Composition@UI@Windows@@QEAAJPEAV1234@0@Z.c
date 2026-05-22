/*
 * XREFs of ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728
 * Callers:
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@XZ @ 0x18003E768 (-GetOutputType@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA-AW4DCOMPOSITION_EXPRESSIO.c)
 *     ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918 (-PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMP.c)
 *     ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z @ 0x18003F434 (-AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z @ 0x18005AB40 (-ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAI@Z.c)
 *     ?GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ @ 0x180069190 (-GetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAPEAGXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNode@@@Z @ 0x180162AC8 (-DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNo.c)
 *     GetExpressionTypeAsString @ 0x180162AFC (GetExpressionTypeAsString.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::Conditional(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        struct Windows::UI::Composition::ExpressionAnimationBuilder *a2,
        struct Windows::UI::Composition::ExpressionAnimationBuilder *a3)
{
  int v3; // r12d
  char *v4; // rdi
  __int64 v5; // r13
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // esi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // ebx
  unsigned int OutputType; // edi
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 ExpressionTypeAsString; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned __int16 *ErrorContext; // rax
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  void *retaddr; // [rsp+78h] [rbp+40h]
  char v33; // [rsp+80h] [rbp+48h]
  Windows::UI::Composition::ExpressionAnimationBuilder *v34; // [rsp+88h] [rbp+50h] BYREF
  Windows::UI::Composition::ExpressionAnimationBuilder *v35; // [rsp+90h] [rbp+58h] BYREF
  __int64 v36; // [rsp+98h] [rbp+60h] BYREF

  v35 = a3;
  v34 = a2;
  v3 = *((_DWORD *)this + 146);
  v4 = (char *)this + 592;
  v5 = 0LL;
  v33 = 0;
  v36 = 0LL;
  *((_DWORD *)this + 146) = v3 + 1;
  v8 = *((_DWORD *)this + 154);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v30 = -2147024362;
    v31 = 181;
    v17 = -2147024362;
    goto LABEL_30;
  }
  if ( v9 <= *((_DWORD *)this + 153) )
  {
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * v8) = a2;
    *((_DWORD *)this + 154) = v9;
    goto LABEL_4;
  }
  v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 592, 8LL, a2, &v34);
  v17 = v19;
  if ( v19 < 0 )
  {
    v30 = v19;
    v31 = 192;
LABEL_30:
    DoStackCaptureDirect(v30, v31);
    v24 = 3256;
    goto LABEL_31;
  }
LABEL_4:
  v10 = *((_DWORD *)this + 146);
  *((_DWORD *)this + 146) = v10 + 1;
  v11 = *((_DWORD *)v4 + 6);
  v12 = v11 + 1;
  if ( (unsigned int)v12 < v11 )
  {
    v21 = -2147024362;
    v22 = 181;
    v17 = -2147024362;
    goto LABEL_28;
  }
  if ( (unsigned int)v12 <= *((_DWORD *)v4 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * v11) = v35;
    *((_DWORD *)v4 + 6) = v12;
    goto LABEL_7;
  }
  v20 = DynArrayImpl<0>::AddMultipleAndSet(v4, 8LL, v12, &v35);
  v17 = v20;
  if ( v20 < 0 )
  {
    v21 = v20;
    v22 = 192;
LABEL_28:
    DoStackCaptureDirect(v21, v22);
    v24 = 3259;
    goto LABEL_31;
  }
LABEL_7:
  if ( !*(_DWORD *)this )
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 16;
    v23 = 7436;
LABEL_26:
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, -2147024809, v23, 0LL);
    v24 = 3266;
    goto LABEL_31;
  }
  v13 = *((_DWORD *)this + (unsigned int)(*(_DWORD *)this - 1) + 66);
  OutputType = Windows::UI::Composition::ExpressionAnimationBuilder::GetOutputType(v34);
  v15 = Windows::UI::Composition::ExpressionAnimationBuilder::GetOutputType(v35);
  if ( v13 != 17 || OutputType != v15 )
  {
    ExpressionTypeAsString = GetExpressionTypeAsString(v15);
    v26 = GetExpressionTypeAsString(OutputType);
    v27 = GetExpressionTypeAsString(v13);
    ErrorContext = Windows::UI::Composition::ExpressionErrorInfo::GetErrorContext((Windows::UI::Composition::ExpressionErrorInfo *)(*((_QWORD *)this + 1) + 1000LL));
    v29 = StringCchPrintfW(ErrorContext, 120LL, L"<%ws ? %ws : %ws>", v27, v26, ExpressionTypeAsString);
    if ( v29 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
    *(_DWORD *)(*((_QWORD *)this + 1) + 1000LL) = 15;
    v23 = 7469;
    goto LABEL_26;
  }
  v16 = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateNodeInBuffer(this, 52LL, &v36);
  v5 = v36;
  v17 = v16;
  if ( v16 < 0 )
  {
    v24 = 3273;
  }
  else
  {
    *(_DWORD *)(v36 + 12) = v3;
    *(_DWORD *)(v5 + 16) = v10;
    v33 = 1;
    Windows::UI::Composition::ExpressionAnimationBuilder::ResolveNodesInfo(v34, (unsigned int *)(v5 + 4));
    Windows::UI::Composition::ExpressionAnimationBuilder::ResolveNodesInfo(v35, (unsigned int *)(v5 + 8));
    if ( *(_DWORD *)this )
    {
      --*(_DWORD *)this;
      if ( (int)Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(this, OutputType) < 0 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      return 0;
    }
    v17 = -2147024809;
    v24 = 3289;
  }
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v17, v24, 0LL);
  if ( v33 )
    Windows::UI::Composition::ExpressionAnimationBuilder::DeallocateNodeInBuffer(this, (struct ExpressionNode *)v5);
  return v17;
}
