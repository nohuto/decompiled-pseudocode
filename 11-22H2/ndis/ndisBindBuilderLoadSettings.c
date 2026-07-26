/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x1C0160358
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0161738 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0116E38 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0119158 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B92C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(void *a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // edi
  unsigned int ValueBoolean; // eax
  bool v4; // zf
  unsigned int ValueString; // eax
  PVOID v6; // rbx
  unsigned int v7; // esi
  char *Atom; // rax
  PVOID P; // [rsp+40h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+28h] BYREF

  P = a1;
  v1 = qword_1C00F5730;
  v2 = 0;
  Handle = 0LL;
  ValueBoolean = KRegKey::Open(
                   (KRegKey *)&Handle,
                   1u,
                   L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
                   0LL);
  if ( ValueBoolean == -1073741772 )
    goto LABEL_16;
  if ( ValueBoolean
    || (LOBYTE(P) = 0,
        (ValueBoolean = KRegKey::QueryValueBoolean(
                          (KRegKey *)&Handle,
                          (wchar_t *)L"StateSeparatedRegistryLayout",
                          (unsigned __int8 *)&P,
                          DefaultToFalse)) != 0)
    || (v1[96] = (_BYTE)P != 0,
        (ValueBoolean = KRegKey::QueryValueBoolean(
                          (KRegKey *)&Handle,
                          (wchar_t *)L"DoNotWriteBindingsToRegistry",
                          (unsigned __int8 *)&P,
                          DefaultToFalse)) != 0) )
  {
    v2 = ValueBoolean;
LABEL_16:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v2;
  }
  v4 = (_BYTE)P == 0;
  P = 0LL;
  v1[97] = !v4;
  ValueString = KRegKey::QueryValueString((__int64)&Handle, L"UpperRangeReplacementToken", (__int64)&P);
  v6 = P;
  v7 = ValueString;
  if ( ValueString == -1073741772 )
  {
    *((_QWORD *)qword_1C00F5730 + 11) = 0LL;
    goto LABEL_7;
  }
  if ( ValueString )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v7;
  }
  Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00F5730, *((_WORD **)P + 1));
  *((_QWORD *)qword_1C00F5730 + 11) = Atom;
  if ( !Atom )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&P);
    v2 = -1073741670;
    goto LABEL_16;
  }
LABEL_7:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
