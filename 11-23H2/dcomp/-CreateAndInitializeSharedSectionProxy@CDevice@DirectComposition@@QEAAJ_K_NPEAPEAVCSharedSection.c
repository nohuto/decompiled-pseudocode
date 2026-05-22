/*
 * XREFs of ?CreateAndInitializeSharedSectionProxy@CDevice@DirectComposition@@QEAAJ_K_NPEAPEAVCSharedSectionBaseProxy@2@PEAPEAX@Z @ 0x18007EA9C
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateAndInitializeSharedSectionProxy(
        DirectComposition::CDevice *this,
        __int64 a2,
        char a3,
        struct DirectComposition::CSharedSectionBaseProxy **a4,
        void **a5)
{
  int v8; // ebx
  struct DirectComposition::CSharedSectionBaseProxy *v9; // rsi
  unsigned int v10; // ebx
  void *v11; // rax
  void **v12; // rcx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF

  v14 = 0LL;
  v8 = DirectComposition::CDevice::CreateProxyInternal(this, a3 != 0 ? 48 : 169, 0, &v15, &v16);
  if ( v8 >= 0 )
  {
    v9 = (struct DirectComposition::CSharedSectionBaseProxy *)v15;
    v10 = v16;
    *((_DWORD *)v15 + 2) = 1;
    *((_DWORD *)v9 + 3) = v10;
    *(_QWORD *)v9 = &DirectComposition::CCrossContainerHostReadOnlySharedSectionProxy::`vftable';
    DirectComposition::CDevice::FlushKernelCommands(this, 0);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void **))(**((_QWORD **)this + 20) + 120LL))(
           *((_QWORD *)this + 20),
           v10,
           a2,
           &v14);
    if ( v8 < 0 )
    {
      DirectComposition::CDevice::RemoveProxy(v9);
    }
    else
    {
      v11 = v14;
      v12 = a5;
      *a4 = v9;
      *v12 = v11;
      (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)this + 16LL))(this);
    }
  }
  return (unsigned int)v8;
}
