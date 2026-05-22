/*
 * XREFs of ??1KeyboardProcessor@@MEAA@XZ @ 0x1801B0F30
 * Callers:
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x1801B1200 (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801B0860 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 */

void __fastcall KeyboardProcessor::~KeyboardProcessor(KeyboardProcessor *this)
{
  __int64 *v2; // rcx

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 6);
  v2 = (__int64 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(v2, *((__int64 **)this + 9));
    std::_Deallocate<16,0>(*((void **)this + 8), (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 7 << 7);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
