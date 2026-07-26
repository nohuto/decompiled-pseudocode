/*
 * XREFs of ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C010F678
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C01125C4 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ?insertSortedUnique@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1C010F720 (-insertSortedUnique@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIN.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C010F7A8 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C0121D10 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticProtocolBinding(Ndis::BindStack *this, const wchar_t *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  unsigned int v5; // ebx
  NDIS_BIND_PROTOCOL_LINK *v6; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  NDIS_BIND_PROTOCOL_LINK *v9; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &v9, &DestinationString);
  if ( v9
    && (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertSortedUnique(
                          this,
                          &v9) )
  {
    ++this->ChangeEpoch;
    v5 = 0;
  }
  else
  {
    v5 = -1073741670;
  }
  v6 = v9;
  v9 = 0LL;
  if ( v6 )
    NDIS_BIND_PROTOCOL_LINK::`scalar deleting destructor'(v6, v4);
  return v5;
}
