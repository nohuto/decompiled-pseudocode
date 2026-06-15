/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EA00
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075C60 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075C80 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075CA0 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075CC0 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075CE0 (-QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075D00 (-QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075D20 (-QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075D40 (-QueryInterface@CAPOWrapperClient@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CF480 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAudioSystemEffects3@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::QueryInterface(CAPOWrapperClient *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  const struct _GUID *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r11
  const struct _GUID *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11
  const struct _GUID *v15; // r9
  int CanCastTo; // ebx
  __int64 v18; // r9
  __int64 v19; // r11

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v3 || *((_DWORD *)this + 24) )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
    if ( v4 || *((_DWORD *)this + 25) )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data4;
      if ( v5 || *((_DWORD *)this + 26) )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data4;
        if ( v6 || *((_DWORD *)this + 27) )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7.Data4;
          if ( v7 || *((_DWORD *)this + 28) )
          {
            v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1 )
              v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data4;
            if ( v8 || *((_DWORD *)this + 29) )
            {
              *a3 = 0LL;
              if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
              {
                *v10 = v11;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
                return 0;
              }
              else
              {
                if ( InlineIsEqualGUID(v9, &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6)
                  || InlineIsEqualGUID(v12, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10) )
                {
                  *v13 = v14;
                  CanCastTo = 0;
                }
                else
                {
                  if ( InlineIsEqualGUID(v15, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
                  {
                    *v13 = v19;
                    CanCastTo = 0;
                  }
                  else
                  {
                    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::CanCastTo(
                                  v19 + 8,
                                  v18);
                  }
                  if ( CanCastTo < 0 )
                    return (unsigned int)CanCastTo;
                }
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 8LL))(*v13);
              }
              return (unsigned int)CanCastTo;
            }
          }
        }
      }
    }
  }
  *a3 = 0LL;
  return 2147500034LL;
}
