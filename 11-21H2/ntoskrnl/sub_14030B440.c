/*
 * XREFs of sub_14030B440 @ 0x14030B440
 * Callers:
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 * Callees:
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_1406DD778 @ 0x1406DD778 (sub_1406DD778.c)
 *     sub_14097CA4C @ 0x14097CA4C (sub_14097CA4C.c)
 */

__int64 __fastcall sub_14030B440(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  int v8; // r9d
  int v9; // eax
  unsigned __int64 v10; // rax

  v2 = a1;
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = *(unsigned int *)(v2 + 52);
  LODWORD(v5) = v5 & 0x7FFFFFFF;
  v6 = v5 | v3;
  result = 0x7FFFFFFFDLL;
  if ( v6 >= 0x7FFFFFFFDLL )
  {
    if ( v6 == 0x7FFFFFFFDLL )
      *(_QWORD *)(a2 + 16) = 64LL;
  }
  else
  {
    v8 = *(_DWORD *)(v2 + 48);
    *(_QWORD *)(a2 + 16) = 136LL;
    if ( (v8 & 0x200000) == 0 && !(unsigned int)sub_140319990(v2) )
      *(_QWORD *)(a2 + 8) = 8
                          * ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32))
                           - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)))
                          + 8;
    v9 = v8 & 0x70;
    if ( v9 == 48 )
    {
      if ( (v8 & 0x6200000) == 0x4200000 )
        v10 = 0LL;
      else
        v10 = sub_1402EE0E0(v2, 256) + 8;
      result = sub_14097CA4C(v2, v10);
    }
    else if ( v9 == 16 || v9 == 64 )
    {
      result = sub_1406DD778(
                 (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) << 12,
                 ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) << 12) | 0xFFF,
                 0LL);
    }
    else
    {
      result = 0LL;
    }
    *(_QWORD *)a2 = result;
  }
  return result;
}
