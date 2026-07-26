/*
 * XREFs of ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01310A0
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x1C012F2E0 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x1C012F6BC (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C0130220 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0130658 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0130AB0 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 */

__int64 __fastcall ndisReadLwfById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v4; // rcx
  bool v6; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey *v7; // [rsp+38h] [rbp-C8h] BYREF
  KRegKey v8; // [rsp+40h] [rbp-C0h] BYREF
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
  v8.m_ptr = 0LL;
  netsetupBuildObjectPath(3u, (__int64)a2, a1, 1, v17);
  FilterAltitude = KRegKey::Open(&v8, 1u, v17, 0LL);
  if ( !FilterAltitude )
  {
    v7 = &v8;
    FilterAltitude = ndisBlowStringListIntoAtoms(
                       (void ***)&v7,
                       (const struct _NETSETUPPROPKEY *)&unk_1C00DC4F8,
                       (__int64)&v10);
    if ( !FilterAltitude )
    {
      FilterAltitude = ndisBlowStringListIntoAtoms(
                         (void ***)&v7,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00DC510,
                         (__int64)&v12);
      if ( !FilterAltitude )
      {
        FilterAltitude = ndisGetFilterAltitude((struct NetSetupPropertyBag *)&v7, &v14);
        if ( !FilterAltitude )
        {
          FilterAltitude = NetSetupPropertyBag::ReadBoolean(
                             (void ***)&v7,
                             (const struct _NETSETUPPROPKEY *)&unk_1C00DC540,
                             &v15);
          if ( !FilterAltitude )
          {
            v6 = 0;
            NetSetupPropertyBag::ReadBoolean((void ***)&v7, (const struct _NETSETUPPROPKEY *)&unk_1C00DC528, &v6);
            v4 = v6 ? (char *)qword_1C00EC738 + 56 : (char *)qword_1C00EC738 + 40;
            FilterAltitude = -1073741670;
            if ( Rtl::KArray<LwfBindProperties,1>::insertSorted((__int64)v4, (__int64)&v9) )
              FilterAltitude = 0;
          }
        }
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8.m_ptr);
  if ( P )
  {
    ExFreePoolWithTag(P, 0x7272414Bu);
    P = 0LL;
    v12 = 0LL;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7272414Bu);
  return FilterAltitude;
}
