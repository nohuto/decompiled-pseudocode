/*
 * XREFs of ??$ActivateInstance@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@1@@Z @ 0x1802F27F4
 * Callers:
 *     ??$ActivateInstance@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802F28A0 (--$ActivateInstance@V-$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_074e185b_ef4b_4231_9a8e_eb1bb4ef2099.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_074e185b_ef4b_4231_9a8e_eb1bb4ef2099.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_074e185b_ef4b_4231_9a8e_eb1bb4ef2099.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_074e185b_ef4b_4231_9a8e_eb1bb4ef2099,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
