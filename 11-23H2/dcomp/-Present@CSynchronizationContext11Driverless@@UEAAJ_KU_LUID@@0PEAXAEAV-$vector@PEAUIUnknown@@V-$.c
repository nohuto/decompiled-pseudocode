/*
 * XREFs of ?Present@CSynchronizationContext11Driverless@@UEAAJ_KU_LUID@@0PEAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1801B2160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11Driverless::Present(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  GUID v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  __int64 *v15; // [rsp+50h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 24);
  v12 = a5;
  v13 = GUID_50c8fad0_1317_4931_bb75_1e8958fa485c;
  v14 = 8LL;
  v15 = &v12;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 1176LL))(v6, *(_QWORD *)(a1 + 48), a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 78;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, GUID *))(**(_QWORD **)(a1 + 56) + 56LL))(
         *(_QWORD *)(a1 + 56),
         *(_QWORD *)(a1 + 48),
         a2,
         1LL,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 85;
LABEL_5:
    DoStackCaptureDirect(v8, v10);
  }
  return v9;
}
