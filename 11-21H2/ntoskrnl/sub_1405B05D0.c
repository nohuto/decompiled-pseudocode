/*
 * XREFs of sub_1405B05D0 @ 0x1405B05D0
 * Callers:
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     StartRoutine @ 0x14026C240 (StartRoutine.c)
 * Callees:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 */

unsigned __int64 __fastcall sub_1405B05D0(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rsi
  BOOL v10; // ecx
  int v11; // r8d
  BOOL v12; // ebp

  v4 = a3;
  v7 = 1LL;
  result = 0xAAAAAAAAAAAAAAABuLL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v10 = 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 2) == 0 || (result = *(unsigned int *)(a1 + 16), (result & 0x3E0) == 0) )
      v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a2 != 3 )
    v7 = qword_14001C780[a2];
  v12 = v11 != v4;
  if ( v10 )
  {
    if ( v11 != (_DWORD)v4
      && dword_140C507D8[4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6) + v4] == (_DWORD)v4 )
    {
      sub_14026873C(v9, v7, (unsigned int)v4);
      v12 = 0;
    }
    if ( a2 == 3 )
      result = sub_1402359C4(v9, 0, v4);
    else
      result = sub_14026A28C(a1, a2, v4);
  }
  if ( v12 )
    return sub_14026873C(v9, v7, (unsigned int)v4);
  return result;
}
