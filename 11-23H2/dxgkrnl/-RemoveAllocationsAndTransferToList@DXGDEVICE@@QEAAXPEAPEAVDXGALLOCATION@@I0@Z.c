/*
 * XREFs of ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C02EC8D8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0047C70 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02EC6E4 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsAndTransferToList(
        struct _KTHREAD **this,
        struct DXGALLOCATION **a2,
        unsigned int a3,
        struct DXGALLOCATION **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  struct DXGALLOCATION *v10; // rdi
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+58h] [rbp-30h]
  _BYTE v13[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+70h] [rbp-18h]

  v5 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, this + 26, 0);
  v11 = 0LL;
  v12 = 0;
  if ( (_DWORD)v5 && *a2 && (v8 = *((_QWORD *)*a2 + 5)) != 0 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v11, (struct DXGFASTMUTEX *const)(v8 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive(v14);
    v15 = 2;
  }
  if ( (_DWORD)v5 )
  {
    v9 = v5;
    do
    {
      v10 = *a2;
      if ( *a2 )
      {
        DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)this, *a2, 1);
        *((_QWORD *)v10 + 8) = *a4;
        *a4 = v10;
      }
      else
      {
        WdLogSingleEntry1(1LL, 8438LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAllocation != NULL", 8438LL, 0LL, 0LL, 0LL, 0LL);
      }
      ++a2;
      --v9;
    }
    while ( v9 );
  }
  if ( v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v11);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
