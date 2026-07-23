/*
 * XREFs of sub_140882FB0 @ 0x140882FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409E3390 @ 0x1409E3390 (sub_1409E3390.c)
 */

__int64 __fastcall sub_140882FB0(char a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  _DWORD *v14; // rcx
  __int64 v15; // rax
  int v16; // edx

  result = qword_140D05008;
  v11 = *(_DWORD *)(qword_140D05008 + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = 32LL * (unsigned int)v13;
    v14 = (_DWORD *)(result + qword_140D05008 + 4284);
    if ( v14 )
    {
      if ( (*v14 & 0x20000) != 0 )
      {
        v15 = *(unsigned __int8 *)(qword_140D05008 + 2 * v13 + 4233) - 1LL;
        v16 = a2 + 8 * v15;
        LOBYTE(v16) = a1;
        result = sub_1409E3390(
                   *(unsigned __int8 *)(qword_140D05008 + 2 * v13 + 4232),
                   v16,
                   a3,
                   a4,
                   a5,
                   a2 + 8 * v15,
                   a6);
      }
    }
  }
  return result;
}
