/*
 * XREFs of ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x1800D3D44
 * Callers:
 *     ?Initialize@CKst@@EEAAJXZ @ 0x1800D3170 (-Initialize@CKst@@EEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800924E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800D3E18 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1801009FC (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B5664 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x18028553C (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CKst::InitializeMmcssTask(CKst *this)
{
  CMmcssTask *v2; // rax
  CMmcssTask *v3; // rbx
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int v8[4]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int16 v9[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+B4h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v2 = (CMmcssTask *)DefaultHeap::Alloc(0x58uLL);
  if ( v2 )
    v3 = CMmcssTask::CMmcssTask(v2);
  else
    v3 = 0LL;
  *(_QWORD *)v8 = v3;
  memset_0(v9, 0, 0x90uLL);
  v4 = StringCchCopyW(v9, 0x40uLL, (size_t *)L"Capture");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v4,
      v8[0]);
  v10 = 1;
  v5 = CMmcssTask::Set(v3, (const struct DWM_MMTASK *)v9, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v5,
      v8[0]);
    std::unique_ptr<CMmcssTask>::~unique_ptr<CMmcssTask>(v8);
    return v6;
  }
  else
  {
    *((_QWORD *)this + 6) = v3;
    return 0LL;
  }
}
