/*
 * XREFs of sub_14075CCC8 @ 0x14075CCC8
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_14075CDF8 @ 0x14075CDF8 (sub_14075CDF8.c)
 *     sub_140964230 @ 0x140964230 (sub_140964230.c)
 */

__int64 __fastcall sub_14075CCC8(__int64 a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h]
  _QWORD v6[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v7 = 0;
  v8 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  if ( !a1 || sub_140359DE0(*(_QWORD *)(a1 + 48)) || dword_140C54EF4 != 2 || (dword_140C54EF0 & 1) != 0 )
    goto LABEL_11;
  v2 = sub_14075CDF8(&v4, a1 + 88);
  if ( v2 >= 0 )
  {
    v2 = sub_14075CDF8(v6, a1 + 72);
    if ( v2 >= 0 )
    {
      v2 = sub_14075C7BC((__int64)&v4, (__int64)v6, *(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), &v8, &v7);
      if ( v2 >= 0 )
      {
        v2 = sub_140964230(a1, &v4, v8, v7);
        if ( v2 >= 0 )
          sub_14057D77C((unsigned __int16 *)&v4, v8, v7);
      }
    }
  }
  if ( !v2 )
  {
    dword_140C54EF8 |= 0x800u;
    qword_140C54F48 = *(_QWORD *)(a1 + 48);
LABEL_16:
    qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 458952LL;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v7, v5);
    goto LABEL_18;
  }
  if ( v2 >= 0 )
    goto LABEL_16;
  if ( v2 == -1073740948 )
  {
    qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 458943LL;
    if ( (dword_140D04880 & 1) != 0 )
      sub_14057D738(4LL, "KSE: driver blocked from loading [%ws].\n", v5);
LABEL_18:
    sub_1403C09C8(4);
    goto LABEL_12;
  }
LABEL_11:
  v2 = 0;
LABEL_12:
  sub_14075CDC4(&v4);
  sub_14075CDC4(v6);
  return (unsigned int)v2;
}
