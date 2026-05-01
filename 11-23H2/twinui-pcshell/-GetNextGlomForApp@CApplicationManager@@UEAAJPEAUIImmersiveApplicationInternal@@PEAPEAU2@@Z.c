/*
 * XREFs of ?GetNextGlomForApp@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAPEAU2@@Z @ 0x18006CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::GetNextGlomForApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveApplicationInternal **a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v8; // edi
  __int64 *v10; // rbx

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 50);
  v8 = -2147023728;
  if ( v4 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD))(*(_QWORD *)a2 + 168LL))(
               a2,
               *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v3)) )
    {
      if ( ++v3 >= v4 )
        return v8;
    }
    v10 = (__int64 *)(*((_QWORD *)this + 49) + 8 * v3);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v8 = 0;
    *a3 = (struct IImmersiveApplicationInternal *)*v10;
  }
  return v8;
}
