/*
 * XREFs of ?CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z @ 0x18006A448
 * Callers:
 *     ?CreateTargetForHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x18006A430 (-CreateTargetForHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z.c)
 *     ?CreateWindowTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z @ 0x1800FF960 (-CreateWindowTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CHwndTarget@DirectComposition@@UEAAKXZ @ 0x18006A380 (-Release@CHwndTarget@DirectComposition@@UEAAKXZ.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18006A7EC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateTargetHelper(
        DirectComposition::CDevice *this,
        HWND a2,
        unsigned int a3,
        struct IDCompositionTarget **a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  void *v11; // rdx
  unsigned int v12; // ecx
  NTSTATUS LastNtStatus; // eax
  HANDLE hObject; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return (unsigned int)-2147024809;
  *a4 = 0LL;
  v8 = DefaultHeap::Alloc(0x28uLL);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-2147024882;
  v8[2] = 0LL;
  *((_DWORD *)v8 + 6) = 0;
  v8[4] = 0LL;
  hObject = 0LL;
  *v8 = &DirectComposition::CHwndTarget::`vftable';
  *((_DWORD *)v8 + 2) = 1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  if ( (unsigned int)CreateDCompositionHwndTarget(a2, a3, &hObject) )
  {
    v9[2] = a2;
    *((_DWORD *)v9 + 6) = a3;
  }
  else
  {
    LastNtStatus = RtlGetLastNtStatus();
    v10 = DirectComposition::CDevice::HRESULTFromNTSTATUS(LastNtStatus);
    if ( v10 < 0 )
      goto LABEL_11;
  }
  v10 = DirectComposition::CDevice::OpenSharedProxy(this, hObject, 0xC4u, 0, &v16, &v17);
  if ( v10 >= 0 )
  {
    v11 = v16;
    v12 = v17;
    *((_DWORD *)v16 + 2) = 1;
    *((_DWORD *)v11 + 3) = v12;
    *(_QWORD *)v11 = &DirectComposition::CVisualTargetProxy::`vftable';
    v9[4] = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
    *a4 = (struct IDCompositionTarget *)v9;
    goto LABEL_7;
  }
LABEL_11:
  DirectComposition::CHwndTarget::Release((DirectComposition::CHwndTarget *)v9);
LABEL_7:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return (unsigned int)v10;
}
