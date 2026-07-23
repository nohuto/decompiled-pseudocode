/*
 * XREFs of sub_1407E0884 @ 0x1407E0884
 * Callers:
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     sub_1407DD3D0 @ 0x1407DD3D0 (sub_1407DD3D0.c)
 *     sub_1407E0408 @ 0x1407E0408 (sub_1407E0408.c)
 *     sub_1407E0768 @ 0x1407E0768 (sub_1407E0768.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407E0884(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
