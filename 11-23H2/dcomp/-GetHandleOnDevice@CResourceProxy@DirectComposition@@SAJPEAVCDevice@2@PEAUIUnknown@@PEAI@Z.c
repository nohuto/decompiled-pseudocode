/*
 * XREFs of ?GetHandleOnDevice@CResourceProxy@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAI@Z @ 0x180023F60
 * Callers:
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 * Callees:
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceProxy::GetHandleOnDevice(
        struct DirectComposition::CDevice *a1,
        struct IUnknown *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r9
  __int64 result; // rax
  struct DirectComposition::CProxyTable *v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned int v9; // eax

  v3 = a3;
  if ( !a2 )
  {
    result = 0LL;
LABEL_3:
    *v3 = 0;
    return result;
  }
  v5 = DirectComposition::CProxyTable::FromProxy(a2);
  if ( v5 )
  {
    v8 = *(_QWORD *)v5;
    v9 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  if ( v8 != v7 )
  {
    result = 2147942487LL;
    goto LABEL_3;
  }
  *v3 = v9;
  return 0LL;
}
