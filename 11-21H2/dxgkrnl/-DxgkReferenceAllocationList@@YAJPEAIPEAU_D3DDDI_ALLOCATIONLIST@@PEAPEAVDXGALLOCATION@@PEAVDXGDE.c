/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0172E70
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct _D3DDDI_ALLOCATIONLIST *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int i; // ebx
  __int64 hAllocation; // rdi
  __int64 v14; // rax
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rsi
  struct DXGTHREAD *Current; // rax
  _BYTE v20[88]; // [rsp+60h] [rbp-58h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v21; // [rsp+C8h] [rbp+10h]

  v21 = a2;
  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v9 = *((_QWORD *)Current + 3)) == 0 )
  {
    v9 = v8;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v20, (struct DXGPROCESS *)v9);
  v10 = *a1;
  v11 = 0;
  for ( i = 0; i < v10; ++i )
  {
    hAllocation = v4->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v14 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *(_DWORD *)(v9 + 296) )
        goto LABEL_8;
      v16 = *(_QWORD *)(v9 + 280);
      v17 = *(_DWORD *)(v16 + 16 * v14 + 8);
      if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v14 + 8) & 0x60)
        || (v17 & 0x2000) != 0
        || (v17 & 0x1F) == 0 )
      {
        goto LABEL_8;
      }
      if ( (v17 & 0x1F) != 5 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
        WdLogSingleEntry1(3LL, hAllocation);
        v11 = -1071775468;
        break;
      }
      v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v14);
      if ( !v18 )
        goto LABEL_8;
      if ( a4 && *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) != *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 16LL) )
      {
        WdLogSingleEntry1(3LL, hAllocation);
        v11 = -1071775467;
        break;
      }
      if ( !ExAcquireRundownProtection(v18 + 11) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v18, 0LL, 0LL);
      a3[i] = (struct DXGALLOCATION *)v18;
    }
    v4 = ++v21;
  }
  *a1 = i;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return v11;
}
