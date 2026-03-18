/*
 * XREFs of DpiPdoIsChildConnected @ 0x1C01F35DC
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001E234 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x1C01F3838 (DpiDxgkDdiQueryChildStatus.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C03889CC (DpiFdoPendingCreatePdoCompletion.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  __int64 ChildStatus; // r12
  __int64 v9; // r14
  bool v10; // r15
  _QWORD *ChildDescriptor; // rax
  __int64 v12; // r8
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  bool v15; // cf
  int v16; // r15d
  __int64 v17; // r13
  __int64 v18; // r9
  __int64 v19; // r8
  char v20; // al
  __int64 v21; // rax
  _DWORD v26[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v27; // [rsp+50h] [rbp-59h]
  _DWORD v28[2]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v29[24]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v30; // [rsp+80h] [rbp-29h]
  int v31; // [rsp+88h] [rbp-21h]
  int v32; // [rsp+8Ch] [rbp-1Dh]
  int v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+94h] [rbp-15h]
  int v35; // [rsp+98h] [rbp-11h]
  int v36; // [rsp+9Ch] [rbp-Dh]
  __int64 v37; // [rsp+A0h] [rbp-9h]

  LODWORD(ChildStatus) = 0;
  v9 = *(_QWORD *)(a1 + 64);
  v10 = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3304), 1u);
  ChildDescriptor = DpiFdoGetChildDescriptor(v9, a2);
  v13 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v16 = a2;
    goto LABEL_15;
  }
  if ( *(_DWORD *)ChildDescriptor == 1 )
    v10 = (unsigned int)(*((_DWORD *)ChildDescriptor + 1) - 15) <= 2;
  switch ( *((_DWORD *)ChildDescriptor + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_9:
      v27 = 0LL;
      v14 = *(_QWORD *)(v9 + 3896);
      v15 = v10;
      v16 = a2;
      v17 = *(_QWORD *)(v9 + 40);
      v26[1] = a2;
      v26[0] = v15 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v14, 1, v12);
      KeWaitForSingleObject((PVOID)v13[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3896), 1);
      LOBYTE(v18) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v17, *(_QWORD *)(v9 + 48), v26, v18);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3896));
      KeReleaseMutex((PRKMUTEX)v13[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 3896), 1u, v19);
      if ( (int)ChildStatus < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v17 + 208), ChildStatus);
        goto LABEL_15;
      }
      *a5 = v27;
      goto LABEL_11;
    case 4:
      if ( (!v10 || *((_DWORD *)ChildDescriptor + 1) != 15 || *(_QWORD *)(v9 + 3232)) && a3 )
        goto LABEL_9;
      *a5 = *((_BYTE *)ChildDescriptor + 65);
      break;
    default:
      WdLogSingleEntry1(2LL, 0LL);
      break;
  }
  v16 = a2;
LABEL_11:
  v20 = *a5;
  if ( !*a5 && *((_BYTE *)v13 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, v13);
    KeReleaseMutex((PRKMUTEX)(v9 + 3408), 0);
    v20 = *a5;
  }
  *a6 = v20 == (v13[6] == 0LL);
LABEL_15:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3304));
  KeLeaveCriticalRegion();
  memset(v29, 0, sizeof(v29));
  v32 = 0;
  v21 = *(_QWORD *)(v9 + 2672);
  v31 = 0;
  v30 = 0LL;
  v36 = (unsigned __int8)*a5;
  v28[0] = 30;
  v28[1] = 72;
  memset(v29, 0, sizeof(v29));
  v33 = 38;
  v34 = v16;
  v35 = ChildStatus;
  v37 = v21;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, *(_QWORD *)(v9 + 5728));
  return (unsigned int)ChildStatus;
}
