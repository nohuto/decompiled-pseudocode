/*
 * XREFs of ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00D62DC
 * Callers:
 *     ?VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C002CCE0 (-VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C00027A0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00149D0 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0018008 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ @ 0x1C001CEA4 (-Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D6B7C (-EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00EB11C (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EnableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  __int64 **i; // rsi
  struct _MDL *v6; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v8; // eax
  __int64 **j; // rsi
  struct _MDL *v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 result; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v15[24]; // [rsp+30h] [rbp-68h] BYREF

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v2 = 0LL;
    if ( *((_DWORD *)this + 926) )
    {
      while ( 1 )
      {
        v3 = VIDMM_SEGMENT::MapToIommu(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v2));
        LODWORD(v4) = v3;
        if ( v3 < 0 )
          break;
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= *((_DWORD *)this + 926) )
          goto LABEL_5;
      }
      WdLogSingleEntry1(3LL, v3);
      return (unsigned int)v4;
    }
    else
    {
LABEL_5:
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(this, (struct _LIST_ENTRY *)((char *)this + 3768));
      VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(this, (struct _LIST_ENTRY *)((char *)this + 3784));
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14,
        (VIDMM_GLOBAL *)((char *)this + 3832));
      for ( i = (__int64 **)*((_QWORD *)this + 475); i != (__int64 **)((char *)this + 3800); i = (__int64 **)*i )
      {
        v6 = (struct _MDL *)i[5];
        LogicalAddress = SysMmGetLogicalAddress(i[6]);
        v8 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v6, 0);
        v4 = v8;
        if ( v8 < 0 )
        {
LABEL_15:
          WdLogSingleEntry1(3LL, v4);
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14);
          return (unsigned int)v4;
        }
      }
      for ( j = (__int64 **)*((_QWORD *)this + 477); j != (__int64 **)((char *)this + 3816); j = (__int64 **)*j )
      {
        v10 = (struct _MDL *)j[7];
        v11 = SysMmGetLogicalAddress(j[8]);
        v12 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v11, v10, 0);
        v4 = v12;
        if ( v12 < 0 )
          goto LABEL_15;
      }
      *((_BYTE *)this + 40181) = 1;
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14);
      result = 0LL;
      *((_BYTE *)this + 40179) = 1;
    }
  }
  else
  {
    memset(&v15[1], 0, 0x54uLL);
    v15[0] = 130;
    if ( (unsigned int)Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled() )
      return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
    else
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15);
  }
  return result;
}
