/*
 * XREFs of ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x18060B1B8
 * Callers:
 *     _lambda_57ccf274084369bdcaf7e64bf986fb01_::operator() @ 0x1802175A0 (_lambda_57ccf274084369bdcaf7e64bf986fb01_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection(
        VirtualDesktopGestureWindow *this,
        int a2,
        struct IDCompThumbnail *a3)
{
  _QWORD *v4; // rsi
  void *v5; // r8
  char v6; // bl
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdx
  _QWORD *v11; // rsi
  void *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IDCompThumbnail *v18; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 == 3 )
  {
    v4 = (_QWORD *)((char *)this + 64);
    v16[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
    v6 = 1;
    v7 = 0;
    v8 = v4[1];
    if ( v8 != v4[3]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)v4,
                 v8 + 1,
                 v5),
          v7 >= 0) )
    {
      v9 = v4[1];
      v4[1] = v9 + 1;
      v10 = (__int64 *)(*v4 + 8 * v9);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != v16 )
        {
          v16[0] = 0LL;
LABEL_12:
          *v10 = (__int64)a3;
        }
      }
    }
  }
  else
  {
    v11 = (_QWORD *)((char *)this + 96);
    v18 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v6 = 2;
    v7 = 0;
    v13 = v11[1];
    if ( v13 != v11[3]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)v11,
                 v13 + 1,
                 v12),
          v7 >= 0) )
    {
      v14 = v11[1];
      v11[1] = v14 + 1;
      v10 = (__int64 *)(*v11 + 8 * v14);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != (__int64 *)&v18 )
        {
          v18 = 0LL;
          goto LABEL_12;
        }
      }
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v18);
  }
  if ( (v6 & 1) != 0 )
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v16);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x372,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
