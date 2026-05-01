/*
 * XREFs of ??$make_agile_vector@I@cshell@@YA?A_PXZ @ 0x1804BB230
 * Callers:
 *     ?get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1804CD7D0 (-get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU-$IVectorView@I@Collect.c)
 *     ?get_RequestedDisplayRegionIds@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1804D3F90 (-get_RequestedDisplayRegionIds@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAU-$IVectorView@I@Coll.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@I@1234@Upermission@01234@@Z @ 0x1804BB9B0 (--0-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall cshell::make_agile_vector<unsigned int>(__int64 *a1)
{
  int v2; // edi
  void *v3; // rax
  __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = 0;
  v3 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3
    && (v4 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>(v3)) != 0 )
  {
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
  }
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6A,
      (int)"onecoreuap\\internal\\shell\\inc\\winrt_utility.h",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
