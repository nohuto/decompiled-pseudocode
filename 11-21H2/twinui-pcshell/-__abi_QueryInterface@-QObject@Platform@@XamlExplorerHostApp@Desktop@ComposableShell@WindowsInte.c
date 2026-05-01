/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180127580
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FE9C0 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FE9C0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FE9E0 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FE9E0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FEA00 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FEA00.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FEA20 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FEA20.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FEA40 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FEA40.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801FEA60 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1801FEA60.c)
 * Callees:
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x180127738 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     WINRT_IMPL_CoCreateFreeThreadedMarshaler @ 0x1801892D8 (WINRT_IMPL_CoCreateFreeThreadedMarshaler.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // eax
  volatile signed __int64 *v7; // rdi
  int v8; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  HRESULT v12; // eax
  LPUNKNOWN ppunkMarshal; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    if ( v3 == -1350114592 )
    {
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_48;
      }
    }
    else if ( v3 == -1867656405 && a2[1] == 933645206 && a2[2] == -1234886246 && a2[3] == -796798784 )
    {
      goto LABEL_48;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_48;
  }
  v7 = (volatile signed __int64 *)(a1 + 248);
  if ( !*(_QWORD *)(a1 + 256)
    || *a2 != -1796592748
    || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    v8 = *a2;
    if ( *a2 == 56 )
    {
      if ( a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        if ( a1 )
          v10 = a1 + 72;
        else
          v10 = 0LL;
        *a3 = v10;
        if ( *v7 && *(int *)(*v7 + 12) >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*v7 + 12));
        return 0LL;
      }
    }
    else if ( v8 == 637116407 )
    {
      if ( a2[1] == 1167758151 && a2[2] == -793596769 && a2[3] == 253369569 )
      {
        if ( a1 )
        {
          v11 = a1 + 40;
LABEL_26:
          *a3 = v11;
          __abi_FTMWeakRefData::Increment(v7);
          return 0LL;
        }
LABEL_32:
        v11 = 0LL;
        goto LABEL_26;
      }
    }
    else if ( v8 == -1284088471 && a2[1] == 1261594789 && a2[2] == -1174576760 && a2[3] == 911744780 )
    {
      if ( a1 )
      {
        *a3 = a1 + 64;
        __abi_FTMWeakRefData::Increment(a1 + 248);
        return 0LL;
      }
      goto LABEL_32;
    }
    if ( !*(_QWORD *)(a1 + 256)
      || *a2 != 3
      || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      return (***(__int64 (__fastcall ****)(_QWORD, int *, _QWORD *))(a1 + 56))(*(_QWORD *)(a1 + 56), a2, a3);
    }
    if ( *(_QWORD *)(a1 + 256) == -1LL )
    {
      v12 = WINRT_IMPL_CoCreateFreeThreadedMarshaler(*(LPUNKNOWN *)(*v7 + 16), &ppunkMarshal);
      if ( v12 < 0 )
      {
        __abi_WinRTraiseException(v12);
        __debugbreak();
      }
      if ( _InterlockedCompareExchange64(v7 + 1, (signed __int64)ppunkMarshal, -1LL) != -1 )
        ((void (__fastcall *)(LPUNKNOWN))ppunkMarshal->lpVtbl->Release)(ppunkMarshal);
    }
    if ( (***((unsigned int (__fastcall ****)(_QWORD, int *, _QWORD *))v7 + 1))(*((_QWORD *)v7 + 1), a2, a3) )
      return (***(__int64 (__fastcall ****)(_QWORD, int *, _QWORD *))(a1 + 56))(*(_QWORD *)(a1 + 56), a2, a3);
    return 0LL;
  }
LABEL_48:
  *a3 = a1;
  __abi_FTMWeakRefData::Increment(a1 + 248);
  return 0LL;
}
