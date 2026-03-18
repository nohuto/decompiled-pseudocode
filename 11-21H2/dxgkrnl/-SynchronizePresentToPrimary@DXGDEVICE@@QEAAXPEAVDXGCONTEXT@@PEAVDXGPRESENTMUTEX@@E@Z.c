/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C015A36C
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  __int64 **v10; // r12
  __int64 *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  const wchar_t *v20; // r9
  int v21; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v25[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 792);
  v8 = *(_QWORD *)(v4 + 800);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 832, 0LL);
  *(_QWORD *)(v4 + 840) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 824) >= 0x40u )
  {
    v9 = 0LL;
    memset(v25, 0, sizeof(v25));
    v10 = (__int64 **)(v4 + 808);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (__int64 *)v10 || !v11 )
        break;
      v14 = *v11;
      if ( *v11 )
      {
        if ( *(__int64 **)(v14 + 8) != v11 )
          goto LABEL_21;
        v15 = (__int64 **)v11[1];
        if ( *v15 != v11 )
          goto LABEL_21;
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        --*(_DWORD *)(v4 + 824);
      }
      *v11 = 0LL;
      v16 = v11 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v11 - 20)
        && (*((_DWORD *)v16 + 101) & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16[2] + 16) + 624LL) + 8LL)
                                                      + 784LL))(v16[32])
        && (unsigned int)v9 < 0x40 )
      {
        v25[v9] = v16[32];
        v9 = (unsigned int)(v9 + 1);
      }
    }
    if ( (_DWORD)v9 )
    {
      v17 = *((_QWORD *)a2 + 2);
      v24 = ++v8;
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 624LL) + 8LL) + 640LL))(
              0LL,
              0LL,
              (unsigned int)v9,
              v25,
              1,
              &VidSchSyncObject,
              0,
              &v24);
      if ( v18 < 0 )
      {
        v19 = v18;
        WdLogSingleEntry2(2LL, v18, a2);
        v20 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit signal for sync object";
LABEL_29:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v19, (__int64)a2, 0LL, 0LL, 0LL);
        goto LABEL_6;
      }
      *(_QWORD *)(v4 + 800) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_6;
  if ( (*((_DWORD *)a2 + 101) & 0x10) == 0 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 624LL) + 8LL)
                                                                                            + 624LL))(
            *((_QWORD *)a2 + 32),
            VidSchSyncObject,
            v8);
    if ( v21 < 0 )
    {
      v19 = v21;
      WdLogSingleEntry2(2LL, v21, a2);
      v20 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit wait for sync object";
      goto LABEL_29;
    }
  }
  *((_QWORD *)a2 + 22) = v8;
LABEL_6:
  v12 = (_QWORD *)((char *)a2 + 160);
  if ( !*v12 )
  {
    v13 = *(_QWORD **)(v4 + 816);
    if ( *v13 != v4 + 808 )
LABEL_21:
      __fastfail(3u);
    *v12 = v4 + 808;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(v4 + 816) = v12;
    ++*(_DWORD *)(v4 + 824);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  *(_QWORD *)(v4 + 840) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 832, 0LL);
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
