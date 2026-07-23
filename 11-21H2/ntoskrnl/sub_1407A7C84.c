/*
 * XREFs of sub_1407A7C84 @ 0x1407A7C84
 * Callers:
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_140666C9C @ 0x140666C9C (sub_140666C9C.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A7B98 @ 0x1407A7B98 (sub_1407A7B98.c)
 *     sub_1407AC020 @ 0x1407AC020 (sub_1407AC020.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407A7C84(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
