/*
 * XREFs of ?Initialize@CHolographicCompositionProxy@DirectComposition@@QEAAJAEBU_GUID@@I@Z @ 0x180100168
 * Callers:
 *     ?CreateHolographicComposition@CDevice@DirectComposition@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHolographicComposition@@@Z @ 0x1800FFD90 (-CreateHolographicComposition@CDevice@DirectComposition@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHo.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicCompositionProxy::Initialize(
        DirectComposition::CHolographicCompositionProxy *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  DirectComposition::CResourceProxy *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edx

  v4 = (DirectComposition::CHolographicCompositionProxy *)((char *)this + 8);
  v5 = DirectComposition::CResourceProxy::SetBufferProperty(
         (DirectComposition::CHolographicCompositionProxy *)((char *)this + 8),
         0,
         a2,
         0x10uLL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 36;
    goto LABEL_5;
  }
  v5 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(v4, 1, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 37;
LABEL_5:
    DoStackCaptureDirect(v5, v7);
  }
  return v6;
}
