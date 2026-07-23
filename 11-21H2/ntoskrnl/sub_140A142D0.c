/*
 * XREFs of sub_140A142D0 @ 0x140A142D0
 * Callers:
 *     sub_1406498D0 @ 0x1406498D0 (sub_1406498D0.c)
 *     sub_140649A60 @ 0x140649A60 (sub_140649A60.c)
 *     sub_140A13FC0 @ 0x140A13FC0 (sub_140A13FC0.c)
 *     sub_140A14210 @ 0x140A14210 (sub_140A14210.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A179E0 @ 0x140A179E0 (sub_140A179E0.c)
 *     sub_140A180E8 @ 0x140A180E8 (sub_140A180E8.c)
 */

__int64 __fastcall sub_140A142D0(__int16 *a1, __int16 *a2, unsigned __int16 *a3)
{
  int v6; // ebx
  __int16 v7; // cx
  __int16 v9[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v9[0] = -1;
  v6 = sub_140A179E0(v9, &v10);
  if ( v6 >= 0 )
  {
    if ( !a3 || (v7 = sub_140A180E8(*a3), v7 == -1) )
      v7 = v10;
    v6 = 0;
    *a1 = v9[0];
    *a2 = v7;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetProcessHostGuestArchitectures");
  }
  return (unsigned int)v6;
}
