/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C0394794
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1C0394C20 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0394D68 (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C0396E00 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  int v4; // eax
  char v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h]
  _QWORD v19[10]; // [rsp+48h] [rbp-29h] BYREF

  v17 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( (_BYTE)word_1C013049C )
    {
      if ( HIBYTE(word_1C013049C) && qword_1C01304B0 == *((_QWORD *)P + 2) )
      {
        *((_DWORD *)P + 6) = 4;
        v2 = 4;
        *((_QWORD *)P + 2) = qword_1C01304A8;
      }
    }
  }
  memset(v19, 0, 0x48uLL);
  v19[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  LODWORD(v19[7]) = *((_DWORD *)P + 7);
  HIDWORD(v19[7]) = !v3;
  memset(&v19[1], 0, 36);
  LODWORD(v19[6]) = 25;
  HIDWORD(v19[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, 0x200000000LL);
  v4 = *((_DWORD *)P + 6);
  do
  {
    v5 = 0;
    v6 = qword_1C01304C8;
    if ( *(_QWORD *)v6 != v6 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 72), Executive, 0, 0, 0LL);
        v7 = *(_QWORD *)(v6 + 56);
        if ( *(_QWORD *)v7 != v7 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v6 + 72), 0);
        v6 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == qword_1C01304C8 )
        {
          v4 = *((_DWORD *)P + 6);
          v5 = 0;
          goto LABEL_47;
        }
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v8 = *((_DWORD *)P + 6);
          if ( v8 != 1 && v8 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v7 + 24) )
            break;
        }
LABEL_44:
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == *(_QWORD *)(v6 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_BYTE *)(v7 + 1158) != 1 || !*(_QWORD *)(v6 + 232) || *(_DWORD *)(v7 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v7 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v17 = 0;
      if ( *(_DWORD *)(v7 + 3984) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        v10 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3896), 2, v9);
        v10 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), v10);
      v11 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v6,
                   *(_QWORD *)(v7 + 48),
                   *((_DWORD *)P + 6),
                   *((_DWORD *)P + 7),
                   *((_QWORD *)P + 4),
                   (__int64)&v17);
      if ( *(_DWORD *)(v7 + 3984) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3896), 2u, v12);
      }
      v13 = *(_QWORD *)(v7 + 3896);
      v14 = 0;
      if ( v13 )
      {
        v18 = *(_QWORD *)(v13 + 404);
        v14 = v18;
      }
      memset(v19, 0, 0x48uLL);
      v15 = *(_QWORD *)(v7 + 2672);
      v19[7] = __PAIR64__(v11, v17);
      v19[0] = 0x480000001ELL;
      memset(&v19[1], 0, 36);
      LODWORD(v19[6]) = 42;
      HIDWORD(v19[6]) = v14;
      v19[8] = v15;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, 0x200000000LL);
      if ( (int)v11 >= 0 )
      {
        v16 = v17;
        if ( *((_DWORD *)P + 6) == 4 && ((-((v17 & 8) != 0) - 8) & v17) != 0 )
        {
          WdLogSingleEntry1(2LL, v17);
          v16 = 0LL;
          v17 = 0;
        }
        if ( ((unsigned __int8)-((v16 & 7) != 0) & ((*(_BYTE *)(v7 + 3904) & 1) == 0)) == 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, -1073741823LL);
      }
      else
      {
        WdLogSingleEntry1(3LL, v11);
      }
      v16 = 0LL;
      v17 = 0;
LABEL_37:
      WdLogSingleEntry1(4LL, v16);
      if ( *(_DWORD *)(v7 + 3984) != 1 && *(_DWORD *)(v7 + 284) == 1 && (v17 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v7 + 24), v17, P, P + 40);
      goto LABEL_41;
    }
LABEL_47:
    if ( v4 == 4 && (v17 & 8) != 0 )
    {
      *((_DWORD *)P + 6) = 1;
      v5 = 1;
      *((_QWORD *)P + 2) = qword_1C01304B0;
      v4 = 1;
    }
  }
  while ( v5 );
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
