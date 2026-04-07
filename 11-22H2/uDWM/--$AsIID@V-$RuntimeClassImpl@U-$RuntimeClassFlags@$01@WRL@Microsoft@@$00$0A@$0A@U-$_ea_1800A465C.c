/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A465C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerDisabledEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5FD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A5FD0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800A584C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs *>,Microsoft::WRL::FtmBase>>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  const struct _GUID *v10; // rcx
  _QWORD *v11; // r8
  int v12; // eax

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_d836ed01_b36e_574c_92d8_86a1b80ba56d) )
    {
      *v7 = v8;
      v9 = 0;
    }
    else
    {
      v9 = -2147467262;
      if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
        || (unsigned int)InlineIsEqualGUID(v10, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v11 = v8;
        v12 = 0;
      }
      else
      {
        v12 = -2147467262;
        v8 = 0LL;
      }
      if ( v12 == -2147467262 )
        return v9;
      v9 = v12;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
