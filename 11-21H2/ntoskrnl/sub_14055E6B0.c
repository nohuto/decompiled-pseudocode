/*
 * XREFs of sub_14055E6B0 @ 0x14055E6B0
 * Callers:
 *     sub_14055EF20 @ 0x14055EF20 (sub_14055EF20.c)
 * Callees:
 *     sub_140A31CB4 @ 0x140A31CB4 (sub_140A31CB4.c)
 */

__int64 __fastcall sub_14055E6B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v6[1] = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
  v7 = *(_QWORD *)(v4 + 112);
  v6[0] = *(_DWORD *)(v4 + 104);
  result = sub_140A31CB4(v4, a2, (unsigned int)v6, (int)a3 + 5, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a3 + 4) = v8;
    *(_DWORD *)a3 = 32772;
  }
  return result;
}
