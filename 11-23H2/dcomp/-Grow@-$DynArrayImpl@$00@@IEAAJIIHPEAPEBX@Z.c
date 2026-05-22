/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180078698
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0 (--$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z @ 0x180056030 (-ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_N0PEAI@Z.c)
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1800787E0 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  unsigned int v13; // ebp
  unsigned __int64 v14; // rax
  signed int v15; // eax
  int v16; // ecx
  char *v17; // rsi
  char *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // [rsp+20h] [rbp-18h]
  void *v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v21 = 216;
LABEL_31:
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, 0x80070216, v21, 0LL);
    return v9;
  }
  v8 = *(_DWORD *)(a1 + 20);
  v9 = 0;
  if ( v7 <= v8 )
    return v9;
  if ( 4 * (unsigned __int64)v7 > 0xFFFFFFFF )
  {
    v21 = 225;
    goto LABEL_31;
  }
  v10 = 16;
  v11 = v7 - v8;
  if ( v8 <= 0x10 || (v12 = 8092, v10 = *(_DWORD *)(a1 + 20), v8 < 0x1F9C) )
    v12 = v10;
  if ( v11 <= v12 )
    v11 = v12;
  v13 = v8 + v11;
  if ( v13 < v8 || (v14 = 4LL * v13, v14 > 0xFFFFFFFF) )
  {
    v13 = v7;
    LODWORD(v14) = 4 * v7;
  }
  if ( v13 > 0x3FFFFFFF )
  {
    v21 = 251;
    goto LABEL_31;
  }
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
  {
    v15 = HrAlloc((unsigned int)v14, &v22);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x102u, 0LL);
      return v9;
    }
    v16 = *(_DWORD *)(a1 + 24);
    v17 = (char *)v22;
    if ( v16 )
      memcpy_0(v22, *(const void **)a1, (unsigned int)(4 * v16));
  }
  else
  {
    v19 = (char *)DefaultHeap::Realloc(*(void **)a1, (unsigned int)v14);
    v17 = v19;
    if ( !v19 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, 0x8007000E, 0x114u, 0LL);
      return v9;
    }
    if ( v19 != *(char **)a1 )
    {
      if ( a5 )
      {
        v20 = *a5;
        if ( *a5 >= *(_QWORD *)a1 && v20 < *(_QWORD *)a1 + (unsigned __int64)(unsigned int)(4 * *(_DWORD *)(a1 + 20)) )
          *a5 = (unsigned __int64)&v19[v20 - *(_QWORD *)a1];
      }
    }
  }
  memset_0(&v17[4 * *(_DWORD *)(a1 + 20)], 0, 4 * (v13 - *(_DWORD *)(a1 + 20)));
  *(_DWORD *)(a1 + 20) = v13;
  *(_QWORD *)a1 = v17;
  return v9;
}
