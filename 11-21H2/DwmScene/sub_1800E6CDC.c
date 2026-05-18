/*
 * XREFs of sub_1800E6CDC @ 0x1800E6CDC
 * Callers:
 *     sub_1800E6E10 @ 0x1800E6E10 (sub_1800E6E10.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_180028D88 @ 0x180028D88 (sub_180028D88.c)
 *     sub_1800E7560 @ 0x1800E7560 (sub_1800E7560.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800E6CDC(_QWORD *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  v10 = 0LL;
  v2 = a1[10];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v8 = a1[9];
        *(_QWORD *)&v10 = v8;
        *((_QWORD *)&v10 + 1) = a1[10];
        if ( !v8 || !sub_180028D88(v8) )
          break;
        if ( sub_180010D08(a1 + 18) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 880LL))(*v9);
          sub_1800E7560(a1, 0LL);
        }
        goto LABEL_6;
      }
    }
  }
  sub_18001F2B4(&stru_1801EA548, 3, "WARNING: CommandListD3D11 destroyed after RenderDeviceD3D11 has been shutdown.\n");
LABEL_6:
  sub_180010910((__int64)&v10);
  v5 = a1[19];
  if ( v5 )
  {
    a1[19] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[18];
  if ( v6 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return sub_18003D188(a1);
}
