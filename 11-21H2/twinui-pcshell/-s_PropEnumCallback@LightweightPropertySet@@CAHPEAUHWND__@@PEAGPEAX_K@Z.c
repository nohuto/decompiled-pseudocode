/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x180020B60
 * Callers:
 *     <none>
 * Callees:
 *     ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x180020BA8 (-s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18005CCE8 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18009C284 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18012789C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        _QWORD *a4)
{
  int v5; // ebp
  _DWORD *v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _DWORD *v12; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 && LightweightPropertySet::s_IsMangledName(a2) )
  {
    CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v13);
    v8 = v13;
    if ( v13 && Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v13 + 2), a2) >= 0 )
    {
      v8[4] = v5;
      v9 = v8;
      v12 = v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v10 = a4[1];
      if ( v10 != a4[3]
        || (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                  a4,
                  v10 + 1) >= 0 )
      {
        v11 = (_QWORD *)(*a4 + 8 * a4[1]++);
        if ( v11 )
        {
          *v11 = 0LL;
          if ( v11 != &v12 )
          {
            *v11 = v8;
            v9 = 0LL;
          }
        }
      }
      if ( v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 1LL;
}
