/*
 * XREFs of ?IsCxUsingSelfManagedIo@FxDevice@@QEAAEXZ @ 0x1C00733FC
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C0075310 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

char __fastcall FxDevice::IsCxUsingSelfManagedIo(FxDevice *this)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // r10
  _LIST_ENTRY *Flink; // rcx
  char v3; // dl
  unsigned int v4; // r8d
  FxCxCallbackType *v5; // r9
  FxCxCallbackType smIoCallbackList[7]; // [rsp+0h] [rbp-18h] BYREF

  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  *(_DWORD *)smIoCallbackList = 184812290;
  Flink = this->m_CxDeviceInfoListHead.Flink;
  v3 = 0;
  *(_WORD *)&smIoCallbackList[4] = 3340;
  smIoCallbackList[6] = FxCxCallbackSmIoCleanup;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink && !v3 )
  {
    v4 = 0;
    v5 = smIoCallbackList;
    while ( !*((_QWORD *)&Flink[6].Flink + *(unsigned __int8 *)v5) )
    {
      ++v4;
      ++v5;
      if ( v4 >= 7 )
        goto LABEL_8;
    }
    v3 = 1;
LABEL_8:
    Flink = Flink->Flink;
  }
  return v3;
}
