/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@IPEAU62785@PEAIPEAE@Z @ 0x1800943EC
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180094040 (-IndexOf@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wi.c)
 * Callees:
 *     ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x180091728 (--$-RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Interfa.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
              v6,
              a4,
              *a2,
              &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
