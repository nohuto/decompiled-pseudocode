/*
 * XREFs of sub_1800365A8 @ 0x1800365A8
 * Callers:
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     __RTDynamicCast @ 0x1800E3960 (__RTDynamicCast.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_1800365A8(__int64 a1, _QWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+B8h] [rbp-80h] BYREF
  int v7; // [rsp+C8h] [rbp-70h]
  int v8; // [rsp+CCh] [rbp-6Ch]
  int v9; // [rsp+D0h] [rbp-68h]
  int v10; // [rsp+D4h] [rbp-64h]
  __int128 v11; // [rsp+D8h] [rbp-60h]
  __int128 v12; // [rsp+E8h] [rbp-50h]
  __int128 v13; // [rsp+F8h] [rbp-40h]
  __int64 v14; // [rsp+108h] [rbp-30h]
  __int64 v15; // [rsp+110h] [rbp-28h]
  int v16; // [rsp+118h] [rbp-20h]
  int v17; // [rsp+11Ch] [rbp-1Ch]
  __int64 v18; // [rsp+120h] [rbp-18h]
  int v19; // [rsp+128h] [rbp-10h]
  _BYTE v20[16]; // [rsp+138h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+18h] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(a1 + 496) )
  {
    result = (_UNKNOWN **)_RTDynamicCast(
                            *a2,
                            0LL,
                            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
                            0);
    if ( !result )
    {
      v6 = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0;
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      sub_18002A244(*a2 + 24LL, (__int64)v20);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 88LL))(*a2, &v6);
      sub_180029FA0((__int64)v20);
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 96LL))(*(_QWORD *)(a1 + 496));
    }
    v5 = a2[1];
  }
  else
  {
    v5 = a2[1];
  }
  if ( v5 )
    return (_UNKNOWN **)sub_180010530(v5);
  return result;
}
