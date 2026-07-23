/*
 * XREFs of MiSetPfnOldestWsleLeafCount @ 0x140292794
 * Callers:
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14081E1D0 (MiInitializeShadowPageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetPfnOldestWsleLeafCount(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = (*a1 ^ (16 * a2)) & 0x3FF0;
  *(_QWORD *)a1 ^= result;
  return result;
}
