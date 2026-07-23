/*
 * XREFs of sub_140A51C68 @ 0x140A51C68
 * Callers:
 *     sub_140396640 @ 0x140396640 (sub_140396640.c)
 *     sub_140994248 @ 0x140994248 (sub_140994248.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A51C68(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MEMORY[0xFFFFF78000000014];
  v3 = -a1;
  if ( a1 >= 0 )
    v3 = a1 - MEMORY[0xFFFFF78000000008];
  *a2 = MEMORY[0xFFFFF78000000014] + v3;
  return result;
}
