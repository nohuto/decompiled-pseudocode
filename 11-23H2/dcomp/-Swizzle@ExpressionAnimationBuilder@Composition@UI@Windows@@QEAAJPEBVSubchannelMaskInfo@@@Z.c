/*
 * XREFs of ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784
 * Callers:
 *     ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ @ 0x18003E668 (-ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918 (-PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMP.c)
 *     ?ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEBVSubchannelMaskInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003EAE8 (-ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@P.c)
 *     ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z @ 0x18003F434 (-AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNode@@@Z @ 0x180162AC8 (-DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNo.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::Swizzle(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        const struct SubchannelMaskInfo *a2)
{
  int v3; // ecx
  struct ExpressionNode *v4; // rbx
  char v5; // bp
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // edi
  __int64 v10; // rdx
  unsigned int v12; // eax
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF
  struct ExpressionNode *v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0;
  v3 = *(_DWORD *)a2;
  v4 = 0LL;
  v5 = 0;
  v14 = 0LL;
  v7 = v3 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_11;
    v8 = 102;
  }
  else
  {
    v8 = 101;
  }
  v9 = Windows::UI::Composition::ExpressionAnimationBuilder::ValidateSwizzle(this, v8, a2, &v13);
  if ( v9 < 0 )
  {
    v12 = 3159;
  }
  else
  {
    v9 = Windows::UI::Composition::ExpressionAnimationBuilder::AllocateNodeInBuffer(this, v8, &v14);
    if ( v9 < 0 )
    {
      v4 = v14;
      v12 = 3166;
    }
    else
    {
      v5 = 1;
      v4 = v14;
      if ( v8 == 101 )
      {
        *(_QWORD *)((char *)v14 + 4) = *(_QWORD *)a2;
        *((_DWORD *)v4 + 3) = *((_DWORD *)a2 + 2);
      }
      else
      {
        *(_OWORD *)((char *)v14 + 8) = *(_OWORD *)a2;
      }
      if ( *(_DWORD *)this )
      {
        v10 = v13;
        --*(_DWORD *)this;
        if ( (int)Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(this, v10) >= 0 )
          return 0;
LABEL_11:
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      }
      v9 = -2147024809;
      v12 = 3193;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(4u, (const int *const)"W", 1u, v9, v12, 0LL);
  if ( v5 )
    Windows::UI::Composition::ExpressionAnimationBuilder::DeallocateNodeInBuffer(this, v4);
  return (unsigned int)v9;
}
