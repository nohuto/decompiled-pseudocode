/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18012789C
 * Callers:
 *     ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180020B60 (-s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18005CA90 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800E9710 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800EAA20 (-HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicatio.c)
 *     ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x1805B6640 (-RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180127AD4 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  char *v9; // rax
  char *v10; // rsi
  unsigned __int64 v11; // rax

  v3 = -2147024774;
  if ( a2 <= 0xFFFFFFFE )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v3 = 0;
    if ( a2 > v4 )
    {
      v5 = 2 * v4;
      if ( !is_mul_ok(v4, 2uLL) )
        return (unsigned int)-2147024362;
      v6 = v4;
      v7 = v4 + 4096;
      if ( v6 <= 0x1000 )
        v7 = v5;
      if ( a2 > v7 )
      {
        v7 = a2;
      }
      else if ( v7 > 0xFFFFFFFE )
      {
        v7 = 4294967294LL;
      }
      v8 = 8 * v7;
      if ( is_mul_ok(v7, 8uLL) )
      {
        v9 = (char *)CoTaskMemRealloc(*(LPVOID *)a1, 8 * v7);
        v10 = v9;
        if ( v9 )
        {
          v11 = CTCoAllocPolicy::_CoTaskMemSize(v9);
          if ( v11 > v8 )
            memset_0(&v10[v8], 0, v11 - v8);
          *(_QWORD *)(a1 + 24) = v7;
          *(_QWORD *)a1 = v10;
        }
        else
        {
          return (unsigned int)-2147024882;
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return v3;
}
