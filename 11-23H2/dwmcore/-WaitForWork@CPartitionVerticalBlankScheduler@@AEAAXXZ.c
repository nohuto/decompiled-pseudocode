/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180048C6C
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180046400 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ @ 0x180048F4C (-GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F1698 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x18012E59C (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D1360 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateU0qtttt_EventWriteTransfer @ 0x1801D1978 (McTemplateU0qtttt_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18027C158 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(HANDLE *this)
{
  __int64 v2; // rsi
  void *OcclusionEvent; // rax
  unsigned __int64 v4; // r15
  ULONGLONG TickCount64; // rax
  int v6; // edi
  HANDLE *v7; // r15
  HANDLE v8; // rcx
  __m128i *p_si128; // rdi
  int v10; // edx
  int v11; // ecx
  DWORD v12; // r8d
  char v13; // di
  char v14; // r13
  char v15; // r12
  int v16; // eax
  int v17; // esi
  int v18; // r15d
  int v19; // r14d
  int v20; // edi
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  signed int LastError; // eax
  __m128i *v30; // [rsp+20h] [rbp-50h]
  DWORD v31; // [rsp+40h] [rbp-30h] BYREF
  int v32; // [rsp+44h] [rbp-2Ch] BYREF
  __m128i si128; // [rsp+48h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v2 = 4LL;
  OcclusionEvent = CDisplayManager::GetOcclusionEvent((CDisplayManager *)this);
  if ( OcclusionEvent )
    this[4] = OcclusionEvent;
  else
    v2 = 3LL;
  v4 = g_renderThreadTick;
  g_renderThreadTick = 0LL;
  if ( v4 )
  {
    TickCount64 = GetTickCount64();
    v6 = TickCount64 - v4;
    if ( TickCount64 - v4 > (unsigned int)CCommonRegistryData::RenderThreadTimeoutMilliseconds
      && !IsDebuggerPresent()
      && !(unsigned int)IsKernelDebuggerPresent()
      && (unsigned int)dword_1803E3B40 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1803E3B40, 0x400000000000LL) )
    {
      v32 = v6;
      si128.m128i_i64[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v26,
        (unsigned int)&unk_18037F354,
        v27,
        v28,
        (__int64)&si128,
        (__int64)&v32);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v30 = &si128;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Start);
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    v30 = &si128;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &WaitForWork_Start);
  }
  v7 = this + 1;
  v31 = WaitForMultipleObjects(v2, this + 1, 0, 0);
  if ( v31 >= (unsigned int)v2 )
  {
    while ( 1 )
    {
      LODWORD(v30) = 0;
      v21 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, char *, __int64, __m128i *, DWORD *))(*(_QWORD *)this[10] + 32LL))(
              this[10],
              (unsigned int)v2,
              (char *)this + 8,
              0xFFFFFFFFLL,
              v30,
              &v31);
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x13Du, 0LL);
        v23 = -1;
        v31 = -1;
      }
      else
      {
        v23 = v31;
      }
      if ( v23 < (unsigned int)v2 )
        break;
      v24 = (*(__int64 (__fastcall **)(HANDLE, __int64))(*(_QWORD *)this[10] + 24LL))(this[10], 3LL);
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x14Bu, 0LL);
    }
  }
  v8 = this[3];
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !CancelWaitableTimer(v8) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  *((_DWORD *)this + 1158) = -1;
  p_si128 = &si128;
  do
  {
    p_si128->m128i_i32[0] = WaitForSingleObject(*v7++, 0);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    --v2;
  }
  while ( v2 );
  v12 = v31;
  v13 = 0;
  if ( !v31 || !si128.m128i_i32[0] )
    v13 = 1;
  if ( v31 == 1 || !si128.m128i_i32[1] )
    v13 |= 2u;
  v14 = si128.m128i_i8[8];
  if ( v31 == 2 || !si128.m128i_i32[2] )
    v13 |= 4u;
  v15 = si128.m128i_i8[12];
  if ( v31 == 3 || !si128.m128i_i32[3] )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this[8] + 27));
    v12 = v31;
    v13 |= 8u;
  }
  v16 = dword_1803E5BEC;
  v17 = v13 & 1;
  if ( (v13 & 1) != 0 )
  {
    v16 = dword_1803E5BEC | 8;
    dword_1803E5BEC |= 8u;
  }
  v18 = v13 & 2;
  if ( (v13 & 2) != 0 )
  {
    v16 |= 0x10u;
    dword_1803E5BEC = v16;
  }
  v19 = v13 & 4;
  if ( (v13 & 4) != 0 )
  {
    v16 |= 2u;
    dword_1803E5BEC = v16;
  }
  v20 = v13 & 8;
  if ( v20 )
    dword_1803E5BEC = v16 | 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    McTemplateU0qqqqq_EventWriteTransfer(v11, v10, v12, si128.m128i_i32[0], si128.m128i_i8[4], v14, v15);
    v12 = v31;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qtttt_EventWriteTransfer(v20 != 0, v10, v12, v17, v18 != 0, v19 != 0, v20 != 0);
  g_renderThreadTick = GetTickCount64();
}
