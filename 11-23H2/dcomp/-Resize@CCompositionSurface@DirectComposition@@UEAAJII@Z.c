/*
 * XREFs of ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800FD004 (-SetRect@CTexturedRectanglePrimitive@DirectComposition@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::Resize(
        DirectComposition::CCompositionSurface *this,
        signed int a2,
        signed int a3)
{
  DirectComposition::CTexturedRectanglePrimitive *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ebx
  DirectComposition::CDeviceLock *v11; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_RECT_F v12; // [rsp+38h] [rbp-30h] BYREF

  v11 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v11);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      (unsigned int)&DCOMPEVENT_RESIZE_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this);
  v8 = *((_QWORD *)this + 4);
  if ( *(_DWORD *)(v8 + 344) || (*(_BYTE *)(*((_QWORD *)this + 5) + 112LL) & 4) != 0 )
  {
    v9 = -2147483634;
  }
  else if ( *((_DWORD *)this + 14) )
  {
    v9 = -2003302399;
  }
  else
  {
    v6 = (DirectComposition::CTexturedRectanglePrimitive *)(a2 == 0);
    if ( (_DWORD)v6 == (a3 == 0) && (a2 || *(int *)(*(_QWORD *)(v8 + 24) + 368LL) >= 2) )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HDRWallpaper>::GetImpl'::`2'::impl)
        || (v9 = DirectComposition::CDevice::CheckClientDrawNotInProgress(*(DirectComposition::CDevice **)(*((_QWORD *)this + 4) + 24LL)),
            v9 >= 0) )
      {
        v9 = DirectComposition::CBitmapInfoFront::Resize(*((DirectComposition::CBitmapInfoFront **)this + 5), a2, a3);
        if ( v9 >= 0 )
        {
          v6 = (DirectComposition::CTexturedRectanglePrimitive *)*((_QWORD *)this + 9);
          if ( v6 )
          {
            v12.left = 0.0;
            v12.top = 0.0;
            v12.right = (float)a2;
            v12.bottom = (float)a3;
            DirectComposition::CTexturedRectanglePrimitive::SetRect(v6, &v12);
          }
        }
      }
    }
    else
    {
      v9 = -2147024809;
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v6, &DCOMPEVENT_RESIZE_Stop, v7, 1LL, &v12);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v11);
  return (unsigned int)v9;
}
