/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1C0026478
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00017D8 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C003F63C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1C003F694 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0057FB0 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C0058070 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C034C4FC (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v11; // rax
  unsigned int v12; // edx
  int v13; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rbx
  volatile __int32 *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v18; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v21[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-30h] BYREF

  v21[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22, (struct DXGSPINLOCK *const)(a1 + 16), 1u);
  v5 = *(_QWORD **)a1;
  while ( v5 != (_QWORD *)a1 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_DWORD *)v6 + 4) == *(_DWORD *)a2 && *((_DWORD *)v6 + 5) == *(_DWORD *)(a2 + 4) )
    {
      v7 = *((_DWORD *)v6 + 6);
      if ( v7 == *(_DWORD *)(a2 + 8) && v6[4] == *(_QWORD *)(a2 + 16) )
      {
        v8 = v6[6];
        if ( v8 == *(_QWORD *)(a2 + 32) )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(v7, (unsigned int)&RemoteMonitorRemoveMapping, v8, v6[2], v7, v8, v6[4]);
          v9 = *v6;
          if ( *(_QWORD **)(*v6 + 8LL) != v6
            || (v10 = (_QWORD *)v6[1], (_QWORD *)*v10 != v6)
            || (*v10 = v9,
                *(_QWORD *)(v9 + 8) = v10,
                v11 = v21[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
          {
LABEL_26:
            __fastfail(3u);
          }
          *v6 = v21[0];
          v6[1] = v21;
          v4 = 0;
          *((_QWORD *)v11 + 1) = v6;
          v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v6;
        }
      }
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
  v14 = v21[0];
  while ( v14 != (HOST_VMMONITOR_MAPPING_ENTRY *)v21 )
  {
    v15 = v14;
    v14 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v14;
    if ( *((_QWORD *)v15 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 9), *((_DWORD *)v15 + 16), v13);
    }
    else
    {
      v16 = (volatile __int32 *)*((_QWORD *)v15 + 7);
      if ( v16 )
      {
        _InterlockedExchange(v16, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v15 + 7) + 8LL), 0LL);
      }
    }
    v17 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    v18 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v15 + 1);
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v15 || *v18 != v15 )
      goto LABEL_26;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    v19 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v15 + 11);
    if ( v19 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v19);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v15, v12);
  }
  return v4;
}
