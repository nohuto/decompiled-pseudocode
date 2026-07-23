/*
 * XREFs of sub_1403A8D68 @ 0x1403A8D68
 * Callers:
 *     sub_1403A8ACC @ 0x1403A8ACC (sub_1403A8ACC.c)
 * Callees:
 *     sub_1403A8C98 @ 0x1403A8C98 (sub_1403A8C98.c)
 *     sub_1403A985C @ 0x1403A985C (sub_1403A985C.c)
 *     sub_1403A99B0 @ 0x1403A99B0 (sub_1403A99B0.c)
 *     sub_1403AA4AC @ 0x1403AA4AC (sub_1403AA4AC.c)
 *     sub_1403AA550 @ 0x1403AA550 (sub_1403AA550.c)
 *     sub_1403AA5E8 @ 0x1403AA5E8 (sub_1403AA5E8.c)
 */

__int64 __fastcall sub_1403A8D68(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 v10; // si
  int v11; // eax
  _QWORD *v12; // r15
  int v13; // eax
  int v14; // edi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF

  v17 = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v18 = 0;
  v16 = 0LL;
  v10 = 0;
  if ( (int)sub_1403AA5E8(v7, a2, &v17) >= 0 )
    v10 = v17;
  v11 = sub_1403A99B0(a1, v10, &v18);
  v12 = a5;
  if ( v11 >= 0 || (v10 = 0, v14 = sub_1403A99B0(a1, 0LL, &v18), v14 >= 0) )
  {
    v17 = v10;
    v13 = sub_1403AA550(a1, v18, (unsigned int)&v17, (unsigned int)&v16, (__int64)v12);
    v8 = v16;
    v14 = v13;
    if ( v13 >= 0 )
    {
      v14 = sub_1403AA4AC(v16);
      if ( v14 >= 0 )
        v14 = sub_1403A985C(a1, v17, v8, a4);
    }
  }
  if ( a3 )
  {
    *a3 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    sub_1403A8C98(v8, v12);
  return (unsigned int)v14;
}
