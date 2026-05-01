/*
 * XREFs of ?GetEvictedView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180791E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutOperation::GetEvictedView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 *v13; // rbx
  int v14; // ebx
  struct IApplicationView *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v5);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      if ( v7 <= 0xA )
      {
        v8 = 1470;
        if ( _bittest(&v8, v7) )
          break;
      }
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 11) )
        goto LABEL_5;
    }
    v4 = v5;
    v9 = 0;
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  if ( v9 < 0 )
  {
    return 0;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    v16 = 0LL;
    v11 = *(_QWORD *)(v10 + 8 * v4);
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL);
    v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v17);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
    v14 = v12(v11, v13);
    if ( v14 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      v14 = 0;
      *a2 = v16;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  }
  return (unsigned int)v14;
}
