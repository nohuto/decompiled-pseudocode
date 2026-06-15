/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003C890
 * Callers:
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18003C870 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010C350 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010C610 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180082AC2 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6F24 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int *i; // rax
  unsigned int j; // esi
  _QWORD *v9; // r15
  _QWORD *k; // r14
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  char v15; // [rsp+84h] [rbp+1Ch] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = 0;
  if ( (int)v3 < 4 )
  {
    *((_BYTE *)&v14 + v3) = 1;
  }
  else
  {
    for ( i = &v14; i != (int *)&v15; i = (int *)((char *)i + 1) )
      *(_BYTE *)i = 1;
  }
  for ( j = 0; j < 4; ++j )
  {
    if ( *((_BYTE *)&v14 + j) )
    {
      v9 = *(_QWORD **)(a1 + 24LL * j + 96);
      for ( k = *(_QWORD **)(a1 + 24LL * j + 88); k != v9; ++k )
      {
        v16 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(k, &v16) >= 0 && v16 )
        {
          v13 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v16, &v13) >= 0 )
          {
            v12 = *(_QWORD **)(a2 + 8);
            if ( v12 == *(_QWORD **)(a2 + 16) )
            {
              std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                a2,
                v12,
                &v13);
            }
            else
            {
              *v12 = v13;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v12);
              *(_QWORD *)(a2 + 8) += 8LL;
            }
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v13);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v16);
      }
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
