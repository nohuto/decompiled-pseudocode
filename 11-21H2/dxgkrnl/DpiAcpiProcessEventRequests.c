/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C0394D68
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C0394794 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C039BE90 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DpiAcpiProcessEventRequests(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r8
  bool v9; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  if ( (a2 & 1) != 0 || *(_DWORD *)(a3 + 24) == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 6u, (__int64)a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3896), 1, a3);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 3896), DXGK_AVIR_HOTKEY, 0LL, 0, a4, v9);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), 1u, v8);
  }
  return result;
}
