/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008FA34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800BA53C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800BA720 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r9
  const wchar_t *v6; // r9
  const wchar_t *v7; // rax
  const WCHAR *v8; // rcx
  const wchar_t *v9; // r8
  char v10; // r10
  char v11; // r11
  char v12; // di
  const wchar_t *v13; // rdx
  char *v14; // rbx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r8
  char v18; // r9
  const wchar_t *v19; // r10
  char v20; // r11
  char v21; // di
  char v22; // si
  char *v23; // rbx
  bool v24; // [rsp+30h] [rbp-28h]
  const WCHAR *v25; // [rsp+30h] [rbp-28h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    0,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u,
    v5);
  v7 = (const wchar_t *)((char *)this + 240);
  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v7 = *(const wchar_t **)v7;
    v15 = (const wchar_t *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v15 = *(const wchar_t **)v15;
    v16 = (const wchar_t *)((char *)this + 176);
    if ( *((_QWORD *)this + 25) >= 8uLL )
      v16 = *(const wchar_t **)v16;
    v17 = (const wchar_t *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v17 = *(const wchar_t **)v17;
    v18 = *((_BYTE *)this + 74);
    v19 = (const wchar_t *)((char *)this + 112);
    v20 = *((_BYTE *)this + 75);
    v21 = *((_BYTE *)this + 73);
    v22 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v19 = *(const wchar_t **)v19;
    v23 = (char *)this + 80;
    if ( *((_QWORD *)v23 + 3) >= 8uLL )
      v23 = *(char **)v23;
    v25 = v17;
    LOBYTE(v17) = v22;
    CreativeFramework::Actions::InstallAppByStoreId((const WCHAR *)v23, v19, v17, v21, v20, v18, v25, v16, v15, v7);
  }
  else
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v7 = *(const wchar_t **)v7;
    v8 = (const WCHAR *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    LOBYTE(v6) = *((_BYTE *)this + 74);
    v9 = (const wchar_t *)((char *)this + 112);
    v10 = *((_BYTE *)this + 75);
    v11 = *((_BYTE *)this + 73);
    v12 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v13 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v13 = *(const wchar_t **)v13;
    v14 = (char *)this + 8;
    if ( *((_QWORD *)v14 + 3) >= 8uLL )
      v14 = *(char **)v14;
    v24 = (char)v6;
    LOBYTE(v6) = v12;
    CreativeFramework::Actions::InstallAppByProductAndSku((const WCHAR *)v14, v13, v9, v6, v11, v10, v24, v8, v7);
  }
}
