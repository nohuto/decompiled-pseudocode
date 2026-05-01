/*
 * XREFs of sub_18001F224 @ 0x18001F224
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x180007090 (HamQueryPackageUsageInfo.c)
 * Callees:
 *     sub_18001F2C0 @ 0x18001F2C0 (sub_18001F2C0.c)
 */

_QWORD *__fastcall sub_18001F224(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 *v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _QWORD *v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  _QWORD *result; // rax

  if ( (unsigned int)sub_18001F2C0(*a2, a2[1], *a3, a3[1]) )
  {
    if ( v4 >= v5 )
      v4 = v5;
  }
  else
  {
    if ( (__int64)v4 > (__int64)v5 )
      v5 = v4;
    v4 = v5;
  }
  *v6 = v4;
  if ( (unsigned int)sub_18001F2C0(a2[2], a2[3], *(_QWORD *)(v7 + 16), *(_QWORD *)(v7 + 24)) )
  {
    if ( v9 >= v10 )
      v9 = v10;
    v12[2] = v9;
  }
  else
  {
    if ( (__int64)v9 > (__int64)v10 )
      v10 = v9;
    v12[2] = v10;
  }
  v14 = a2[1];
  if ( v14 <= *(_QWORD *)(v13 + 8) )
    v14 = *(_QWORD *)(v13 + 8);
  v12[1] = v14;
  result = v12;
  if ( v8 <= v11 )
    v8 = v11;
  v12[3] = v8;
  return result;
}
