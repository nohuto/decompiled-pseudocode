/*
 * XREFs of sub_1402A0EDC @ 0x1402A0EDC
 * Callers:
 *     sub_140692BA8 @ 0x140692BA8 (sub_140692BA8.c)
 *     sub_14070F57C @ 0x14070F57C (sub_14070F57C.c)
 *     sub_1409B4B90 @ 0x1409B4B90 (sub_1409B4B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A0EDC(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 v5; // rax

  if ( a2 < 0x20 )
  {
    *a4 = a1;
LABEL_3:
    *a3 = a2;
    return 0LL;
  }
  a2 -= 32;
  if ( a2 >= 0x100 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 512);
  if ( v5 )
  {
    *a4 = v5;
    goto LABEL_3;
  }
  return 3221226021LL;
}
