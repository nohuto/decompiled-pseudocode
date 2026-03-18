/*
 * XREFs of MiSetPfnOldestWsleLeafCount @ 0x140292504
 * Callers:
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14081DF00 (MiInitializeShadowPageTable.c)
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
