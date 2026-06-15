/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800370D0
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800371E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800371E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037200 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180037200.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1350114592 && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        goto LABEL_10;
      }
      if ( a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
LABEL_22:
        *a3 = a1;
        a1 = *a3;
        goto LABEL_23;
      }
    }
LABEL_14:
    v4 = a1 + 8;
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      a1 = v4 + 8;
      if ( *a2 != -2006085909
        || a2[1] != *(_DWORD *)&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data2
        || a2[2] != *(_DWORD *)GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data4
        || a2[3] != *(_DWORD *)&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    goto LABEL_22;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_14;
  }
LABEL_10:
  *a3 = a1;
LABEL_23:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
