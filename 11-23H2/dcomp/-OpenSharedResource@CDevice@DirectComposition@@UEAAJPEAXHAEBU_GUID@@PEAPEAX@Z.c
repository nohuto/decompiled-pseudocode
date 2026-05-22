/*
 * XREFs of ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z @ 0x18006A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z @ 0x18002B708 (-SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::OpenSharedResource(
        DirectComposition::CDevice *this,
        void *a2,
        struct DirectComposition::SharedProxyData *a3,
        struct _GUID *a4,
        void **a5)
{
  void **v5; // rsi
  int v7; // edi
  int v8; // ebx
  void *v9; // r10
  __int64 v10; // r11
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  void *v13; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v14; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall *v15)(void *, _QWORD, __int64 *); // [rsp+50h] [rbp-10h]

  v5 = a5;
  v7 = (int)a3;
  if ( !a5 )
    return (unsigned int)-2147024809;
  *a5 = 0LL;
  if ( !a2 )
    return (unsigned int)-2147024890;
  v8 = DirectComposition::SharedProxyDataFromIID((DirectComposition *)a4, &v14, a3);
  if ( v8 >= 0 )
  {
    if ( v14.Data1 == 196 && !LOBYTE(v14.Data2) )
      v7 = 1;
    v8 = DirectComposition::CDevice::OpenSharedProxy(
           (DirectComposition::CDevice *)(v10 - 16),
           v9,
           v14.Data1,
           v7 != 0,
           &v13,
           (unsigned int *)&a5);
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      if ( v7 )
      {
        if ( !v15 )
          return (unsigned int)-2147467262;
        v15(v13, (unsigned int)a5, &v12);
      }
      else
      {
        if ( !*(_QWORD *)v14.Data4 )
          return (unsigned int)-2147467262;
        (*(void (__fastcall **)(void *, _QWORD, __int64 *))v14.Data4)(v13, (unsigned int)a5, &v12);
      }
      if ( v12 )
      {
        v8 = (**(__int64 (__fastcall ***)(__int64, struct _GUID *, void **))v12)(v12, a4, v5);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        return (unsigned int)v8;
      }
      return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)v8;
}
