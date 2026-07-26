/*
 * XREFs of NdisCopyReceiveNetBufferListInfo @ 0x1C0028300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0062FDC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47B8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

void __stdcall NdisCopyReceiveNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  const struct _EVENT_DESCRIPTOR *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // [rsp+20h] [rbp-58h]
  const struct _GUID *v7; // [rsp+28h] [rbp-50h]
  struct _GUID v8; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp-28h] BYREF

  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  DestNetBufferList->NetBufferListInfo[4] = SrcNetBufferList->NetBufferListInfo[4];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[7] = SrcNetBufferList->NetBufferListInfo[7];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  DestNetBufferList->NetBufferListInfo[9] = SrcNetBufferList->NetBufferListInfo[9];
  DestNetBufferList->NetBufferListInfo[11] = SrcNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[12] = SrcNetBufferList->NetBufferListInfo[12];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  DestNetBufferList->NetBufferListInfo[17] = SrcNetBufferList->NetBufferListInfo[17];
  DestNetBufferList->NetBufferListInfo[22] = SrcNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[23] = SrcNetBufferList->NetBufferListInfo[23];
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
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  if ( ((unsigned __int64)SrcNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
    && ((__int64)SrcNetBufferList->NetBufferListInfo[10] & 1) == 0 )
  {
    v6 = 1;
    WfpNblInfoClone(SrcNetBufferList, DestNetBufferList, 0LL, 0LL);
  }
  if ( byte_1C00F5390 )
  {
    DestNetBufferList->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1u);
    v5 = (unsigned __int64)DestNetBufferList->NetBufferListInfo[13];
    *(_QWORD *)v8.Data4 = 0LL;
    *(_QWORD *)v9.Data4 = 0LL;
    *(_QWORD *)&v8.Data1 = v5 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v9.Data1 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v4, &v8, &v9, v6, v7, 5u);
  }
}
