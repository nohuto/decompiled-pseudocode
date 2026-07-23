/*
 * XREFs of sub_140357790 @ 0x140357790
 * Callers:
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140357790(int *a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-28h]

  v9 = *a1;
  BYTE1(v9) = a3;
  if ( a2 >= 0 )
  {
    BYTE1(v9) = a3 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *a1 = v9;
      result = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      return result;
    }
    a3 |= 1u;
  }
  v5 = 0LL;
  if ( (a3 & 0xFC) != 0 )
    v5 = (unsigned __int8)(a3 & 0xFC) << 16;
  v6 = MEMORY[0xFFFFF78000000008] - a2;
  *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
  HIBYTE(v9) |= 0x40u;
  v7 = (unsigned __int8)((unsigned __int64)(v5 + v6) >> 18);
  BYTE2(v9) = (unsigned __int64)(v5 + v6) >> 18;
  *a1 = v9;
  result = 1LL;
  *a4 = v7;
  return result;
}
