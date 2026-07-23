/*
 * XREFs of sub_1407F854C @ 0x1407F854C
 * Callers:
 *     sub_1406FD9F0 @ 0x1406FD9F0 (sub_1406FD9F0.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_140287574 @ 0x140287574 (sub_140287574.c)
 *     sub_14028799C @ 0x14028799C (sub_14028799C.c)
 *     sub_1405AA5E8 @ 0x1405AA5E8 (sub_1405AA5E8.c)
 */

__int64 __fastcall sub_1407F854C(int *a1)
{
  int v1; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = *((_QWORD *)a1 + 8);
  if ( (v1 & 4) != 0 )
    return sub_140287574(v2, (v1 & 1) == 0);
  result = sub_14028799C(v2);
  if ( (_DWORD)result )
    return sub_1405AA5E8(v4);
  return result;
}
