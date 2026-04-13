/*
 * XREFs of ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x180085388
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@IPEAU62785@PEAIPEAE@Z @ 0x180089068 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Ser.c)
 *     ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x1800890E8 (-IndexOfInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Target_ea_1800890E8.c)
 * Callees:
 *     ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x180027D78 (--$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64),
        bool *a4)
{
  int v7; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  *a4 = 0;
  v7 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = IUnknown::QueryInterface<IUnknown>(a2, (__int64)&v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v7 = IUnknown::QueryInterface<IUnknown>(a3, (__int64)&v9);
      if ( v7 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    *a4 = 0;
  }
  return (unsigned int)v7;
}
