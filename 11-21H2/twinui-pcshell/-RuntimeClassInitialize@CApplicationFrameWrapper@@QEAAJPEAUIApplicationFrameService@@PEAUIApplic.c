/*
 * XREFs of ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x1800C08E4
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1800C07F0 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x1802FF100 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_1802FF100.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationFrameService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrameService@@@Z @ 0x1800C09F8 (--4-$ComPtr@UIApplicationFrameService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrameService@.c)
 *     ??4?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrame@@@Z @ 0x1800C0A5C (--4-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationFrame@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::RuntimeClassInitialize(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameService *a2,
        struct IApplicationFrameManager *a3,
        struct IApplicationFrame *a4)
{
  int v8; // ebx
  __int64 (__fastcall *v9)(struct IApplicationFrame *, char *); // rdi
  struct IApplicationFrameManager *v11; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 24LL))(a4, (char *)this + 80);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 120LL))(a4, (char *)this + 88);
    if ( v8 >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a4 + 144LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
      v8 = v9(a4, (char *)this + 128);
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationFrame>::operator=((char *)this + 112, a4);
        if ( *((struct IApplicationFrameManager **)this + 15) != a3 )
        {
          v11 = a3;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
          v11 = (struct IApplicationFrameManager *)*((_QWORD *)this + 15);
          *((_QWORD *)this + 15) = a3;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
        }
        Microsoft::WRL::ComPtr<IApplicationFrameService>::operator=((char *)this + 136, a2);
      }
    }
  }
  return (unsigned int)v8;
}
