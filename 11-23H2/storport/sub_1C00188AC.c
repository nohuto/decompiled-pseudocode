/*
 * XREFs of sub_1C00188AC @ 0x1C00188AC
 * Callers:
 *     sub_1C0016980 @ 0x1C0016980 (sub_1C0016980.c)
 *     sub_1C003A87C @ 0x1C003A87C (sub_1C003A87C.c)
 * Callees:
 *     sub_1C00081BC @ 0x1C00081BC (sub_1C00081BC.c)
 *     sub_1C0014FC4 @ 0x1C0014FC4 (sub_1C0014FC4.c)
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C00183B8 @ 0x1C00183B8 (sub_1C00183B8.c)
 *     sub_1C00189A8 @ 0x1C00189A8 (sub_1C00189A8.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00188AC(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int8 i; // bl
  int v8; // edi
  _BYTE v9[96]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v10; // [rsp+90h] [rbp+8h]

  memset_0(v9, 0, sizeof(v9));
  result = sub_1C0016EE0(a1, a2, (__int64)v9);
  if ( (int)result >= 0 )
  {
    if ( (int)sub_1C0016A98(a1, a2, (int)v9, a3) < 0 )
    {
      v8 = sub_1C0014FC4((__int64)a1, a2);
      memset_0(a3, 0, 0xFFuLL);
      if ( v8 >= 0 )
        *a3 = 0x101010101010101LL;
    }
    sub_1C00183B8(a1, (__int64)v9);
    v10 = a2;
    for ( i = 0; i != 0xFF; ++i )
    {
      BYTE2(v10) = i;
      if ( sub_1C00081BC(*a1, v10) || sub_1C00189A8(*a1, v10) )
        *((_BYTE *)a3 + i) = 1;
    }
    return 0LL;
  }
  return result;
}
