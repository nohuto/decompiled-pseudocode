/*
 * XREFs of ?Initialize@CHolographicDisplayProxy@DirectComposition@@QEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@@Z @ 0x1801001DC
 * Callers:
 *     ?CreateHolographicDisplay@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@PEAPEAUIDCompositionHolographicDisplay@@@Z @ 0x1800FFE40 (-CreateHolographicDisplay@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@PEAPEAUI.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicDisplayProxy::Initialize(
        DirectComposition::CHolographicDisplayProxy *this,
        const struct _GUID *a2,
        const struct DXGI_RATIONAL *a3)
{
  DirectComposition::CResourceProxy *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a3 )
    v8 = a3->Denominator | ((unsigned __int64)a3->Numerator << 32);
  v3 = (DirectComposition::CHolographicDisplayProxy *)((char *)this + 8);
  v4 = DirectComposition::CResourceProxy::SetBufferProperty(
         (DirectComposition::CHolographicDisplayProxy *)((char *)this + 8),
         0,
         a2,
         0x10uLL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 41;
    goto LABEL_7;
  }
  v4 = DirectComposition::CResourceProxy::SetBufferProperty(v3, 2, &v8, 8uLL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 42;
LABEL_7:
    DoStackCaptureDirect(v4, v6);
  }
  return v5;
}
