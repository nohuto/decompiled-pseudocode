/*
 * XREFs of ndisSriovInterfaceWriteVfConfigBlock @ 0x1C0130090
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceWriteVfConfigBlock(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int16 a2,
        int a3,
        const void *a4,
        size_t Size)
{
  __int64 Pool2; // rax
  void *v10; // rdi
  unsigned int v11; // ebx
  struct _NDIS_OID_REQUEST v13; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v13, 0, 0xF8uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Fu,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      a1);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(Size + 20), 1869169742);
  v10 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 1) = 1;
    *(_BYTE *)Pool2 = 0x80;
    *(_WORD *)(Pool2 + 2) = 20;
    *(_DWORD *)(Pool2 + 16) = 20;
    *(_WORD *)(Pool2 + 4) = a2;
    *(_DWORD *)(Pool2 + 8) = a3;
    *(_DWORD *)(Pool2 + 12) = Size;
    memmove((void *)(Pool2 + 20), a4, (unsigned int)Size);
    memset(&v13, 0, 0xF8uLL);
    *(_DWORD *)&v13.NdisReserved[16] |= 8u;
    *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
    v13.PortNumber = 0;
    v13.Header = (NDIS_OBJECT_HEADER)15466902;
    v13.DATA.QUERY_INFORMATION.Oid = 66132;
    v13.RequestType = NdisRequestSetInformation;
    v13.DATA.QUERY_INFORMATION.InformationBuffer = v10;
    v13.DATA.QUERY_INFORMATION.InformationBufferLength = Size + 20;
    v11 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x60u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (char)a1,
      v11);
  return v11;
}
