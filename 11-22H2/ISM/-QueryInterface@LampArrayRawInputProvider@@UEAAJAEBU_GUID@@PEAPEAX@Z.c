/*
 * XREFs of ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001C060
 * Callers:
 *     ?QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079FB0 (-QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079FD0 (-QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079FF0 (-QueryInterface@LampArrayRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18001C140 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 */

__int64 __fastcall LampArrayRawInputProvider::QueryInterface(
        LampArrayRawInputProvider *this,
        const struct _GUID *a2,
        LampArrayRawInputProvider **a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  LampArrayRawInputProvider *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80004003LL,
      v14);
    return 2147500035LL;
  }
  if ( (unsigned __int8)operator==(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v7 = (unsigned __int64)this + 24;
LABEL_12:
    v9 = (LampArrayRawInputProvider *)(v7 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    goto LABEL_13;
  }
  if ( (unsigned __int8)operator==(v6, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8) )
  {
    v9 = this;
LABEL_13:
    _InterlockedIncrement((volatile signed __int32 *)this + 8);
    *a3 = v9;
    return 0LL;
  }
  if ( (unsigned __int8)operator==(v8, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35) )
  {
    v7 = (unsigned __int64)this + 16;
    goto LABEL_12;
  }
  if ( (unsigned __int8)operator==(v10, &GUID_a78e6167_d56f_4297_8f03_6a5ea7fe3025)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                          v11,
                          v12,
                          v13) )
  {
    v7 = (unsigned __int64)this + 8;
    goto LABEL_12;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
