/*
 * XREFs of sub_1800441A0 @ 0x1800441A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 */

__int64 __fastcall sub_1800441A0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_180029550(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_18002A404(*a2 + 24);
    v5 = sub_18001246C(v8, a2);
    sub_180084A30(v6, v5);
    v7 = sub_180026650(*a2);
    return sub_180029700(a1, v7);
  }
  return result;
}
