/*
 * XREFs of ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x18039678C
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180396824 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x180397BC0 (--_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180069DA0 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 */

void __fastcall CActivationBasedAppAndGlomCollection::~CActivationBasedAppAndGlomCollection(
        CActivationBasedAppAndGlomCollection *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 9);
  v2 = (unsigned __int64 *)((char *)this + 48);
  if ( *((_QWORD *)this + 5) )
  {
    v3 = 0LL;
    if ( *v2 )
    {
      v4 = 0LL;
      do
      {
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(v4 + *((_QWORD *)this + 5));
        ++v3;
        v4 += 40LL;
      }
      while ( v3 < *v2 );
    }
    CoTaskMemFree(*((LPVOID *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll((__int64)this + 8);
}
