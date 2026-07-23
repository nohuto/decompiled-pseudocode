/*
 * XREFs of sub_14056DA54 @ 0x14056DA54
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_1403C24A0 @ 0x1403C24A0 (sub_1403C24A0.c)
 *     sub_14056DBB0 @ 0x14056DBB0 (sub_14056DBB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14056DA54(unsigned __int16 *a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0;
  P = 0LL;
  sub_1403C24A0((__int64)a1, &v8, &v9, &P);
  v3 = v9;
  v4 = *(_QWORD *)(v9 + 16) & ~(1LL << *((_BYTE *)a1 + 2));
  *(_QWORD *)(v9 + 16) = v4;
  if ( !v4 )
  {
    *(_QWORD *)(qword_140D31700[*(unsigned __int16 *)(v3 + 2)] + 8LL * *a1 + 24) = 0LL;
    *(_QWORD *)(qword_140C2B0E8 + 8LL * v8) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v5 = &qword_140D08390[4 * *a1];
  result = *((unsigned __int8 *)a1 + 2);
  v7 = *v5 & ~(1LL << result);
  *v5 = v7;
  if ( !v7 )
    return sub_14056DBB0(*a1, v5, v3, v2);
  return result;
}
