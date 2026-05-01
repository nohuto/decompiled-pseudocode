/*
 * XREFs of ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000A630
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000A6A4 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x18000A764 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000BB44 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxy(struct IResourceManager **a1)
{
  ResourceManagerClientProxy *v2; // rax
  ResourceManagerClientProxy *v3; // rax
  struct IResourceManager *v4; // rdi
  int v5; // ebx

  if ( a1 )
  {
    v2 = (ResourceManagerClientProxy *)operator new(0x290uLL);
    if ( v2
      && (v3 = ResourceManagerClientProxy::ResourceManagerClientProxy(v2), (v4 = (struct IResourceManager *)v3) != 0LL) )
    {
      v5 = ResourceManagerClientProxy::Init(v3);
      if ( v5 < 0 )
        ((void (__fastcall *)(struct IResourceManager *, __int64))v4->lpVtbl[1].RegisterGroup)(v4, 1LL);
      else
        *a1 = v4;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}
