/*
 * XREFs of ?CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z @ 0x18002B708 (-SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSharedResource(
        DirectComposition::CDevice *this,
        struct _GUID *a2,
        void **a3)
{
  int v6; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, HANDLE *); // rbx
  void *v10; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v11; // [rsp+38h] [rbp-18h] BYREF
  void (__fastcall *v12)(void *, _QWORD, HANDLE *); // [rsp+48h] [rbp-8h]
  unsigned int v13; // [rsp+90h] [rbp+40h] BYREF
  HANDLE hObject; // [rsp+98h] [rbp+48h] BYREF

  if ( !a3 )
    return (unsigned int)-2147024809;
  *a3 = 0LL;
  v6 = DirectComposition::SharedProxyDataFromIID(
         (DirectComposition *)a2,
         &v11,
         (struct DirectComposition::SharedProxyData *)a3);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( !v12 )
    return (unsigned int)-2147024809;
  v10 = 0LL;
  v13 = 0;
  if ( LOBYTE(v11.Data2) )
  {
    v8 = *((_QWORD *)this + 18);
    hObject = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, HANDLE *))(*(_QWORD *)v8 + 152LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v6 = v9(v8, 196LL, &hObject);
    if ( v6 >= 0 )
      v6 = DirectComposition::CDevice::OpenSharedProxy(
             (DirectComposition::CDevice *)((char *)this - 16),
             hObject,
             196,
             0,
             &v10,
             &v13);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  else
  {
    v6 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 16),
           v11.Data1,
           1u,
           &v10,
           &v13);
  }
  if ( v6 >= 0 )
  {
    v12(v10, v13, &hObject);
    v6 = (**(__int64 (__fastcall ***)(HANDLE, struct _GUID *, void **))hObject)(hObject, a2, a3);
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)hObject + 16LL))(hObject);
  }
  return (unsigned int)v6;
}
