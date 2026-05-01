/*
 * XREFs of ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x1800465B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByHostId(
        CImmersiveAppArray *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  char v6; // r14
  const struct _GUID *v7; // rdx
  int v8; // ecx
  int v9; // edi
  char *v10; // r12
  unsigned int v11; // esi
  int (__fastcall *v13)(char *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  void *v15; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+50h] BYREF
  int v17; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  v9 = CEnumerableObjectCollection::CreateInstance(v8, v7, &v15);
  if ( v9 >= 0 )
  {
    v10 = (char *)this - 8;
    v9 = (*(__int64 (__fastcall **)(char *, unsigned int *))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8, &v16);
    v11 = 0;
    if ( v9 >= 0 )
    {
      while ( v11 < v16 )
      {
        v14 = 0LL;
        v13 = *(int (__fastcall **)(char *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        if ( v13(v10, v11, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v14) >= 0
          && (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v14 + 32LL))(v14, a2, &v17) >= 0
          && v17 )
        {
          v9 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 40LL))(v15, v14);
          v6 = 1;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
        ++v11;
        if ( v9 < 0 )
          goto LABEL_6;
      }
      if ( v6 )
        v9 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v15)(
               v15,
               &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
               a3);
      else
        v9 = -2147319765;
    }
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v9;
}
