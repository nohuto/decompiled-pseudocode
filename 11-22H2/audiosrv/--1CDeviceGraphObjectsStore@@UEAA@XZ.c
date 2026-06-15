/*
 * XREFs of ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x18010EFE8
 * Callers:
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x18010F1D0 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x1800126A0 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  `eh vector destructor iterator'(
    (char *)this + 88,
    24LL,
    4LL,
    (void (*)(void *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(v2, *((_QWORD *)this + 9));
    std::_Deallocate<16,0>(
      *((void **)this + 8),
      (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    CoTaskMemFree(v3);
  *((_DWORD *)this + 3) = -1073741823;
}
