/*
 * XREFs of ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x1800D263C
 * Callers:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18005B9C0 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005BE40 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_GetMonitorObjectArray(
        CApplicationManager *this,
        _QWORD *a2,
        struct IObjectArray **a3,
        _BYTE *a4)
{
  int SingleMonitorObjectArray; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 i; // rbx
  __int64 v12; // rcx
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  *a3 = 0LL;
  v14[0] = 0LL;
  SingleMonitorObjectArray = -2147024882;
  v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v15 = v9;
  if ( v9 )
  {
    *v9 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v9[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v9[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v9 + 6) = 1;
    *(_QWORD *)((char *)v9 + 28) = 4LL;
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[8] = 0LL;
    SingleMonitorObjectArray = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v9)(
                                 v9,
                                 &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
                                 v14);
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    if ( SingleMonitorObjectArray >= 0 )
    {
      for ( i = 0LL; i < a2[1]; ++i )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(*a2 + 8 * i) + 48LL))(*(_QWORD *)(*a2 + 8 * i), &v15);
        if ( (_DWORD)v15 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14[0] + 40LL))(v14[0], *(_QWORD *)(*a2 + 8 * i));
      }
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v16);
      if ( v16 )
      {
        SingleMonitorObjectArray = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v14[0])(
                                     v14[0],
                                     &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                                     a3);
      }
      else
      {
        *a4 = 1;
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(this, 0LL, a3);
      }
    }
  }
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)SingleMonitorObjectArray;
}
