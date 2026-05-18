/*
 * XREFs of sub_180014FF0 @ 0x180014FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180041B20 @ 0x180041B20 (sub_180041B20.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180014FF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    sub_18001265C(*(_QWORD *)(a1 + 32), &v5);
    v3 = v5;
    sub_18002A0C4(v5 + 16, v8);
    v4 = sub_18001246C(&v7, (_QWORD *)(a2 + 32));
    sub_180041B20(v3, v4);
    sub_180010F54((__int64)v8);
    if ( v6 )
      sub_180010530(v6);
  }
}
