/*
 * XREFs of sub_180039F10 @ 0x180039F10
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_18003A3F4 @ 0x18003A3F4 (sub_18003A3F4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     __RTDynamicCast @ 0x1800FEE97 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180039F10(__int64 a1, _QWORD *a2)
{
  __int128 v5; // [rsp+B8h] [rbp-80h] BYREF
  int v6; // [rsp+C8h] [rbp-70h]
  __int64 v7; // [rsp+CCh] [rbp-6Ch]
  int v8; // [rsp+D4h] [rbp-64h]
  __int128 v9; // [rsp+D8h] [rbp-60h]
  __int128 v10; // [rsp+E8h] [rbp-50h]
  __int128 v11; // [rsp+F8h] [rbp-40h]
  __int64 v12; // [rsp+108h] [rbp-30h]
  __int64 v13; // [rsp+110h] [rbp-28h]
  __int64 v14; // [rsp+118h] [rbp-20h]
  __int64 v15; // [rsp+120h] [rbp-18h]
  int v16; // [rsp+128h] [rbp-10h]
  __int64 v17; // [rsp+138h] [rbp+0h] BYREF
  char v18; // [rsp+140h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 496)
    && !_RTDynamicCast(
          *a2,
          0LL,
          &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
          &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
          0) )
  {
    v5 = 0LL;
    v6 = 0;
    v7 = 0LL;
    v8 = 0;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    sub_18002C5FC(*a2 + 24LL, (__int64)&v17);
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v5);
    if ( v18 )
      sub_18002C8E4(v17);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
  }
  return sub_180010910((__int64)a2);
}
