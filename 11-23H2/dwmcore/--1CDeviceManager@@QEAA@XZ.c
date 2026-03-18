/*
 * XREFs of ??1CDeviceManager@@QEAA@XZ @ 0x18010E9E0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DeviceManager__ @ 0x1801242F0 (_dynamic_atexit_destructor_for__g_DeviceManager__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800FD8E8 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 */

void __fastcall CDeviceManager::~CDeviceManager(CDeviceManager *this)
{
  CD3DDevice **v2; // rcx

  v2 = (CD3DDevice **)*((_QWORD *)this + 7);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(v2, *((CD3DDevice ***)this + 8));
    std::_Deallocate<16,0>(
      *((void **)this + 7),
      (*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  CD2DFactory::~CD2DFactory(this);
}
