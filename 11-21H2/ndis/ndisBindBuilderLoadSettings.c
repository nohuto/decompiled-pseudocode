/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x1C01531F8
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0153170 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C010B5F0 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C010E1C0 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C012FAF8 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(void *a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // eax
  bool v4; // zf
  unsigned int ValueString; // eax
  PVOID v6; // rbx
  unsigned int v7; // esi
  char *Atom; // rax
  PVOID P; // [rsp+40h] [rbp+20h] BYREF
  KRegKey v11; // [rsp+48h] [rbp+28h] BYREF

  P = a1;
  v1 = qword_1C00EC738;
  v2 = 0;
  v11.m_ptr = 0LL;
  v3 = KRegKey::Open(
         &v11,
         1u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
         0LL);
  if ( v3 == -1073741772 )
    goto LABEL_12;
  if ( v3
    || (LOBYTE(P) = 0,
        (v3 = KRegKey::QueryValueBoolean(
                &v11,
                (wchar_t *)L"StateSeparatedRegistryLayout",
                (unsigned __int8 *)&P,
                DefaultToFalse)) != 0)
    || (v1[96] = (_BYTE)P != 0,
        (v3 = KRegKey::QueryValueBoolean(
                &v11,
                (wchar_t *)L"DoNotWriteBindingsToRegistry",
                (unsigned __int8 *)&P,
                DefaultToFalse)) != 0) )
  {
    v2 = v3;
LABEL_12:
    v7 = v2;
    goto LABEL_10;
  }
  v4 = (_BYTE)P == 0;
  P = 0LL;
  v1[97] = !v4;
  ValueString = KRegKey::QueryValueString((__int64)&v11, L"UpperRangeReplacementToken", (__int64)&P);
  v6 = P;
  v7 = ValueString;
  if ( ValueString == -1073741772 )
  {
    *((_QWORD *)qword_1C00EC738 + 11) = 0LL;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  if ( !ValueString )
  {
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00EC738, *((_WORD **)P + 1));
    v7 = -1073741670;
    *((_QWORD *)qword_1C00EC738 + 11) = Atom;
    if ( Atom )
      goto LABEL_7;
  }
LABEL_8:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v11.m_ptr);
  return v7;
}
