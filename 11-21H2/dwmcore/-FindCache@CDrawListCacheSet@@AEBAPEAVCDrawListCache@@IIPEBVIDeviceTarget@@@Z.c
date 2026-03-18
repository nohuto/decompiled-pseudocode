/*
 * XREFs of ?FindCache@CDrawListCacheSet@@AEBAPEAVCDrawListCache@@IIPEBVIDeviceTarget@@@Z @ 0x1800DC198
 * Callers:
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@PEBVIDeviceTarget@@II@Z @ 0x1800F4C8C (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@PEBVIDeviceTarget@@II@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CDrawListCache *__fastcall CDrawListCacheSet::FindCache(
        CDrawListCacheSet *this,
        int a2,
        int a3,
        const struct IDeviceTarget *a4)
{
  __int64 v8; // rsi
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // r12d
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = 0LL;
  v9 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 12LL) + 8;
  v10 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v9)(v9, v18);
  v11 = *(_QWORD *)this;
  v12 = *((_QWORD *)this + 1);
  v13 = *(_DWORD *)(v10 + 8);
  while ( v11 != v12 )
  {
    if ( *(_DWORD *)v11 == a2 && *(_DWORD *)(v11 + 4) == a3 && *(_DWORD *)(v11 + 8) == v13 )
    {
      v14 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 8LL) + 8;
      v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
      v16 = *(_QWORD *)(v11 + 16);
      if ( *(_BYTE *)(v15 + 1509) )
      {
        if ( *(_BYTE *)(v16 + 101) )
          return *(struct CDrawListCache **)(v11 + 16);
      }
      else if ( !*(_BYTE *)(v16 + 102) )
      {
        return *(struct CDrawListCache **)(v11 + 16);
      }
    }
    v11 += 24LL;
  }
  return (struct CDrawListCache *)v8;
}
