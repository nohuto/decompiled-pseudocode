/*
 * XREFs of sub_1800219CC @ 0x1800219CC
 * Callers:
 *     sub_180021A6C @ 0x180021A6C (sub_180021A6C.c)
 *     sub_180021B10 @ 0x180021B10 (sub_180021B10.c)
 *     sub_180058E60 @ 0x180058E60 (sub_180058E60.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800219CC(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::stringbuf::`vftable';
  if ( !v1 )
  {
    v3 = **(_QWORD **)(a1 + 64);
    if ( v3 )
      v4 = v3 + **(int **)(a1 + 88);
    else
      v4 = **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80);
    sub_180010884(**(char ***)(a1 + 24), v4 - **(_QWORD **)(a1 + 24));
  }
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
