/*
 * XREFs of ?GetNextItem@CAppLayoutItemEnum@@UEAAJW4APP_LAYOUT_ITEM_TYPE@@PEAUAPP_LAYOUT_ENUM_ITEM@@@Z @ 0x180795800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1807461F0 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

__int64 __fastcall CAppLayoutItemEnum::GetNextItem(__int64 a1, int a2, __int64 a3)
{
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // r13d
  __int64 v8; // rsi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rsi
  __int64 *v14; // rdi
  struct IApplicationView *v15; // rdx
  __int64 (__fastcall ***v16)(ApplicationViewHelpers *, GUID *, __int64); // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _QWORD v22[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v23; // [rsp+90h] [rbp+48h] BYREF
  int v24; // [rsp+98h] [rbp+50h]
  ApplicationViewHelpers *v25; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+60h] BYREF

  v24 = a2;
  *(_DWORD *)(a3 + 56) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = 0LL;
  SetRectEmpty((LPRECT)(a3 + 24));
  SetRectEmpty((LPRECT)(a3 + 40));
  v5 = -2147319765;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    while ( *(_DWORD *)(a1 + 32) <= v7 && v5 == -2147319765 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v23 = 0LL;
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL);
      v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v26);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
      if ( v9(v8, *(unsigned int *)(a1 + 32), &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v10) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
        if ( (v11 & v24) != 0 )
        {
          v5 = 0;
          if ( v11 != 1 )
            goto LABEL_11;
          v12 = v23;
          v25 = 0LL;
          v13 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v23 + 48LL);
          v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, v22);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
          v5 = v13(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v14);
          if ( v5 >= 0 )
          {
            v16 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v25;
            *(_QWORD *)(a3 + 16) = v25;
            *(_QWORD *)(a3 + 8) = ApplicationViewHelpers::GetApplicationFromView(v16, v15);
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
          if ( v5 >= 0 )
          {
LABEL_11:
            v17 = v23;
            *(_QWORD *)a3 = v23;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 56LL))(v17, 0LL, a3 + 24);
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 56LL))(v23, 1LL, a3 + 40);
            *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 32);
          }
        }
      }
      v18 = *(_DWORD *)(a1 + 32);
      v19 = v18 + 1;
      v20 = v18 - 1;
      if ( *(_DWORD *)(a1 + 24) != -1 )
        v20 = v19;
      *(_DWORD *)(a1 + 32) = v20;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    }
  }
  return (unsigned int)v5;
}
