/*
 * XREFs of ?CreateProcessIdList@AnimationDataProvider@@UEBA?AV?$ComPtr@V?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@XZ @ 0x18011E430
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B26E0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18011C30C (--0-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z.c)
 *     ?Attach@?$ComPtr@V?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@QEAAXPEAV?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@3@@Z @ 0x18011CBE8 (-Attach@-$ComPtr@V-$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@WRL@Microsoft@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall AnimationDataProvider::CreateProcessIdList(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v8; // [rsp+50h] [rbp+18h]

  *a2 = 0LL;
  v8 = operator new(0x50uLL);
  v4 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::ListPrincipal<unsigned int>(
         v8,
         *(struct Microsoft::Bamo::BaseBamoConnection **)(a1 + 16));
  Microsoft::WRL::ComPtr<Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>>::Attach(
    a2,
    (__int64)v4);
  if ( !*a2 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      200LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v5);
  return a2;
}
