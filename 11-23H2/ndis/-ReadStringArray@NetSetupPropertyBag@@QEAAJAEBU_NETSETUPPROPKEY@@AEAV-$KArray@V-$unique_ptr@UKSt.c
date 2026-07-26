/*
 * XREFs of ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C013A180
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1C013C474 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3404 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC14 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD5C (netsetupIsImpliedProperty.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0139E48 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadStringArray(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r10d
  unsigned int v8; // edi
  _UNICODE_STRING v9; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  Handle = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, (struct KRegKey *)&Handle);
  if ( v6 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
    {
      Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, 0LL);
LABEL_6:
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return v4;
    }
LABEL_5:
    v4 = v6;
    goto LABEL_6;
  }
  if ( v6 )
    goto LABEL_5;
  v9 = 0LL;
  v8 = KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
         &Handle,
         &v9,
         a3,
         a3);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
