/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x1C0022B1C
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C002294C (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // r10
  _LIST_ENTRY *Flink; // rcx
  char v3; // dl
  unsigned int v5; // r8d
  FxCxCallbackType *v6; // r9
  FxCxCallbackType smIoCallbackList[7]; // [rsp+0h] [rbp-18h] BYREF

  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)smIoCallbackList = 184812290;
  Flink = this->m_CxDeviceInfoListHead.Flink;
  v3 = 0;
  *(_WORD *)&smIoCallbackList[4] = 3340;
  smIoCallbackList[6] = FxCxCallbackSmIoCleanup;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink && !v3 )
  {
    v5 = 0;
    v6 = smIoCallbackList;
    while ( !*((_QWORD *)&Flink[6].Flink + *(unsigned __int8 *)v6) )
    {
      ++v5;
      ++v6;
      if ( v5 >= 7 )
        goto LABEL_10;
    }
    v3 = 1;
LABEL_10:
    Flink = Flink->Flink;
  }
  return v3;
}
