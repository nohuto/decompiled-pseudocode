/*
 * XREFs of sub_18009B5A0 @ 0x18009B5A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004444C @ 0x18004444C (sub_18004444C.c)
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_180044908 @ 0x180044908 (sub_180044908.c)
 *     sub_18004BA08 @ 0x18004BA08 (sub_18004BA08.c)
 */

__int64 __fastcall sub_18009B5A0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  char v4; // r8
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18004BA08(a2, &v6, a3);
  v3 = sub_18004444C(v6);
  sub_180044908(v6, 9, (unsigned int)(v3 - 1) <= 1);
  sub_180044908(v6, 8, (unsigned int)(v3 - 2) <= 1);
  v4 = v3 == 1 || v3 == 2;
  sub_1800446D8(v6, (__int64)&unk_1801D7D08, v4);
  result = sub_1800446D8(v6, (__int64)&unk_1801D7D28, (unsigned int)(v3 - 2) <= 1);
  if ( v7 )
    return sub_180010530(v7);
  return result;
}
