/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x1800107F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000DF00 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  DWORD v5; // ebx
  int v10; // ebx
  ULONG v11; // eax
  _BYTE v12[80]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
    {
      v10 = 0;
      goto LABEL_4;
    }
    v5 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x88uLL);
  if ( v5 != -1 )
  {
    if ( TlsGetValue(v5) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  v10 = 1;
LABEL_4:
  memset_0(v12, 0, 0x44uLL);
  v11 = RtlLengthSid(Src);
  memcpy_0(v12, Src, v11);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 5),
    (union _RM_SID *)v12,
    a2,
    a3,
    a4,
    a5);
  if ( v10 )
    CempLockTrackerClearForThread(HampLockTrackerId);
}
