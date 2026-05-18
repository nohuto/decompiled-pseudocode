/*
 * XREFs of sub_180040EEC @ 0x180040EEC
 * Callers:
 *     sub_180011F58 @ 0x180011F58 (sub_180011F58.c)
 *     sub_1800627F0 @ 0x1800627F0 (sub_1800627F0.c)
 *     sub_18007C874 @ 0x18007C874 (sub_18007C874.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18003F1B0 @ 0x18003F1B0 (sub_18003F1B0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040EEC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_18002A37C(a1 + 16);
  result = **(_QWORD **)(a1 + 88);
  v8 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v5 = (__int64 *)sub_180041410(*(_QWORD *)(result + 64), v6);
    sub_18003F1B0(a2, v5);
    if ( v7 )
      sub_180010530(v7);
    sub_18001D3F8(&v8);
    result = v8;
  }
  return result;
}
