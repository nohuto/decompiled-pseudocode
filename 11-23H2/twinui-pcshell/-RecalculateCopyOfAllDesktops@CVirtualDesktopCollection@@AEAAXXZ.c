/*
 * XREFs of ?RecalculateCopyOfAllDesktops@CVirtualDesktopCollection@@AEAAXXZ @ 0x18013F508
 * Callers:
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x1805FC0E0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18013F650 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 */

void __fastcall CVirtualDesktopCollection::RecalculateCopyOfAllDesktops(CVirtualDesktopCollection *this)
{
  _QWORD *v2; // rdi
  char *v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // r15
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbx
  void *v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 112);
  CTSimpleArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IVirtualDesktop>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::RemoveAll((char *)this + 112);
  v3 = (char *)this + (-(__int64)(*((_BYTE *)this + 152) != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 80;
  v4 = *((_BYTE *)this + 152) != 0 ? 0x20 : 0;
  v5 = *(__int64 **)((char *)this + v4 + 48);
  v6 = &v5[*(_QWORD *)((char *)this + v4 + 56)];
  while ( v5 != v6 )
  {
    v7 = *v5;
    v21 = *v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v9 = v2[1];
    if ( v9 != v2[3]
      || (v10 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  (__int64)v2,
                  v9 + 1,
                  v8),
          v9 = v2[1],
          v10 >= 0) )
    {
      v11 = v9 + 1;
      v2[1] = v11;
      v12 = (__int64 *)(*v2 - 8LL + 8 * v11);
      if ( v12 )
      {
        *v12 = v7;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    ++v5;
  }
  v13 = *(__int64 **)v3;
  v14 = *(_QWORD *)v3 + 8LL * *((_QWORD *)v3 + 1);
  while ( v13 != (__int64 *)v14 )
  {
    v15 = *v13;
    v21 = *v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
    v17 = v2[1];
    if ( v17 != v2[3]
      || (v18 = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                  (__int64)v2,
                  v17 + 1,
                  v16),
          v17 = v2[1],
          v18 >= 0) )
    {
      v19 = v17 + 1;
      v2[1] = v19;
      v20 = (__int64 *)(*v2 - 8LL + 8 * v19);
      if ( v20 )
      {
        *v20 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
    ++v13;
  }
}
