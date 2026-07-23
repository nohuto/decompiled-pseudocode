/*
 * XREFs of sub_140529654 @ 0x140529654
 * Callers:
 *     sub_1403BB820 @ 0x1403BB820 (sub_1403BB820.c)
 *     sub_140A61BE0 @ 0x140A61BE0 (sub_140A61BE0.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_14052995C @ 0x14052995C (sub_14052995C.c)
 */

__int64 __fastcall sub_140529654(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // r14d
  void *v10; // rax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v14; // rcx
  int v15; // edi
  int v16; // [rsp+20h] [rbp-28h]

  v9 = a1;
  if ( a6 )
    v10 = (void *)sub_1403BF104(96, 1u);
  else
    v10 = (void *)sub_1403B1F04(a1, 96LL);
  v12 = (__int64)v10;
  if ( !v10 )
    return 3221225626LL;
  if ( a3 > 6 || a2 < 2 || a3 < a2 )
    return 3221225485LL;
  v15 = sub_14052995C(v9, a2, a3, v11, v16, a6, v10);
  if ( v15 < 0 )
  {
    *a7 = 0LL;
    if ( !a6 )
      sub_1403B1B5C(v14, v12);
  }
  else
  {
    *a7 = v12;
  }
  return (unsigned int)v15;
}
