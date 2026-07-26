/*
 * XREFs of ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013D2C0
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C013B168 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C013B2FC (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00B3690 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C011D8B0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E0E4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 *     ?append@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z @ 0x1C013BDF8 (-append@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C013C474 (ndisBlowStringListIntoAtoms.c)
 */

__int64 __fastcall ndisReadProtocolById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  void **p_Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v7; // [rsp+40h] [rbp-C0h] BYREF
  void *v8; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h]
  _DWORD v11[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h]
  bool v13; // [rsp+78h] [rbp-88h] BYREF
  int v14; // [rsp+7Ch] [rbp-84h]
  wchar_t v15[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *a2;
  v8 = 0LL;
  v9[0] = 0;
  v9[1] = 0;
  v10 = 0LL;
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0LL;
  v14 = 0;
  Handle = 0LL;
  v13 = 0;
  v7 = v2;
  netsetupBuildObjectPath(4u, (__int64)a2, a1, 1, v15);
  v3 = KRegKey::Open((KRegKey *)&Handle, 1u, v15, 0LL);
  if ( v3 )
    goto LABEL_8;
  p_Handle = &Handle;
  v3 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E47F8, (__int64)v9);
  if ( v3 )
    goto LABEL_8;
  v3 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E4720, (__int64)v11);
  if ( v3 )
    goto LABEL_8;
  v3 = NetSetupPropertyBag::ReadString(
         (NetSetupPropertyBag *)&p_Handle,
         (const struct _NETSETUPPROPKEY *)&unk_1C00E4858,
         &v8);
  if ( v3 )
    goto LABEL_8;
  v3 = NetSetupPropertyBag::ReadBoolean(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00E47E0, &v13);
  if ( v3 )
    goto LABEL_8;
  if ( !Rtl::KArray<ProtocolBindProperties,1>::append((__int64)qword_1C00F5730 + 24, (__int64)&v7) )
  {
    v3 = -1073741670;
LABEL_8:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    goto LABEL_12;
  }
  if ( Handle )
    ZwClose(Handle);
  v3 = 0;
LABEL_12:
  ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)&v7);
  return v3;
}
