/*
 * XREFs of NdisGetCurrentSystemTime @ 0x1C00C3D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisGetCurrentSystemTime(_QWORD *a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000014];
  *a1 = MEMORY[0xFFFFF78000000014];
  return result;
}
