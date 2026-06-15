/*
 * XREFs of ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x18013D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013C190 (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18013CC44 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetCallState(__int64 a1, struct _TelephonyInstanceData *a2, unsigned int a3)
{
  int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_13;
  }
  if ( a3 > 1 )
    goto LABEL_4;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 - 8);
  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)(a1 - 8)) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)0x8000FFFFLL);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return (unsigned int)v6;
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v8 + 112LL))(
           v8,
           a2,
           &v14);
    if ( v6 >= 0 )
    {
      if ( v14 )
      {
        v9 = PhoneCallAudio::DoEnableCellularRouting(v7, a2, a3 == 0);
        v6 = 0;
        if ( v9 < 0 )
          v6 = v9;
        goto LABEL_13;
      }
LABEL_4:
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147019873;
  }
LABEL_13:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
