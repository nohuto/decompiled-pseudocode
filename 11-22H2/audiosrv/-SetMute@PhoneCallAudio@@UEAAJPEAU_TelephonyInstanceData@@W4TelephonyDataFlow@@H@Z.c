/*
 * XREFs of ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x18013D330
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013C27C (-DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013C318 (-DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetMute(__int64 a1, struct _TelephonyInstanceData *a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v8 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v8 = -2147467261;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -2147024809;
        goto LABEL_12;
      }
      v10 = PhoneCallAudio::DoSetCellularRxMute((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
      if ( v10 < 0 )
        goto LABEL_9;
    }
    v10 = PhoneCallAudio::DoSetCellularTxMute((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
    if ( v10 < 0 )
LABEL_9:
      v8 = v10;
  }
  else
  {
    v11 = PhoneCallAudio::DoSetCellularRxMute((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a4);
    if ( v11 < 0 )
      v8 = v11;
  }
LABEL_12:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
