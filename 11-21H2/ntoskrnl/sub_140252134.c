/*
 * XREFs of sub_140252134 @ 0x140252134
 * Callers:
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_140252050 @ 0x140252050 (sub_140252050.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_1403915EC @ 0x1403915EC (sub_1403915EC.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_140397D10 @ 0x140397D10 (sub_140397D10.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B07C8 @ 0x1403B07C8 (sub_1403B07C8.c)
 *     sub_1403B6180 @ 0x1403B6180 (sub_1403B6180.c)
 *     sub_1403BD66C @ 0x1403BD66C (sub_1403BD66C.c)
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 *     sub_14050850C @ 0x14050850C (sub_14050850C.c)
 *     sub_1405091D0 @ 0x1405091D0 (sub_1405091D0.c)
 *     sub_14050A598 @ 0x14050A598 (sub_14050A598.c)
 *     sub_14050A60C @ 0x14050A60C (sub_14050A60C.c)
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall sub_140252134(int a1)
{
  ULONG_PTR *v1; // rax
  ULONG_PTR *v2; // rdx

  v1 = (ULONG_PTR *)qword_140C4DE70;
  while ( v1 != &qword_140C4DE70 )
  {
    v2 = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)v2 + 60) == a1 )
      return v2;
  }
  return 0LL;
}
