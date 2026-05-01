/*
 * XREFs of ?get_RequestedDisplayRegionIds@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1804D3F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039EBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGet.c)
 *     ??$make_agile_vector@I@cshell@@YA?A_PXZ @ 0x1804BB230 (--$make_agile_vector@I@cshell@@YA-A_PXZ.c)
 *     ?GetView@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@I@345@@Z @ 0x1804C5B40 (-GetView@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Def.c)
 *     ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x1804C6840 (-InsertAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowingEnvironmentSettings::get_RequestedDisplayRegionIds(__int64 a1, __int64 *a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rbx
  int View; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  try
  {
    cshell::make_agile_vector<unsigned int>((__int64 *)&v12);
    v6 = *(int **)(a1 + 128);
    v4 = *(int **)(a1 + 136);
    while ( v6 != v4 )
    {
      v5 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::InsertAtInternal(
             (__int64)v12,
             0,
             *v6,
             1);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x352,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
          (const char *)(unsigned int)v5,
          v10);
      ++v6;
    }
    View = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::GetView(
             v12,
             a2);
    if ( View < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x355,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
        (const char *)(unsigned int)View,
        v10);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release((__int64)v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x358,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           v8);
  }
  return result;
}
