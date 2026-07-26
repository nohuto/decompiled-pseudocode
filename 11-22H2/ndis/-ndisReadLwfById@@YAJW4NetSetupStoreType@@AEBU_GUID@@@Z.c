/*
 * XREFs of ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C013CF64
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C013AFF8 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C013B4AC (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1C00B3580 (--1LwfBindProperties@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB6C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C013C054 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C013C494 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C013C92C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 */

__int64 __fastcall ndisReadLwfById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v5; // rcx
  bool v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  void **v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  unsigned int v14; // [rsp+80h] [rbp-80h] BYREF
  bool v15; // [rsp+84h] [rbp-7Ch] BYREF
  int v16; // [rsp+88h] [rbp-78h]
  wchar_t v17[128]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *a2;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  P = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v9 = v2;
  Handle = 0LL;
  netsetupBuildObjectPath(3u, (__int64)a2, a1, 1, v17);
  FilterAltitude = KRegKey::Open((KRegKey *)&Handle, 1u, v17, 0LL);
  if ( FilterAltitude )
    goto LABEL_2;
  v8[0] = &Handle;
  FilterAltitude = ndisBlowStringListIntoAtoms(v8, (const struct _NETSETUPPROPKEY *)&unk_1C00E4798, (__int64)&v10);
  if ( FilterAltitude )
    goto LABEL_2;
  FilterAltitude = ndisBlowStringListIntoAtoms(v8, (const struct _NETSETUPPROPKEY *)&unk_1C00E47B0, (__int64)&v12);
  if ( FilterAltitude )
    goto LABEL_2;
  FilterAltitude = ndisGetFilterAltitude((struct NetSetupPropertyBag *)v8, &v14);
  if ( FilterAltitude )
    goto LABEL_2;
  FilterAltitude = NetSetupPropertyBag::ReadBoolean(v8, (const struct _NETSETUPPROPKEY *)&unk_1C00E47E0, &v15);
  if ( FilterAltitude )
    goto LABEL_2;
  v6 = 0;
  NetSetupPropertyBag::ReadBoolean(v8, (const struct _NETSETUPPROPKEY *)&unk_1C00E47C8, &v6);
  if ( v6 )
    v5 = (char *)qword_1C00F5730 + 56;
  else
    v5 = (char *)qword_1C00F5730 + 40;
  if ( !Rtl::KArray<LwfBindProperties,1>::insertSorted((__int64)v5, (__int64)&v9) )
  {
    FilterAltitude = -1073741670;
LABEL_2:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    LwfBindProperties::~LwfBindProperties((LwfBindProperties *)&v9);
    return FilterAltitude;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
  {
    ExFreePoolWithTag(P, 0x7272414Bu);
    P = 0LL;
    v12 = 0LL;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7272414Bu);
  return 0LL;
}
