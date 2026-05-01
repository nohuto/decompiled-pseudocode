/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1800A0A5C
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800A06F0 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_____lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___ @ 0x1800A0B98 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b6e4afa68249b.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+48h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( (*(_BYTE *)(a1 + 356) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10 = a1;
    v11[0] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v11[1] = a2;
    v12 = a3;
    v7 = *(_DWORD *)(a1 + 568);
    v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_____lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___(
                      &v13,
                      &v10);
    v9 = *v8;
    *v8 = 0LL;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    SHTaskPoolQueueTask(3LL, 2LL, v7);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
