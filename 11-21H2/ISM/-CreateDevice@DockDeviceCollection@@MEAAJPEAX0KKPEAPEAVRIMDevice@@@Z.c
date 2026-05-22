/*
 * XREFs of ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800C8630
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA?AV?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@0@AEAPEAX0AEAK1@Z @ 0x1800C824C (--$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA-AV-$unique_ptr@VDockDevice@@U-$de.c)
 */

__int64 __fastcall DockDeviceCollection::CreateDevice(
        DockDeviceCollection *this,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  struct RIMDevice *v7; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  std::make_unique<DockDevice,void * &,void * &,unsigned long &,unsigned long &,0>(&v7, &v8, &v9, &v10, (int *)&a5);
  *a6 = v7;
  return 0LL;
}
