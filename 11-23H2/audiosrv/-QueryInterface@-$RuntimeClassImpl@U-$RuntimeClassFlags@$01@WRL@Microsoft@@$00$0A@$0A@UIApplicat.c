/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D880
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075E70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180075E70.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIHostedApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075E90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180075E90.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationTracker,IHostedApplicationTracker,IFastRundown>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  int v5; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return v3;
  }
  if ( *(_DWORD *)a2 == -1715052124
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_99c661a4_f1ad_4e9a_9bf4_bd4e327ed9a4.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 903565125)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_35db4f45_796a_4051_ae98_d798f0c563e4.Data4[4] )
  {
    *a3 = a1;
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID((const struct _GUID *)a2, &GUID_00000040_0000_0000_c000_000000000046) )
    {
      *a3 = v4;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v5;
}
