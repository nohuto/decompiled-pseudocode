/*
 * XREFs of ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C002F430
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030610 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZddD @ 0x1C00304E0 (WPP_RECORDER_SF_qZddD.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065B74 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z @ 0x1C00ACC10 (-ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 */

__int64 __fastcall ndisInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        const struct _UNICODE_STRING *a3,
        void *a4)
{
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-48h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x23u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&dword_1C00EB168);
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(
         a1,
         a2,
         (struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *)a2->ConfigurationHandle,
         &a2->ExportName.__ptr_.__value_->_UNICODE_STRING,
         a4);
  v11 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  a2->InitTimeMs = v11;
  if ( (ndisFlags & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", a2->pAdapterInstanceName, (unsigned int)v11);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZddD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v9,
      v10,
      v13,
      (char)a2,
      (__int64)a2->pAdapterInstanceName,
      a2->MajorNdisVersion,
      a2->MinorNdisVersion,
      v8);
  if ( v8 )
  {
    ndisCloseULongRef(&a2->Ref.SpinLock);
    ndisMCleanupMiniportBlockOnStop(a2);
  }
  else
  {
    ndisLogMiniportEvent(a2, NdisMEvent_MiniportInitialized);
  }
  MmUnlockPagableImageSection(qword_1C00EB178);
  _InterlockedDecrement((volatile signed __int32 *)&dword_1C00EB168);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x25u,
      &WPP_ce88abd507b4341f7f3e7e732f33c3be_Traceguids,
      a2);
  return v8;
}
