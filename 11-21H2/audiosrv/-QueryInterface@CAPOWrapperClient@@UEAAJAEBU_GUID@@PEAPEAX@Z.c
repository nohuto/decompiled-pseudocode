/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010AB0
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BA00 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BA20 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BA40 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BA60 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BA80 (-QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BAA0 (-QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BAC0 (-QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180118864 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioPro_ea_180118864.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::QueryInterface(
        CAPOWrapperClient *this,
        const struct _GUID *a2,
        CAPOWrapperClient **a3)
{
  CAPOWrapperClient *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int CanCastTo; // ebx
  unsigned int Data1; // ecx
  const struct _GUID *v13; // r9
  CAPOWrapperClient *v14; // r10
  __int64 v15; // r9
  CAPOWrapperClient *v16; // r10

  v4 = this;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v5 || *((_DWORD *)this + 22) )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
    if ( v6 || *((_DWORD *)this + 23) )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data4;
      if ( v7 || *((_DWORD *)this + 24) )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data4;
        if ( v8 || *((_DWORD *)this + 25) )
        {
          v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1 )
            v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data4;
          if ( v9 || *((_DWORD *)this + 26) )
          {
            CanCastTo = 0;
            *a3 = 0LL;
            Data1 = a2->Data1;
            if ( a2->Data1 )
            {
              if ( Data1 == 1221972245
                && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data2
                && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4
                && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4[4] )
              {
                goto LABEL_22;
              }
            }
            else if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
                   && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
                   && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
            {
              *a3 = v4;
              (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v4 + 8LL))(v4);
              return CanCastTo;
            }
            v4 = (CAPOWrapperClient *)((char *)v4 + 8);
            if ( Data1 != -41997527
              || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data2
              || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
              || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4[4] )
            {
              if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
              {
                *a3 = v14;
              }
              else
              {
                if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
                  *a3 = v16;
                else
                  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
                                (char *)v16 + 8,
                                v15);
                if ( (CanCastTo & 0x80000000) != 0 )
                  return CanCastTo;
              }
              goto LABEL_23;
            }
LABEL_22:
            *a3 = v4;
LABEL_23:
            (*(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)*a3 + 8LL))(*a3);
            return CanCastTo;
          }
        }
      }
    }
  }
  *a3 = 0LL;
  return 2147500034LL;
}
