/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0179A80
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0171830 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0191040 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  struct _KTHREAD **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // rdx

  if ( *((_BYTE *)this + 441) )
    return 0LL;
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 624LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                  a2,
                  0LL);
  if ( (_DWORD)v8 != -1071775486 )
    goto LABEL_3;
  if ( !a3 )
    goto LABEL_30;
  if ( !*((_BYTE *)a4 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a4 + 8, 0LL, 0LL);
  v11 = (struct _KTHREAD **)*((_QWORD *)a4 + 3);
  *((_BYTE *)a4 + 32) = 0;
  if ( KeGetCurrentThread() != v11[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v11, *((char **)a4 + 5));
  *((_QWORD *)a4 + 5) = 0LL;
  if ( *((_BYTE *)a4 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  LOBYTE(v9) = 1;
  v8 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 624LL)
                                                                  + 8LL)
                                                      + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
         a2,
         v9);
  if ( *((_BYTE *)a4 + 144) )
  {
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a4 + 72), 0LL);
    if ( *(_DWORD *)(*((_QWORD *)a4 + 11) + 200LL) != 1 )
      goto LABEL_28;
  }
  if ( *((_BYTE *)a4 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a4 + 8, 0LL, 0LL);
  v12 = *((_QWORD *)a4 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v12 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, 72);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a4 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a4 + 3), 0LL);
  }
  *((_QWORD *)a4 + 5) = 0LL;
  *((_BYTE *)a4 + 32) = 1;
  if ( *(_DWORD *)(*((_QWORD *)a4 + 17) + 576LL) == 1 )
  {
LABEL_3:
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
LABEL_30:
    WdLogSingleEntry2(4LL, (int)v8, this);
    if ( (_DWORD)v8 != -1071775486 && (_DWORD)v8 != -1073741130 && (_DWORD)v8 != -1071775232 )
    {
      WdLogSingleEntry1(1LL, 3628LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (STATUS_GRAPHIC"
                  "S_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
        3628LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 8));
  if ( *((_BYTE *)a4 + 144) )
LABEL_28:
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  WdLogSingleEntry1(4LL, v8);
  COREDEVICEACCESS::AcquireSharedUncheck(a4, v15);
  return 3221226166LL;
}
