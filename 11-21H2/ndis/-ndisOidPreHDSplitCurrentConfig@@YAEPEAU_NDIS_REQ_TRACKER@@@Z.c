/*
 * XREFs of ?ndisOidPreHDSplitCurrentConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 */

unsigned __int8 __fastcall ndisOidPreHDSplitCurrentConfig(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  unsigned __int8 v4; // bl
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  wchar_t *Buffer; // rcx
  KIRQL v7; // dl
  char v9[4]; // [rsp+38h] [rbp-20h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = a1[4];
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA6u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v1,
      v3);
  if ( (*(_DWORD *)(&v3->Header + 1) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    v4 = 1;
  }
  else if ( *a1 )
  {
    v4 = 1;
    if ( (v1->MajorNdisVersion > 6u || v1->MajorNdisVersion == 6 && v1->MinorNdisVersion) && v1->HDSplitCurrentConfig )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( v3->PcwDatapathEventMask >= 0x1Cu )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
        HDSplitCurrentConfig = v1->HDSplitCurrentConfig;
        Buffer = v3->Reserved4.Buffer;
        v7 = NewIrql;
        *(_OWORD *)Buffer = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
        *((_QWORD *)Buffer + 2) = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
        *((_DWORD *)Buffer + 6) = HDSplitCurrentConfig->MaxHeaderSize;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v7);
        LODWORD(v3->OpenQueue) = 28;
        HIDWORD(v3->Reserved28) = 28;
        *((_DWORD *)a1 + 10) = 0;
      }
      else
      {
        LODWORD(v3->OpenQueue) = 28;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA7u,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10),
      *(_DWORD *)v9);
  }
  return v4;
}
