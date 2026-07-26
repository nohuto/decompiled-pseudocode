/*
 * XREFs of ndisQueryCustomGuids @ 0x1C002E3DC
 * Callers:
 *     ndisQuerySupportedGuidToOidList @ 0x1C002DE88 (ndisQuerySupportedGuidToOidList.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0036340 (memset.c)
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
  _QWORD *v19; // rax
  int *v20; // r15
  __int64 v21; // r12
  int v22; // ecx
  void *v23; // r14
  PVOID DataBlockObject; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+90h] [rbp+18h]

  v25 = a3;
  DataBlockObject = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0xDu,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  *a3 = 0LL;
  *a4 = 0;
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqWmi;
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
              (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
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
              (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
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
            v20 = v14 + 6;
            v21 = (unsigned __int16)v12;
            do
            {
              v22 = *v20;
              if ( (*(_BYTE *)v20 & 0x60) == 0x60 )
              {
                v23 = &AllUsersReadWriteSecurityDescriptor;
              }
              else if ( (v22 & 0x20) != 0 )
              {
                v23 = &AllUsersReadSecurityDescriptor;
              }
              else
              {
                v23 = &AllUsersWriteSecurityDescriptor;
                if ( (v22 & 0x40) == 0 )
                  v23 = &AdminsSecurityDescriptor;
              }
              *v20 = v22 | 0x8000000;
              v10 = IoWMIOpenBlock((LPCGUID)(v20 - 6), 0x40000u, &DataBlockObject);
              if ( v10 >= 0 )
              {
                v10 = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v23);
                ObfDereferenceObject(DataBlockObject);
              }
              v20 += 7;
              --v21;
            }
            while ( v21 );
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
        v19 = v25;
        *a4 = v12;
        *v19 = v14;
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
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  v10 = -1073741637;
LABEL_7:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x11u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      (char)a1,
      v10);
  return (unsigned int)v10;
}
