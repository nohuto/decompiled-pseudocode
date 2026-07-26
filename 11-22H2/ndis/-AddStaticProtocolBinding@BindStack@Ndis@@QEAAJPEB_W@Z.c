/*
 * XREFs of ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C011CD0C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C011AA68 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C013C5C4 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A38 (--1-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C011CDB4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?insertSortedUnique@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1C011E774 (-insertSortedUnique@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIN.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D7D0 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticProtocolBinding(Ndis::BindStack *this, const wchar_t *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  NDIS_BIND_PROTOCOL_LINK *v5; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  NDIS_BIND_PROTOCOL_LINK *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &v8, &DestinationString);
  if ( v8
    && (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertSortedUnique(
                          this,
                          &v8) )
  {
    v5 = v8;
    ++this->ChangeEpoch;
    v8 = 0LL;
    if ( v5 )
      NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(v5, v4);
    return 0LL;
  }
  else
  {
    wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::~unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
      &v8,
      v4);
    return 3221225626LL;
  }
}
