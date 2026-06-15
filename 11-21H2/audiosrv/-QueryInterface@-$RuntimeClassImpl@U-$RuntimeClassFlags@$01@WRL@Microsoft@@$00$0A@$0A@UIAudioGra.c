/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180004B00
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18006A820.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // r9d

  v3 = 0;
  *a3 = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    if ( v4 == 796074085
      && a2[1] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data2
      && a2[2] == *(_DWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4
      && a2[3] == *(_DWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4[4] )
    {
      goto LABEL_9;
    }
  }
  else if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( v4 == 1585925261
    && a2[1] == *(_DWORD *)&GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c.Data2
    && a2[2] == *(_DWORD *)GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c.Data4
    && a2[3] == *(_DWORD *)&GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c.Data4[4] )
  {
LABEL_9:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  return (unsigned int)-2147467262;
}
