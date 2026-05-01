/*
 * XREFs of ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x18054FA90
 * Callers:
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::operator() @ 0x1801B68C8 (_lambda_0ccf2911bb3556e965c79eb60c053427_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
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
  __int64 *v9; // rdx
  _QWORD *v10; // rsi
  void *v11; // r8
  __int64 v12; // rdx
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IDCompThumbnail *v16; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 == 3 )
  {
    v4 = (_QWORD *)((char *)this + 64);
    v14[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
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
      v9 = (__int64 *)(*v4 + 8 * v4[1]++);
      if ( v9 )
      {
        *v9 = 0LL;
        if ( v9 != v14 )
        {
          v14[0] = 0LL;
LABEL_12:
          *v9 = (__int64)a3;
        }
      }
    }
  }
  else
  {
    v10 = (_QWORD *)((char *)this + 96);
    v16 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v6 = 2;
    v7 = 0;
    v12 = v10[1];
    if ( v12 != v10[3]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)v10,
                 v12 + 1,
                 v11),
          v7 >= 0) )
    {
      v9 = (__int64 *)(*v10 + 8 * v10[1]++);
      if ( v9 )
      {
        *v9 = 0LL;
        if ( v9 != (__int64 *)&v16 )
        {
          v16 = 0LL;
          goto LABEL_12;
        }
      }
    }
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
  }
  if ( (v6 & 1) != 0 )
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v14);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B2,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
