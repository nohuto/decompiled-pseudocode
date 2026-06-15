/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003CCEC
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x18000331C (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CCE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>>(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  struct _GUID *v3; // r9
  __int64 v4; // r10
  const struct _GUID *v5; // rcx
  __int64 v6; // r10
  int v7; // ebx

  v3 = a2;
  *a3 = 0LL;
  if ( !a2->Data1 )
  {
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_23;
    }
    goto LABEL_3;
  }
  if ( a2->Data1 != -1350114592
    || (a2 = (struct _GUID *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4,
        *(_DWORD *)&v3->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2) )
  {
LABEL_3:
    v4 = a1 + 8;
    if ( (v3->Data1 != 56
       || *(_DWORD *)&v3->Data2 != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
       || *(_DWORD *)v3->Data4 != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
       || *(_DWORD *)&v3->Data4[4] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4])
      && !InlineIsEqualGUID(v3, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99) )
    {
      if ( InlineIsEqualGUID(v5, &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a) )
      {
        *a3 = v6 + 8;
        v7 = 0;
      }
      else
      {
        v7 = -2147467262;
      }
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_14;
    }
    *a3 = v4;
LABEL_13:
    v7 = 0;
LABEL_14:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v7;
  }
  if ( *(_QWORD *)v3->Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    if ( *(_DWORD *)&v3->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_QWORD *)v3->Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *a3 = a1;
      goto LABEL_13;
    }
    goto LABEL_3;
  }
LABEL_23:
  *a3 = a1;
  (*(void (__fastcall **)(__int64, struct _GUID *, _QWORD *, struct _GUID *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
  return 0LL;
}
