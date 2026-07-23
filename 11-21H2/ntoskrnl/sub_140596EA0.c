/*
 * XREFs of sub_140596EA0 @ 0x140596EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140332670 @ 0x140332670 (sub_140332670.c)
 *     sub_14045BBAE @ 0x14045BBAE (sub_14045BBAE.c)
 *     sub_14045BD30 @ 0x14045BD30 (sub_14045BD30.c)
 */

__int64 __fastcall sub_140596EA0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  BOOL v10; // esi
  unsigned int *v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v13 = sub_140317A10(a2);
  v7 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !(unsigned int)sub_140227020(v3, a2, v7, a3 == 0, &v13) )
    return 0LL;
  v9 = *(_QWORD **)(a1 + 168);
  v10 = sub_140274D80(v8, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v13 & 0x20) != 0 )
  {
    v11 = (unsigned int *)v9[31];
    if ( v11 && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)sub_14045BBAE(v11, (__int64)(a2 << 25) >> 16) )
        return sub_14045BD30(a1);
    }
    else
    {
      sub_140332670(v3, a2, (__int64)(a2 << 25) >> 16, v7, (__int64)v9, 3);
    }
  }
  if ( v10 && (++v9[5], v9[5] >= v9[6]) )
    return 4LL;
  else
    return 0LL;
}
