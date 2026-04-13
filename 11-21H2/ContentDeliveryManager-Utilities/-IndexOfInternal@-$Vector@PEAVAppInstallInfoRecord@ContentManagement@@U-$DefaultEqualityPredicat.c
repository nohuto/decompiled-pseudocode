/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@IPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18008CAD0
 * Callers:
 *     ?IndexOf@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAppInstallInfoRecord@ContentManagement@@PEAIPEAE@Z @ 0x18008C720 (-IndexOf@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __m128i *),
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v7; // r15d
  int v9; // edi
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __m128i *); // rsi
  bool v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __m128i v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+50h]

  v22 = a3;
  v21 = a1;
  v7 = a3;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
      v11 = 0LL;
      v20 = 0LL;
      v19 = *a2;
      v9 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v19, 8)) )
        break;
      v12 = v19.m128i_i64[0];
      v21 = v19.m128i_i64[0];
      if ( !v19.m128i_i64[0] )
        goto LABEL_5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19.m128i_i64[0] + 8LL))(v19.m128i_i64[0]);
      v12 = v21;
LABEL_6:
      v11 = v12;
      v20 = v12;
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __m128i *))v12;
LABEL_7:
      if ( v9 >= 0 )
      {
        v14 = 0;
        if ( a4 == v13 )
        {
          v9 = 0;
LABEL_33:
          *a6 = 1;
          *a5 = v10;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          return (unsigned int)v9;
        }
        if ( a4 && v13 )
        {
          v19.m128i_i64[0] = 0LL;
          v21 = 0LL;
          v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, &v19);
          if ( v9 < 0 )
            goto LABEL_18;
          v15 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          v9 = (**v13)(v13, &GUID_00000000_0000_0000_c000_000000000046, (__m128i *)&v21);
          if ( v9 < 0 )
          {
LABEL_18:
            v16 = v21;
          }
          else
          {
            v16 = v21;
            v14 = v19.m128i_i64[0] == v21;
          }
          if ( v16 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = v19.m128i_i64[0];
          if ( v19.m128i_i64[0] )
          {
            v19.m128i_i64[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          if ( v9 >= 0 && v14 )
            goto LABEL_33;
        }
        else
        {
          v9 = 0;
        }
        v7 = v22;
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      ++v10;
      ++a2;
      if ( v10 >= v7 )
        return (unsigned int)v9;
    }
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)qword_1801AF3F0 + 40LL))(
           qword_1801AF3F0,
           *(unsigned int *)(v19.m128i_i64[0] + 4),
           &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
           &v21);
    v12 = v21;
LABEL_5:
    v13 = 0LL;
    if ( v9 < 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  return (unsigned int)v9;
}
