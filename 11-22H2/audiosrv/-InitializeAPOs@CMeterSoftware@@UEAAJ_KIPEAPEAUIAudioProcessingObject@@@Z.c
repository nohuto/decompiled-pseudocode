/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800486F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMeter@@@Z @ 0x1800298C8 (--$try_com_query_to@UIAudioMeter@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR *p_SpinCount; // rdi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v7 = this + 1;
  EnterCriticalSection(this + 1);
  p_SpinCount = &this->SpinCount;
  ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
  v9 = 0LL;
  while ( !wil::try_com_query_to<IAudioMeter,IAudioProcessingObject * &>(&a4[v9], (__int64)&this->SpinCount) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= a3 )
      goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, HANDLE *))(*(_QWORD *)*p_SpinCount + 32LL))(
          *p_SpinCount,
          &this->LockSemaphore);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp",
      (const char *)(unsigned int)v10);
    if ( v7 )
      LeaveCriticalSection(v7);
    return v11;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) )
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)*p_SpinCount + 40LL))(*p_SpinCount, 1LL);
LABEL_7:
  if ( *p_SpinCount )
  {
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x302,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp",
    (const char *)0x8007054FLL);
  if ( v7 )
    LeaveCriticalSection(v7);
  return 2147943759LL;
}
