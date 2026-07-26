/*
 * XREFs of ndisQueryCustomGuids @ 0x1C002D9E8
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C002D38C (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

__int64 __fastcall ndisQueryCustomGuids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        _QWORD *a3,
        _WORD *a4)
{
  int SetMiniport; // eax
  unsigned __int64 MethodId_low; // r14
  int v10; // ebx
  unsigned __int64 v12; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v14; // rbp
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int *v19; // r15
  __int64 v20; // r12
  int v21; // ecx
  void *v22; // r14
  PVOID DataBlockObject; // [rsp+98h] [rbp+20h] BYREF

  DataBlockObject = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0xDu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  *a3 = 0LL;
  *a4 = 0;
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqWmi;
  EtwActivityIdControl(3u, (LPGUID)&a2->NdisReserved[96]);
  *(_QWORD *)&a2->Header.Type = 15466902LL;
  a2->DATA.QUERY_INFORMATION.Oid = 65815;
  a2->PortNumber = 0;
  a2->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a2, 0, 0LL, 0LL);
  MethodId_low = LOWORD(a2->DATA.METHOD_INFORMATION.MethodId);
  if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( (_WORD)MethodId_low )
    {
      v12 = MethodId_low / 0x1C;
      if ( LOWORD(a2->DATA.METHOD_INFORMATION.MethodId) / 0x1Cu )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, LOWORD(a2->DATA.METHOD_INFORMATION.MethodId), 829899854);
        v14 = Pool2;
        if ( !Pool2 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0xFu,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              a1);
          v10 = -1073741670;
          goto LABEL_7;
        }
        a2->DATA.QUERY_INFORMATION.InformationBuffer = Pool2;
        a2->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId_low;
        v10 = ndisQuerySetMiniportEx(a1, 0LL, a2, 0, 0LL, 0LL);
        if ( v10 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x10u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              a1);
LABEL_39:
          ExFreePoolWithTag(v14, 0);
          goto LABEL_7;
        }
        if ( (a1->Flags & 0x20000) != 0 && (_WORD)v12 )
        {
          v15 = v14 + 6;
          v16 = (unsigned __int16)v12;
          do
          {
            *v15 |= 0x10000000u;
            v15 += 7;
            --v16;
          }
          while ( v16 );
        }
        if ( (_WORD)v12 )
        {
          if ( a1->MajorNdisVersion < 6u )
          {
            v19 = v14 + 6;
            v20 = (unsigned __int16)v12;
            do
            {
              v21 = *v19;
              if ( (*(_BYTE *)v19 & 0x60) == 0x60 )
              {
                v22 = &AllUsersReadWriteSecurityDescriptor;
              }
              else if ( (v21 & 0x20) != 0 )
              {
                v22 = &AllUsersReadSecurityDescriptor;
              }
              else
              {
                v22 = &AllUsersWriteSecurityDescriptor;
                if ( (v21 & 0x40) == 0 )
                  v22 = &AdminsSecurityDescriptor;
              }
              *v19 = v21 | 0x8000000;
              v10 = IoWMIOpenBlock((LPCGUID)(v19 - 6), 0x40000u, &DataBlockObject);
              if ( v10 >= 0 )
              {
                v10 = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v22);
                ObfDereferenceObject(DataBlockObject);
              }
              v19 += 7;
              --v20;
            }
            while ( v20 );
            if ( v10 )
              goto LABEL_39;
          }
          else
          {
            v17 = v14 + 6;
            v18 = (unsigned __int16)v12;
            do
            {
              *v17 |= 0x8000000u;
              v17 += 7;
              --v18;
            }
            while ( v18 );
          }
        }
        *a4 = v12;
        *a3 = v14;
        goto LABEL_7;
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0xEu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  v10 = -1073741637;
LABEL_7:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x11u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v10);
  return (unsigned int)v10;
}
