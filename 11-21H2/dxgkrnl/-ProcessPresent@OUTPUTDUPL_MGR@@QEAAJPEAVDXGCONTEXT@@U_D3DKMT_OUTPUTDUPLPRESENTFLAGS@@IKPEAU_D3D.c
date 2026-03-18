/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C030F8B4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0322F58 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0321960 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0321F6C (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C032377C (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C0327BBC (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C03322A4 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C0332F3C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        unsigned int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        unsigned int a8,
        struct DXGCONTEXT **a9,
        struct COREDEVICEACCESS *a10)
{
  unsigned int v13; // esi
  unsigned int ActiveContextCount; // eax
  int v15; // edi
  int v17; // edx
  OUTPUTDUPL_CONTEXT **v18; // r13
  unsigned int v19; // eax
  OUTPUTDUPL_CONTEXT *v20; // rcx
  DXGDIAGNOSTICS **v21; // rcx
  int v22; // eax
  const wchar_t *v23; // r9
  unsigned int v24; // [rsp+50h] [rbp-128h]
  int v25; // [rsp+54h] [rbp-124h]
  __int64 v28; // [rsp+70h] [rbp-108h]
  _BYTE v29[16]; // [rsp+90h] [rbp-E8h] BYREF
  struct _VIDMM_DMA_BUFFER *v30[16]; // [rsp+A0h] [rbp-D8h] BYREF

  v13 = 0;
  memset(v30, 0, sizeof(v30));
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a8);
  v15 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, ActiveContextCount, v30);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer for context = 0x%I64x",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
  v28 = *((_QWORD *)this + 2) + 72LL * a8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)v28, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v17 = 1;
  v18 = *(OUTPUTDUPL_CONTEXT ***)(v28 + 48);
  v24 = 0;
  v25 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_18;
  v19 = 0;
  while ( 1 )
  {
    v20 = *v18;
    if ( !*v18 || !*((_DWORD *)v20 + 79) )
      goto LABEL_17;
    if ( v17 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v15 = OUTPUTDUPL_MGR::LogPresentParams(v21, a3, a6, a8, *(const void ***)(v28 + 56));
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL, a2);
          v23 = L"Failed to log diag packet 0x%I64x";
          goto LABEL_27;
        }
      }
      v25 = 0;
      v20 = *v18;
    }
    v22 = OUTPUTDUPL_CONTEXT::ProcessPresent(
            v20,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(struct AUTOEXPANDALLOCATION **)(v28 + 56),
            a9);
    v15 = v22;
    if ( v22 == -1071775486 )
    {
      v15 = 259;
      *((_DWORD *)*v18 + 70) = 1;
LABEL_15:
      v13 = 259;
      goto LABEL_16;
    }
    if ( v22 < 0 )
      break;
    if ( v22 == 259 )
      goto LABEL_15;
LABEL_16:
    v17 = v25;
    v19 = v24;
LABEL_17:
    ++v19;
    ++v18;
    v24 = v19;
    if ( v19 >= *((_DWORD *)this + 2) )
      goto LABEL_18;
  }
  v13 = v22;
  WdLogSingleEntry1(2LL, a2);
  v23 = L"Process present failed for context 0x%I64x";
LABEL_27:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL, a8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"As we failed to process the present we will mark all the contexts on VidPnSource 0x%I64x for destroy",
      a8,
      0LL,
      0LL,
      0LL,
      0LL);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((struct _KTHREAD **)this, a8, 0LL, 0, 0, 7);
    if ( v13 != v15 )
    {
      WdLogSingleEntry1(1LL, 1143LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RetStatus == Status", 1143LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
