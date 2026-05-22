/*
 * XREFs of ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801A02B0
 * Callers:
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18019F330 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801A0090 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18019F3DC (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801A0154 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerNavigationManager::SetCurrentStateWithOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  struct BamoControllerNavigationOverrideProxy *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
  if ( v4 != a2 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD))a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v7);
    v5 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
    }
  }
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 32LL))((__int64)v4 + 8) )
    ControllerNavigationManager::PauseNavigation(this, v6);
  else
    ControllerNavigationManager::ResumeNavigation(this, *((struct BamoControllerNavigationOverrideProxy **)this + 24));
}
