/*
 * XREFs of ?GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18012F1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetCallStateSync(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2,
        enum TelephonyState *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v12 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  if ( a2 && a3 )
  {
    *(_DWORD *)a3 = 1;
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v7 + 152LL))(
             v7,
             a2,
             &v12);
      if ( v8 >= 0 )
        *(_DWORD *)a3 = v12 == 0;
      else
        v6 = v8;
    }
    else
    {
      v6 = -2147019873;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
