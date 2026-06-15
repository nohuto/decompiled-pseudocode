/*
 * XREFs of ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8750
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8D34 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000AC94 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001262C (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18004A0BC (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800E7378 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800E74F0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::RegisterDisconnectNotificationClient(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 **v14; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v15 = v4;
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___(
    &v13,
    *(__int64 **)(a1 + 152),
    *(__int64 **)(a1 + 160));
  std::vector<Microsoft::WRL::WeakRef>::erase(a1 + 152, &v13, v13, *(__int64 **)(a1 + 160));
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___(
    &v13,
    *(_QWORD **)(a1 + 152),
    *(_QWORD **)(a1 + 160),
    a2);
  try
  {
    if ( v13 == *(__int64 **)(a1 + 160) )
    {
      v13 = 0LL;
      v14 = &v13;
      v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
      v7 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
        if ( v4 )
          LeaveCriticalSection(v4);
        return v8;
      }
      v10 = *(_QWORD **)(a1 + 160);
      if ( v10 == *(_QWORD **)(a1 + 168) )
      {
        std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
          (__int64 *)(a1 + 152),
          (__int64)v10,
          (__int64 *)&v13);
      }
      else
      {
        v11 = v13;
        *v10 = v13;
        if ( v11 )
          (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
        *(_QWORD *)(a1 + 160) += 8LL;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v13);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x692,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v5);
  }
  return result;
}
