/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x1C0130F48
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0130A54 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C012F258 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C012F258.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C012FAF8 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C012FFA0 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // ebx
  unsigned int ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0; // eax
  const _UNICODE_STRING *v2; // rdi
  KRegKey v4; // [rsp+30h] [rbp-228h] BYREF
  char *Atom; // [rsp+38h] [rbp-220h] BYREF
  wchar_t Dst[256]; // [rsp+40h] [rbp-218h] BYREF

  v0 = 0;
  v4.m_ptr = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = KRegKey::Open(&v4, 1u, Dst, 0LL);
  if ( ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 != -1073741772 )
  {
    if ( ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0
      || (ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(&v4.m_ptr)) != 0 )
    {
      v0 = ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0;
    }
    else
    {
      v2 = (const _UNICODE_STRING *)&off_1C00D0B00;
      while ( 1 )
      {
        Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00EC738, *(_WORD **)&v2->Length);
        if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)qword_1C00EC738 + 72, &Atom) )
          break;
        v2 = (const _UNICODE_STRING *)((char *)v2 + 8);
        if ( v2 == &DriverServiceName )
          goto LABEL_11;
      }
      v0 = -1073741670;
    }
  }
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v4.m_ptr);
  return v0;
}
