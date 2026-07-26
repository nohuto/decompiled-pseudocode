/*
 * XREFs of ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x1C012F428 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1C012F574 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00AD9B4 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?append@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z @ 0x1C012FFE4 (-append@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0130658 (ndisBlowStringListIntoAtoms.c)
 */

__int64 __fastcall ndisReadProtocolById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  int v4; // eax
  KRegKey *v6; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v7; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-C0h] BYREF
  void *v9; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v11[2]; // [rsp+68h] [rbp-98h] BYREF
  bool v12; // [rsp+78h] [rbp-88h] BYREF
  int v13; // [rsp+7Ch] [rbp-84h]
  wchar_t v14[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *a2;
  v3 = 0;
  v9 = 0LL;
  v10[0] = 0LL;
  v10[1] = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12 = 0;
  v13 = 0;
  v8 = v2;
  v7.m_ptr = 0LL;
  netsetupBuildObjectPath(4u, (__int64)a2, a1, 1, v14);
  v4 = KRegKey::Open(&v7, 1u, v14, 0LL);
  if ( v4 )
    goto LABEL_8;
  v6 = &v7;
  v4 = ndisBlowStringListIntoAtoms((void ***)&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00DC558, (__int64)v10);
  if ( v4 )
    goto LABEL_8;
  v4 = ndisBlowStringListIntoAtoms((void ***)&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00DC480, (__int64)v11);
  if ( v4 )
    goto LABEL_8;
  v4 = NetSetupPropertyBag::ReadString((NetSetupPropertyBag *)&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00DC5B8, &v9);
  if ( v4 )
    goto LABEL_8;
  v4 = NetSetupPropertyBag::ReadBoolean((void ***)&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00DC540, &v12);
  if ( v4 )
    goto LABEL_8;
  if ( !Rtl::KArray<ProtocolBindProperties,1>::append((__int64)qword_1C00EC738 + 24, (__int64)&v8) )
  {
    v4 = -1073741670;
LABEL_8:
    v3 = v4;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7.m_ptr);
  ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)&v8);
  return v3;
}
