/*
 * XREFs of ?QueryService@CServiceHostComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18057FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServiceHostComponent::QueryService(
        CServiceHostComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rdi
  int v9; // ebx
  __int64 v10; // rbx
  _QWORD *i; // rcx
  __int64 v12; // rax
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // rbx
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v8 = (char *)this - 8;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( v9 < 0 )
  {
    v10 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 2); ; i += 4 )
      {
        v12 = *(_QWORD *)&a2->Data1 - *i;
        if ( *(_QWORD *)&a2->Data1 == *i )
          v12 = *(_QWORD *)a2->Data4 - i[1];
        if ( !v12 )
          break;
        if ( (unsigned __int64)++v10 >= *((_QWORD *)this + 3) )
          return (unsigned int)(*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                                 v8,
                                 a2,
                                 a3,
                                 a4);
      }
      v14 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(32 * v10 + *((_QWORD *)this + 2) + 16);
      v15 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      if ( !v14 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v15, (__int64)v8);
        v14 = v15;
      }
      v9 = (**v14)(v14, a3, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    }
    else
    {
      return (unsigned int)(*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                             v8,
                             a2,
                             a3,
                             a4);
    }
  }
  return (unsigned int)v9;
}
