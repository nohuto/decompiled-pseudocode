/*
 * XREFs of ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1C0164900 (DxgkReserveGpuVirtualAddress.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C9BF0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01CA5F0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C01CC650 (DxgkReclaimAllocations2.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0308988 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C032C2A0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::Open(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // r8
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  _BYTE v18[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v18, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a3 + 74)
    || (v13 = *((_QWORD *)a3 + 35),
        v14 = *(_DWORD *)(v13 + 16 * v9 + 8),
        ((a2 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v9 + 8) & 0x60))
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
LABEL_2:
    v10 = 0LL;
    goto LABEL_3;
  }
  if ( (v14 & 0x1F) != 0xA )
  {
    if ( a5 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v15,
            v17,
            0,
            0,
            -1,
            (__int64)L"Handle type mismatch",
            267LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    goto LABEL_2;
  }
  v10 = *(_QWORD *)(v13 + 16LL * (unsigned int)v9);
LABEL_3:
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    _m_prefetchw((const void *)(v10 + 64));
    v11 = *(_QWORD *)(v10 + 64);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v11 + 1, v11);
      if ( v12 == v11 )
      {
        v10 = *(_QWORD *)this;
        goto LABEL_9;
      }
    }
    *(_QWORD *)this = 0LL;
    v10 = 0LL;
  }
LABEL_9:
  *a4 = (struct DXGPAGINGQUEUE *)v10;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
}
