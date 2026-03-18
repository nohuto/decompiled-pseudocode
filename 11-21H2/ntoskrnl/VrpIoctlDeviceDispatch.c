/*
 * XREFs of VrpIoctlDeviceDispatch @ 0x140692780
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140691898 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x1406928FC (VRegEnabledInJob.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x1407F5E04 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407F5F80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1409262FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14092665C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x140926868 (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1409269C4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 */

__int64 __fastcall VrpIoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int DifferencingHive; // eax
  unsigned int v17; // esi
  int v19; // ebx
  unsigned int v20; // eax
  void *v21; // [rsp+28h] [rbp-29h]
  void *v22; // [rsp+30h] [rbp-21h]
  unsigned int v23; // [rsp+38h] [rbp-19h] BYREF
  GUID v24; // [rsp+40h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int *v27; // [rsp+80h] [rbp+2Fh]
  int v28; // [rsp+88h] [rbp+37h]
  int v29; // [rsp+8Ch] [rbp+3Bh]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  v24 = 0LL;
  ActivityId = 0LL;
  v5 = *(_DWORD *)(v2 + 24);
  if ( (unsigned int)VRegEnabledInJob(&v23) && !VrpAllowContainerNesting )
  {
    v17 = -1073741808;
    if ( (unsigned int)dword_140C038A0 > 2 )
    {
      v29 = 0;
      v27 = &v23;
      v23 = v5;
      v28 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C038A0,
        (unsigned __int8 *)byte_14002A571,
        &v24,
        0LL,
        3u,
        v26);
    }
    goto LABEL_13;
  }
  EtwActivityIdControl(1u, &ActivityId);
  v8 = dword_140C038A0;
  if ( (unsigned int)dword_140C038A0 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v5;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C038A0,
      (unsigned __int8 *)byte_14002A525,
      &v24,
      &ActivityId,
      3u,
      v26);
    v8 = dword_140C038A0;
  }
  v9 = v5 - 2228228;
  if ( !v9 )
  {
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         *(HANDLE **)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64),
                         v7,
                         v21,
                         (__int64)v22);
    goto LABEL_12;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    DifferencingHive = VrpHandleIoctlLoadDifferencingHive(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64),
                         v7,
                         v21,
                         (unsigned __int64)v22);
    goto LABEL_12;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_12;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlModifyFlags(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         (__int64)v22);
    goto LABEL_12;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (_DWORD)v21,
                         (__int64)v22);
    goto LABEL_12;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_12;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         *(_QWORD *)(a2 + 24),
                         v3);
LABEL_12:
    v17 = DifferencingHive;
    goto LABEL_13;
  }
  v19 = v15 - 4;
  if ( !v19 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_12;
  }
  if ( v19 == 4 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_12;
  }
  if ( v8 > 2 )
  {
    v20 = *(_DWORD *)(v2 + 24);
    v29 = 0;
    v23 = v20;
    v28 = 4;
    v27 = &v23;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A4F9, &v24, 0LL, 3u, v26);
  }
  v17 = -1073741808;
LABEL_13:
  *(_DWORD *)(a2 + 48) = v17;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (unsigned int)dword_140C038A0 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v17;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A0, (unsigned __int8 *)word_14002A54A, &v24, 0LL, 3u, v26);
  }
  return v17;
}
