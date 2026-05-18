/*
 * XREFs of sub_180081120 @ 0x180081120
 * Callers:
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180081120(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _QWORD *); // r8
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = sub_18008141C(a1);
  sub_18003655C(v2, &v13);
  v3 = 0;
  v4 = v13;
  if ( (v14 - v13) >> 4 )
  {
    v5 = 0LL;
    do
    {
      sub_18001246C(&v9, (_QWORD *)(v4 + 16 * v5));
      sub_18002A0C4(v9 + 24, (__int64)v12);
      v6 = sub_18001246C(&v11, &v9);
      v7(a1, v6);
      sub_180010F54((__int64)v12);
      if ( v10 )
        sub_180010530(v10);
      ++v3;
      v4 = v13;
      v5 = v3;
    }
    while ( v3 < (unsigned __int64)((v14 - v13) >> 4) );
  }
  return sub_180013300((__int64)&v13);
}
