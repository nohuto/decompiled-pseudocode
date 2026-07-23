/*
 * XREFs of sub_140A54B30 @ 0x140A54B30
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x1403B8370 (KdGetDebugDevice.c)
 *     sub_1403B8380 @ 0x1403B8380 (sub_1403B8380.c)
 *     sub_140AF3174 @ 0x140AF3174 (sub_140AF3174.c)
 *     sub_140AF70C8 @ 0x140AF70C8 (sub_140AF70C8.c)
 */

__int64 __fastcall sub_140A54B30(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    qword_140C4BED0 = sub_140AF70C8(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    sub_140AF3174();
    qword_140C4BED8 = sub_1403B8380(a3, 1346847300);
    *KdGetDebugDevice() = qword_140C4BED0;
  }
  return 0LL;
}
