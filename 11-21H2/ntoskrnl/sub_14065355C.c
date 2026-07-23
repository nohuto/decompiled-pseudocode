/*
 * XREFs of sub_14065355C @ 0x14065355C
 * Callers:
 *     sub_140652FB8 @ 0x140652FB8 (sub_140652FB8.c)
 *     sub_140653104 @ 0x140653104 (sub_140653104.c)
 *     sub_140653374 @ 0x140653374 (sub_140653374.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140652C28 @ 0x140652C28 (sub_140652C28.c)
 *     sub_140652EC8 @ 0x140652EC8 (sub_140652EC8.c)
 *     sub_140653654 @ 0x140653654 (sub_140653654.c)
 */

__int64 __fastcall sub_14065355C(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  int v5; // r15d
  int v7; // ebp
  LARGE_INTEGER v8; // rcx
  LONGLONG v9; // rbx
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER v14; // rcx
  ULONG v15; // edx
  LARGE_INTEGER v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = dword_140C10CE8;
  v4 = (unsigned int)dword_140C10CE4;
  v5 = 0;
  v16.QuadPart = 0LL;
  v7 = a3;
  v8 = KeQueryPerformanceCounter(&v16);
  v9 = v8.QuadPart + v4 * (v16.QuadPart / 1000000);
  while ( 1 )
  {
    ++v5;
    v10 = sub_140652C28(v8.QuadPart, 1u);
    if ( v7 == 1 )
    {
      if ( (v10 & 1) != 0 )
        return 0LL;
    }
    else
    {
      if ( v7 != 2 )
        return 3221225485LL;
      if ( (v10 & 2) == 0 )
        return 0LL;
    }
    if ( (unsigned __int8)sub_140653654(v11, a2) || (unsigned __int8)sub_140653654(v13, v9) )
      break;
    if ( v3 < 0x32 && v5 == 40 )
      v3 += 100;
    v15 = dword_140C10CEC;
    if ( v3 < dword_140C10CEC )
      v15 = v3;
    sub_140652EC8(v14, v15);
  }
  return 258LL;
}
