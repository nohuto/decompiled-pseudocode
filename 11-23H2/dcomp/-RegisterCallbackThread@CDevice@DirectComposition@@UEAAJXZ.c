/*
 * XREFs of ?RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ @ 0x18008C550
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z @ 0x18001D760 (-Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV1.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::RegisterCallbackThread(
        struct DirectComposition::CMessageConversationHost **this)
{
  int v2; // edi
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v4 = this + 10;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(this + 10));
  if ( this[80] || (v2 = CoreUICreate(this + 80), v2 >= 0) )
  {
    if ( !this[81] )
      v2 = DirectComposition::CMessageConversationHost::Create(
             (struct DirectComposition::CDevice *)(this - 2),
             1,
             (int (*)(const void *, const void *, const void *, unsigned int))DirectComposition::CDevice::s_OnCallbackMessage_NoLock,
             this - 2,
             this + 81);
  }
  *((_DWORD *)this + 166) = GetCurrentThreadId();
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v4);
  return (unsigned int)v2;
}
