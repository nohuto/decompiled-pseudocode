/*
 * XREFs of sub_1403A6A44 @ 0x1403A6A44
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     sub_140B2EB08 @ 0x140B2EB08 (sub_140B2EB08.c)
 * Callees:
 *     sub_1403A6AE0 @ 0x1403A6AE0 (sub_1403A6AE0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1403A6A44(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _BYTE *v8; // r9
  int v9; // eax
  __int64 v10; // rdx

  v8 = (_BYTE *)(a2 + *(unsigned int *)(sub_1403A6AE0(a1, a2, a2 + *a1) + 8));
  if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v8 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((*v8 >> 3) & a3) != 0 )
  {
    v9 = (unsigned __int8)v8[2];
    v10 = (unsigned int)(v9 + 1);
    if ( (v9 & 1) == 0 )
      v10 = (unsigned __int8)v8[2];
    if ( a6 )
      *a6 = &v8[2 * (unsigned int)(v10 + 2) + 4];
    if ( a5 )
      *a5 = a2 + *(unsigned int *)&v8[2 * v10 + 4];
  }
  return 0LL;
}
