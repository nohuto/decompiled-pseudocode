/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005E90
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004F9A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004F9A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputTarget@@UIInputDestComparable@@UIInputSiteTarget@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004F9C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18004F9C0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputSiteTarget@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E7B20 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputSiteTarget@@@Det.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputTarget,IInputDestComparable,IInputSiteTarget>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int CanCastTo; // ebx
  int v4; // r9d

  CanCastTo = 0;
  *a3 = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == -1786336208
      && a2[1] == *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data2
      && a2[2] == *(_DWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4
      && a2[3] == *(_DWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4[4] )
    {
      goto LABEL_7;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return CanCastTo;
  }
  a1 += 8LL;
  if ( v4 != 610196240
    || a2[1] != *(_DWORD *)&GUID_245edb10_c010_455c_a24c_6780cdaecce8.Data2
    || a2[2] != *(_DWORD *)GUID_245edb10_c010_455c_a24c_6780cdaecce8.Data4
    || a2[3] != *(_DWORD *)&GUID_245edb10_c010_455c_a24c_6780cdaecce8.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputSiteTarget>::CanCastTo(a1 + 8);
    if ( (CanCastTo & 0x80000000) != 0 )
      return CanCastTo;
    goto LABEL_8;
  }
LABEL_7:
  *a3 = a1;
LABEL_8:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return CanCastTo;
}
