/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VIMiniSearch@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18005DC24
 * Callers:
 *     ??$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T@Details@WRL@Microsoft@@YAJPEAPEAVIMiniSearch@@AEAPEAUIServiceProvider@@$$QEA$$T2@Z @ 0x18005DB54 (--$MakeAndInitialize@VMiniSearchExperienceManager@@VIMiniSearch@@AEAPEAUIServiceProvider@@$$T$$T.c)
 *     ??$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAVWeakRef@01@@Z @ 0x18005ECE4 (--$AsWeak@VMiniSearchExperienceManager@@@WRL@Microsoft@@YAJPEAVMiniSearchExperienceManager@@PEAV.c)
 *     ?QueryInterface@MiniSearchExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017A400 (-QueryInterface@MiniSearchExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005DEE8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMiniSearch>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v3; // eax
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592
      || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_8;
    }
    v3 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_8;
    }
    v3 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] == v3 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return 0LL;
  }
LABEL_8:
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_8ea1a33a_4a62_484e_967c_439093cd6ac3) )
  {
    *v5 = v7;
    CanCastTo = 0;
    goto LABEL_10;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                v7 + 8,
                v6);
  if ( CanCastTo >= 0 )
LABEL_10:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
  return (unsigned int)CanCastTo;
}
