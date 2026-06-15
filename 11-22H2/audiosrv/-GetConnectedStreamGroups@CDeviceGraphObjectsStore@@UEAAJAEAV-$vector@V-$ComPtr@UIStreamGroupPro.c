/*
 * XREFs of ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010BF80
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D78EC (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6F74 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphObjectsStore::GetConnectedStreamGroups(__int64 a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 *v5; // rsi
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, __int64 *); // r14
  __int64 *v11; // rdx
  __int64 v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v12[1] = (__int64)v4;
  v5 = *(__int64 **)(a1 + 64);
  while ( v5 != *(__int64 **)(a1 + 72) )
  {
    try
    {
      v7 = *v5;
      v12[0] = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v15 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v12, &v15) >= 0 && v15 )
      {
        v14 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v15, &v14) >= 0 )
        {
          v16 = 0LL;
          v9 = v14;
          v10 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 232LL);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v16);
          if ( v10(v9, &v16) >= 0 && v16 )
          {
            v11 = (__int64 *)a2[1];
            if ( v11 == (__int64 *)a2[2] )
            {
              std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                a2,
                (__int64)v11,
                &v14);
            }
            else
            {
              *v11 = v14;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v11);
              a2[1] += 8LL;
            }
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v16);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v12);
      ++v5;
    }
    catch ( ... )
    {
      LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x262,
                       (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                       v8);
      return (unsigned int)v14;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
