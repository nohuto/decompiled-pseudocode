/*
 * XREFs of sub_14056D1E8 @ 0x14056D1E8
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14056D1E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _DWORD *a6)
{
  _DWORD *v6; // rbp
  __int64 v11; // rax
  unsigned int v12; // r10d
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v17; // ebx
  bool v18; // zf
  int v19; // [rsp+60h] [rbp+0h] BYREF

  v6 = (_DWORD *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL);
  memset((void *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  v11 = qword_140D068D8;
  *a6 = 0;
  if ( (v11 & 0x10000000000LL) == 0 )
    return 3221225659LL;
  if ( (a5 & 0x40) != 0 )
  {
    if ( !_bittest64(&qword_140D068D8, 0x2Bu) )
      return 3221225496LL;
    v12 = 13;
    if ( (a5 & 0xF) != 3 )
      return 3221225541LL;
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  }
  else
  {
    v12 = 1;
    v13 = a5 & 1 | 2;
    if ( (a5 & 2) == 0 )
      v13 = a5 & 1;
    v14 = v13 | 4;
    if ( (a5 & 4) == 0 )
      v14 = v13;
    if ( (a5 & 8) != 0 )
      v15 = v14 | 0x100;
    else
      v15 = v14 | 0x200;
    *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v15;
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a2;
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 64;
  }
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = a4;
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a1;
  sub_1404205F0(v12);
  if ( (a5 & 0x50) == 0 )
  {
    v17 = 4096;
    *v6 = 4096;
    do
    {
      sub_1404205F0(6u);
      a3 += 256LL;
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a3;
      v18 = v17 == 256;
      v17 -= 256;
      *v6 = v17;
    }
    while ( !v18 );
  }
  return 0LL;
}
