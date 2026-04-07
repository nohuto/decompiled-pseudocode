/*
 * XREFs of ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800BF4B0
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800ECE0C (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // eax
  struct CIconicAnimatedVisual *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 18);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v5 = 181;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x228u);
    return (unsigned int)v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 17) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v7);
    if ( v4 < 0 )
    {
      v5 = 192;
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *((unsigned int *)this + 18)) = a2;
    *((_DWORD *)this + 18) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  return (unsigned int)v4;
}
