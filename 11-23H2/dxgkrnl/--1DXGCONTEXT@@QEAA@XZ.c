/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C018E26C
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C004981C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C168 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000481C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0004D30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C00487F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C01F3D0C (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01F4054 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03178C0 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  __int64 v2; // rcx
  DXGPRESENT *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v7; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v8; // rax
  void *v9; // rcx
  DXGDEVICESYNCOBJECT *v10; // rcx
  PVOID *i; // rbx
  void *v12; // rcx
  unsigned int v13; // edx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v14; // rax
  void *v15; // rbx

  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 6), *(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
  v2 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 136)) )
  {
    WdLogSingleEntry1(1LL, 684LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      684LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 685LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      685LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 436) )
  {
    WdLogSingleEntry1(1LL, 691LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_bDestroyed", 691LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    DXGPRESENT::DestroyStagingBuffer(v3, *((struct DXGDEVICE **)this + 2));
    v15 = (void *)*((_QWORD *)this + 19);
    if ( v15 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v15, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    MmUnsecureVirtualMemory(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 120);
  if ( *((_QWORD *)this + 16) )
  {
    if ( !*v5 )
    {
      WdLogSingleEntry1(1LL, 725LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPatchLocationTable != NULL", 725LL, 0LL, 0LL, 0LL, 0LL);
    }
    ExFreePoolWithTag(*((PVOID *)this + 16), 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *v5 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
    *v5 = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v8 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v8 + 2))(
      -1LL,
      (char *)this + 88,
      (char *)this + 80,
      0x8000LL);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 44) )
  {
    WdLogSingleEntry1(1LL, 767LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pCommandDmaBuffer", 767LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 48) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 48) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    v14 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v14 + 2))(
      -1LL,
      (char *)this + 56,
      (char *)this + 48,
      0x8000LL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v10 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v10);
  for ( i = (PVOID *)((char *)this + 408); *i != i; DXGCONTEXT::DestroyHwQueue(this, *i, 0LL) )
    ;
  if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336) )
    WdLogSingleEntry5(0LL, 275LL, 44LL, this, 0LL, 0LL);
  v12 = (void *)*((_QWORD *)this + 60);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x4B677844u);
  v13 = *((_DWORD *)this + 6);
  *((_QWORD *)this + 60) = 0LL;
  if ( v13 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v13);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *i != i )
  {
    WdLogSingleEntry1(1LL, 783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 783LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
