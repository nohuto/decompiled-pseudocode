/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180094470
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x1800941F0 (-IndexOf@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedConten_ea_1800941F0.c)
 * Callees:
 *     ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x180091728 (--$-RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Interfa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // esi
  unsigned int i; // ebp
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __m128i v15; // [rsp+40h] [rbp-38h]
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  bool v17; // [rsp+90h] [rbp+18h] BYREF

  v16 = a1;
  v17 = 0;
  v9 = 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = 0LL;
    v15 = *a2;
    v9 = 0;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) )
    {
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)qword_1801AF3F0 + 40LL))(
             qword_1801AF3F0,
             *(unsigned int *)(v15.m128i_i64[0] + 4),
             &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
             &v16);
      v12 = v16;
    }
    else
    {
      v12 = a2->m128i_i64[0];
      v16 = a2->m128i_i64[0];
      if ( v15.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15.m128i_i64[0] + 8LL))(v15.m128i_i64[0]);
        v12 = v16;
LABEL_6:
        v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
        v13 = v12;
        goto LABEL_7;
      }
    }
    v13 = 0LL;
    if ( v9 >= 0 )
      goto LABEL_6;
LABEL_7:
    if ( v9 >= 0 )
    {
      v9 = XWinRT::InterfaceEquals::operator()<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
             v12,
             a4,
             v11,
             &v17);
      if ( v9 >= 0 && v17 )
      {
        *a6 = 1;
        *a5 = i;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        return (unsigned int)v9;
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    ++a2;
  }
  return (unsigned int)v9;
}
