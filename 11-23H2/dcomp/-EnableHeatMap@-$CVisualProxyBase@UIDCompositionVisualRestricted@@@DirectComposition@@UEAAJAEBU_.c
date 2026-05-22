/*
 * XREFs of ?EnableHeatMap@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800F1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::EnableHeatMap(
        __int64 a1,
        const void *a2)
{
  DirectComposition::CResourceProxy *v3; // rdi
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (DirectComposition::CResourceProxy *)(a1 + 8);
  v4 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
         (DirectComposition::CResourceProxy *)(a1 + 8),
         15,
         1LL);
  if ( v4 < 0 )
  {
    v5 = 176LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\VisualProxy.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v3, 16, 0xFFFFLL);
  if ( v4 < 0 )
  {
    v5 = 178LL;
    goto LABEL_3;
  }
  v4 = DirectComposition::CResourceProxy::SetBufferProperty(v3, 14, a2, 0x10uLL);
  if ( v4 < 0 )
  {
    v5 = 179LL;
    goto LABEL_3;
  }
  return 0LL;
}
