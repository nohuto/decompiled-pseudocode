/*
 * XREFs of ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ @ 0x1800FCA3C
 * Callers:
 *     ?AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z @ 0x1800FC1AC (-AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z.c)
 *     ?BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z @ 0x1800FC2B8 (-BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z.c)
 *     ?SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z @ 0x1800FCAF8 (-SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInk::NotifySuperWetInkWork(
        DirectComposition::CSynchronousSuperWetInk *this)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (*((_QWORD *)this + 2) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 2) >> 64);
  if ( v1 )
    v2 = v1 - 8;
  else
    v2 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v2, &v5, &v4);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 20) + 144LL))(*((_QWORD *)v5 + 20));
}
