/*
 * XREFs of ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02BC600
 * Callers:
 *     DxgkPinFrameBufferForSave2CB @ 0x1C0054BB0 (DxgkPinFrameBufferForSave2CB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C0054C00 (DxgkPinFrameBufferForSaveCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002FED0 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006EC50 (-SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_O.c)
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F3E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1C006F5C0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::PinFrameBufferForSave(
        DXGADAPTER *this,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        struct _MDL **a5,
        struct _DXGK_ADL **a6)
{
  char v7; // r12
  __int64 v8; // rbx
  __int64 v10; // rbx
  struct _MDL *v11; // rsi
  struct _DXGK_ADL *v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // r8d
  PMDL Mdl; // rax
  int v17; // eax
  struct _DXGK_ADL **v18; // r15
  int v19; // eax
  struct _DXGK_ADL *v20; // rax
  struct _DXGK_ADL *v21; // [rsp+58h] [rbp-60h] BYREF
  struct SYSMM_PHYSICAL_OBJECT *v22; // [rsp+60h] [rbp-58h] BYREF
  PVOID MappedBase[10]; // [rsp+68h] [rbp-50h] BYREF
  struct SYSMM_ADAPTER_OBJECT *v24; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+20h]

  v26 = a4;
  ViewSize = a3;
  v7 = 0;
  if ( a2 >= *((_DWORD *)this + 72) )
  {
    v8 = a2;
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PinFrameBufferForSave Invalid physical adapter index. Index=%u",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PinFrameBufferForSave CommitSize (%I64u) is not a multiple of PAGE_SIZE",
      ViewSize,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)this + 335) + 344LL * a2;
  v22 = 0LL;
  v24 = 0LL;
  MappedBase[0] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v21 = 0LL;
  LODWORD(v13) = MmMapViewInSystemSpace(*(PVOID *)(v10 + 64), MappedBase, &ViewSize);
  if ( (int)v13 >= 0 )
  {
    Mdl = IoAllocateMdl(MappedBase[0], ViewSize, 0, 0, 0LL);
    v11 = Mdl;
    MappedBase[1] = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v7 = 1;
      v17 = SysMmCreatePhysicalObjectForExistingMdl(
              *((struct SYSMM_ADAPTER **)this + 28),
              (__int64)v11,
              (__int64)this,
              8,
              &v22,
              &v24);
      v13 = v17;
      if ( v17 >= 0 )
      {
        *(_QWORD *)(v10 + 72) = v11;
        if ( a5 )
        {
          *a5 = v11;
        }
        else
        {
          v18 = a6;
          if ( a6 )
          {
            v19 = SysMmCreateAdl(v24, 0LL, ViewSize, v26, &v21);
            LODWORD(v13) = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry1(3LL, v19);
              v12 = v21;
              goto LABEL_19;
            }
            v20 = v21;
            *(_QWORD *)(v10 + 80) = v21;
            *v18 = v20;
          }
        }
        *(_QWORD *)(v10 + 88) = v22;
        *(_QWORD *)(v10 + 96) = v24;
        return 0LL;
      }
      WdLogSingleEntry1(6LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to add iommu memory tracker for frame buffer save area, Status=0x%.8x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL, 11105LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for Mdl.",
        11105LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v13) = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, ViewSize);
  }
LABEL_19:
  if ( v12 )
    SysMmFreeAdl(v24, v12);
  if ( v22 )
  {
    SysMmClosePhysicalObject(v24, v14, v15);
    SysMmUnreferencePhysicalObject(v22);
  }
  if ( v7 )
    MmUnlockPages(v11);
  if ( v11 )
    IoFreeMdl(v11);
  if ( MappedBase[0] )
    MmUnmapViewInSystemSpace(MappedBase[0]);
  return (unsigned int)v13;
}
