/*
 * XREFs of RtlInitializeBitMap @ 0x180083AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RtlInitializeBitMap(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2;
}
