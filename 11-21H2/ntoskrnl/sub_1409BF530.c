/*
 * XREFs of sub_1409BF530 @ 0x1409BF530
 * Callers:
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 * Callees:
 *     sub_1409BF598 @ 0x1409BF598 (sub_1409BF598.c)
 *     sub_1409BF5D0 @ 0x1409BF5D0 (sub_1409BF5D0.c)
 *     sub_1409BF6D0 @ 0x1409BF6D0 (sub_1409BF6D0.c)
 */

__int64 __fastcall sub_1409BF530(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r9
  __int64 *v3; // r11
  __int64 v4; // rcx
  _QWORD *v5; // r11
  __int64 v6; // r8
  _DWORD *v7; // r10
  _QWORD *v8; // r11

  result = sub_1409BF5D0(a1);
  if ( (_BYTE)result )
  {
    v4 = *v3;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)v4 = *v2;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)(v4 + 4) & 0xFFFFFF70 | v2[1] & 0xF;
    sub_1409BF6D0(v4, v2);
    result = sub_1409BF598(*v5);
    if ( (_BYTE)result )
    {
      ++*v7;
      result = v6 + 12;
      *v8 = v6 + 12;
    }
  }
  return result;
}
