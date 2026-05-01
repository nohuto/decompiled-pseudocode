/*
 * XREFs of ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x18058A970
 * Callers:
 *     ??_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z @ 0x18058ABE0 (--_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z @ 0x180596140 (--_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z.c)
 *     ??_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z @ 0x180596AB0 (--_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

void __fastcall ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(ItemAnimationCoordinatorBase *this)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rsi
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rbp
  __int64 v16; // r14
  __int64 *v17; // rbx
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi

  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((ItemAnimationCoordinatorBase *)((char *)this + 216));
  v2 = (unsigned __int64 *)((char *)this + 192);
  if ( *((_QWORD *)this + 23) )
  {
    v3 = 0LL;
    if ( *v2 )
    {
      v4 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v4 + *((_QWORD *)this + 23)));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *v2 );
    }
    CoTaskMemFree(*((LPVOID *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
  *v2 = 0LL;
  v5 = (unsigned __int64 *)((char *)this + 160);
  *((_QWORD *)this + 26) = 0LL;
  if ( *((_QWORD *)this + 19) )
  {
    v6 = 0LL;
    if ( *v5 )
    {
      v7 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v7 + *((_QWORD *)this + 19)));
        ++v6;
        v7 += 48LL;
      }
      while ( v6 < *v5 );
    }
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *v5 = 0LL;
  v8 = (unsigned __int64 *)((char *)this + 128);
  *((_QWORD *)this + 22) = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v9 = 0LL;
    if ( *v8 )
    {
      v10 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v10 + *((_QWORD *)this + 15) + 8LL));
        ++v9;
        v10 += 32LL;
      }
      while ( v9 < *v8 );
    }
    CoTaskMemFree(*((LPVOID *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  *v8 = 0LL;
  v11 = (unsigned __int64 *)((char *)this + 96);
  *((_QWORD *)this + 18) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v12 = 0LL;
    if ( *v11 )
    {
      v13 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v13 + *((_QWORD *)this + 11) + 8LL));
        ++v12;
        v13 += 32LL;
      }
      while ( v12 < *v11 );
    }
    CoTaskMemFree(*((LPVOID *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *v11 = 0LL;
  v14 = (unsigned __int64 *)((char *)this + 64);
  *((_QWORD *)this + 14) = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v15 = 0LL;
    if ( *v14 )
    {
      v16 = 0LL;
      do
      {
        v17 = (__int64 *)(v16 + *((_QWORD *)this + 7));
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v17 + 1);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
        ++v15;
        v16 += 16LL;
      }
      while ( v15 < *v14 );
    }
    CoTaskMemFree(*((LPVOID *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  *v14 = 0LL;
  v18 = (unsigned __int64 *)((char *)this + 32);
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 3) )
  {
    v19 = 0LL;
    if ( *v18 )
    {
      v20 = 0LL;
      do
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v20 + *((_QWORD *)this + 3) + 8LL));
        ++v19;
        v20 += 32LL;
      }
      while ( v19 < *v18 );
    }
    CoTaskMemFree(*((LPVOID *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  *v18 = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 2);
}
