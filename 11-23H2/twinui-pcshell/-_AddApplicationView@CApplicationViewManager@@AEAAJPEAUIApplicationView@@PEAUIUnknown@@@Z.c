/*
 * XREFs of ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E0C30
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18003E9D0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800DFAB0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CBD20 (-AddApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800EE794 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::_AddApplicationView(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  _QWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // r8
  struct IApplicationView *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = (_QWORD *)((char *)this + 672);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v7 = 0;
  v8 = v6[1];
  if ( v8 != v6[3]
    || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
               v6,
               v8 + 1),
        v7 >= 0) )
  {
    v9 = v6[1];
    v6[1] = v9 + 1;
    v10 = (__int64 *)(*v6 + 8 * v9);
    if ( v10 )
    {
      *v10 = 0LL;
      if ( v10 != (__int64 *)&v12 )
      {
        *v10 = (__int64)a2;
        v12 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  if ( v7 >= 0 )
    CApplicationViewManager::RaiseApplicationViewChanged(
      (__int64)this + 136,
      (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
      0,
      (__int64)a3);
  return (unsigned int)v7;
}
