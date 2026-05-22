/*
 * XREFs of ??1DeviceInputHost@@UEAA@XZ @ 0x1800A975C
 * Callers:
 *     ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x1800A97E4 (--_GDeviceInputHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A9184 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A9950 (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall DeviceInputHost::~DeviceInputHost(DeviceInputHost *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<InputProvider>>(v2, *((_QWORD *)this + 7));
    std::_Deallocate<16,0>(*((void **)this + 6), 8 * ((__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) >> 3));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease((char *)this + 24);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
