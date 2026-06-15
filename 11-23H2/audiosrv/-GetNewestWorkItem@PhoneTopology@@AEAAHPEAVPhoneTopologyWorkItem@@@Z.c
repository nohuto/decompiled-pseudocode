/*
 * XREFs of ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x180164F80
 * Callers:
 *     ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180164720 (-GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180164950 (-GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180164C40 (-GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??4PhoneTopologyWorkItem@@QEAAAEBV0@AEBV0@@Z @ 0x180163CC8 (--4PhoneTopologyWorkItem@@QEAAAEBV0@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::GetNewestWorkItem(PhoneTopology *this, struct PhoneTopologyWorkItem *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD **)(v4 + 16);
      if ( v5[268] == *((_DWORD *)a2 + 268) && v5[3] == *((_DWORD *)a2 + 3) )
        break;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_5;
    }
    PhoneTopologyWorkItem::operator=(a2, v5);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return 1LL;
  }
  else
  {
LABEL_5:
    if ( v8 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
}
