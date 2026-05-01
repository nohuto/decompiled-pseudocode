/*
 * XREFs of CreateResourceManagerProxy @ 0x1800029E0
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180002974 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x18000BB44 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  int v1; // eax
  int v2; // ebx

  v0 = operator new(0x10uLL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
  }
  qword_180032AE8 = (__int64)v0;
  if ( v0 )
  {
    v1 = CempRpcBindToServer(&unk_180021680) | 0x10000000;
    v2 = 0;
    if ( v1 < 0 )
      v2 = v1;
    if ( v2 < 0 )
    {
      if ( qword_180032AE8 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_180032AE8)(qword_180032AE8, 1LL);
        qword_180032AE8 = 0LL;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
