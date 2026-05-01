/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180146FA0
 * Callers:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180032CA8 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     _lambda_150041feadb12d29b74b347f051d22fe_::operator() @ 0x1800F3188 (_lambda_150041feadb12d29b74b347f051d22fe_--operator().c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180237DAE (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windo_ea_180237DAE.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *a1,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rax
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  void *v9; // rcx
  LPVOID v11; // rbx
  LANGID ThreadUILanguage_0; // ax
  int v13; // eax
  const wchar_t *v14; // rdx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  LPVOID v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]

  *a3 = 0LL;
  v18 = 0LL;
  v4 = *(_QWORD *)a1;
  v19 = -1LL;
  v20 = -1LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v4 + 376))(a1, &v18);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)a1;
    pv = 0LL;
    v16 = -1LL;
    v17 = -1LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v7 + 248))(a1, &pv) < 0 )
      goto LABEL_3;
    v11 = v18;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v13 = IsBiDiLocale(ThreadUILanguage_0);
    v14 = asc_180697C08;
    if ( !v13 )
      v14 = asc_180697C18;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &pv,
                v14,
                v11) < 0 )
    {
LABEL_3:
      v8 = (unsigned __int16 *)v18;
      v18 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
      v9 = pv;
    }
    else
    {
      v8 = (unsigned __int16 *)pv;
      v9 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      pv = 0LL;
    }
    *a3 = v8;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( v18 )
    CoTaskMemFree(v18);
  return (unsigned int)v6;
}
