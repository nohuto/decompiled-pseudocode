/*
 * XREFs of NdisCopyReceiveNetBufferListInfo @ 0x1C003A420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C003A938 (NetioCopyOpaqueNetBufferListInformation.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

void __stdcall NdisCopyReceiveNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  __int64 v3; // r8
  __int64 v5; // r9
  void **v6; // rcx
  signed __int64 v7; // rdx
  void **v8; // rcx
  const struct _EVENT_DESCRIPTOR *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+20h] [rbp-58h]
  const struct _GUID *v14; // [rsp+28h] [rbp-50h]
  struct _GUID v15; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-28h] BYREF

  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v3 = 2LL;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  v5 = 2LL;
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  DestNetBufferList->NetBufferListInfo[4] = SrcNetBufferList->NetBufferListInfo[4];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[7] = SrcNetBufferList->NetBufferListInfo[7];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  DestNetBufferList->NetBufferListInfo[9] = SrcNetBufferList->NetBufferListInfo[9];
  v6 = &DestNetBufferList->NetBufferListInfo[11];
  v7 = (char *)SrcNetBufferList - (char *)DestNetBufferList;
  do
  {
    *v6 = *(void **)((char *)v6 + v7);
    ++v6;
    --v5;
  }
  while ( v5 );
  v8 = &DestNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  do
  {
    *v8 = *(void **)((char *)v8 + v7);
    ++v8;
    --v3;
  }
  while ( v3 );
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x8000) != 0 )
  {
    DestNetBufferList->NblFlags |= 0x8000u;
    DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  }
  DestNetBufferList->NetBufferListInfo[26] = SrcNetBufferList->NetBufferListInfo[26];
  NetioCopyOpaqueNetBufferListInformation(DestNetBufferList, SrcNetBufferList);
  if ( byte_1C00EC210 )
  {
    DestNetBufferList->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1u);
    v10 = (__int64)DestNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v15.Data4 = v11;
    *(_QWORD *)&v15.Data1 = v10;
    v12 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v16.Data4 = v11;
    *(_QWORD *)&v16.Data1 = v12;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v9, &v15, &v16, v13, v14, 5u);
  }
}
