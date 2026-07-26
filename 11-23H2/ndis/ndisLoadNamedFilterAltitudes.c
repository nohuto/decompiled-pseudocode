/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x1C013CDC8
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C013C8B4 (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C013AF58 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C013AF58.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B90C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C013BDB4 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  const _UNICODE_STRING *v3; // rdi
  HANDLE Handle; // [rsp+30h] [rbp-228h] BYREF
  char *Atom; // [rsp+38h] [rbp-220h] BYREF
  wchar_t Dst[256]; // [rsp+40h] [rbp-218h] BYREF

  v0 = 0;
  Handle = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  v1 = KRegKey::Open((KRegKey *)&Handle, 1u, Dst, 0LL);
  if ( v1 == -1073741772 )
    goto LABEL_5;
  if ( v1
    || (v1 = KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(&Handle)) != 0 )
  {
    v0 = v1;
LABEL_5:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v0;
  }
  v3 = (const _UNICODE_STRING *)&off_1C00D7ED0;
  do
  {
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00F5730, *(_WORD **)&v3->Length);
    if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)qword_1C00F5730 + 72, &Atom) )
    {
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return 3221225626LL;
    }
    v3 = (const _UNICODE_STRING *)((char *)v3 + 8);
  }
  while ( v3 != &DriverServiceName );
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
