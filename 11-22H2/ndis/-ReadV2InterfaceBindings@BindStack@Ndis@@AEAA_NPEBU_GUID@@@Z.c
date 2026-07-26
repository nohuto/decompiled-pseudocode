/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C011B904
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C011BC08 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C011AA68 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x1C011B9DC (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 */

char __fastcall Ndis::BindStack::ReadV2InterfaceBindings(Ndis::BindStack *this, const struct _GUID *a2)
{
  __int64 v3; // rdx
  int ValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b; // eax
  __int64 v5; // rdx
  int ValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-228h] BYREF
  wchar_t v9[256]; // [rsp+40h] [rbp-218h] BYREF

  Handle[0] = 0LL;
  netsetupBuildObjectPath(2LL, a2, 0LL, 2LL, v9);
  if ( (int)KRegKey::Open((KRegKey *)Handle, 1u, v9, 0LL) >= 0
    && ((ValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b = KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(
                                                                Handle,
                                                                v3,
                                                                this),
         (int)(ValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b + 0x80000000) < 0)
     || ValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b == -1073741772)
    && ((ValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655 = KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(Handle, v5, &this->Protocols.m_bufferSize, this),
         ((ValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655 + 0x80000000) & 0x80000000) != 0)
     || ValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655 == -1073741772) )
  {
    if ( Handle[0] )
      ZwClose(Handle[0]);
    return 1;
  }
  else
  {
    KRegKey::~KRegKey((KRegKey *)Handle);
    return 0;
  }
}
