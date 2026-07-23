/*
 * XREFs of sub_140753C58 @ 0x140753C58
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_14059A668 @ 0x14059A668 (sub_14059A668.c)
 *     sub_14059A6AC @ 0x14059A6AC (sub_14059A6AC.c)
 *     sub_1406F5F80 @ 0x1406F5F80 (sub_1406F5F80.c)
 *     sub_1406F7778 @ 0x1406F7778 (sub_1406F7778.c)
 *     sub_14096EBB0 @ 0x14096EBB0 (sub_14096EBB0.c)
 *     sub_14096EBDC @ 0x14096EBDC (sub_14096EBDC.c)
 *     sub_14096EC0C @ 0x14096EC0C (sub_14096EC0C.c)
 */

__int64 __fastcall sub_140753C58(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  unsigned __int64 v11; // r14
  unsigned int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // r10
  const signed __int64 **v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  int v24; // ebx
  _QWORD *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // eax
  int v30; // eax
  BOOL v31; // eax
  int v32; // eax
  bool v33; // zf
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  int v37; // [rsp+30h] [rbp-30h]
  unsigned int v38; // [rsp+34h] [rbp-2Ch] BYREF
  const signed __int64 **v39; // [rsp+38h] [rbp-28h]
  __int128 v40; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v41; // [rsp+50h] [rbp-10h]
  __int64 v42; // [rsp+A0h] [rbp+40h] BYREF

  v42 = a3;
  LODWORD(v41) = 0;
  v11 = a3;
  v38 = 0;
  v40 = 0LL;
  *a6 = 0;
  if ( (((unsigned __int16)a2 | (unsigned __int16)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v14 = a5;
  v15 = 1;
  if ( a5 > 1 )
  {
    v26 = a4 + 2;
    while ( a4[2 * v15 - 2] <= *v26 )
    {
      ++v15;
      v26 += 2;
      if ( v15 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( a4[2 * a5 - 2] >= v11 )
    return 3221225485LL;
  v39 = (const signed __int64 **)sub_1406F7778(a1, a2, 0LL);
  v17 = v39;
  v37 = v16;
  if ( v14 )
  {
    v18 = a4;
    while ( (*v18 & 0xFLL) == *((_DWORD *)v17 + 6) )
    {
      v19 = v18[1];
      if ( (v19 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        break;
      if ( (a7 & 1) != 0 && (v19 & 1) != 0 )
        return 3221225506LL;
      if ( (v19 & 4) != 0 )
      {
        if ( !(unsigned int)sub_14096EBB0(a1) )
          return 3221225506LL;
        v28 = *((_QWORD *)KeGetCurrentThread() + 23);
        if ( (unsigned int)sub_14059A668(v27 + a2, *v39) == 2 && (v29 = sub_14096EBB0(v28), v16 = 0LL, v29) )
        {
          v17 = v39;
        }
        else
        {
          v17 = v39;
          v30 = sub_14096EC0C(a2 + *v18, v39);
          v16 = 0LL;
          if ( !v30 )
            return 3221225506LL;
        }
      }
      if ( (v19 & 0x10) != 0 )
      {
        if ( a10 == (_BYTE)v16
          && (*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) == v16 || (*(_DWORD *)(a1 + 2516) & 0x4000000) == 0) )
        {
          return 3221225506LL;
        }
        if ( !(unsigned int)sub_14096EBDC(a1) )
          return 3221225506LL;
        v31 = sub_14059A6AC(a2 + *v18, v17);
        v16 = 0LL;
        if ( !v31 )
        {
          v32 = sub_14096EC0C(a2 + *v18, v17);
          v16 = 0LL;
          if ( !v32 )
            return 3221225506LL;
        }
      }
      if ( (v19 & 8) != 0
        && (a10 == (_BYTE)v16
         || !(unsigned int)sub_14096EBDC(a1)
         || ((a2 + *v18) & 0xFFF) == 0
         || (((_BYTE)a2 + *(_BYTE *)v18) & 0xF) != 0) )
      {
        return 3221225506LL;
      }
      v18 += 2;
      if ( ++v37 >= v14 )
      {
        v11 = v42;
        goto LABEL_14;
      }
    }
    return 3221225485LL;
  }
LABEL_14:
  if ( *a6 == v14 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) == v16 )
    return 3221225541LL;
  v20 = sub_14030E7C0(a2, 0, (int *)&v38);
  v22 = v20;
  if ( !v20 )
    return v38;
  v23 = a2 + v11 - 1;
  if ( v23 <= (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v33 = (*(_DWORD *)(v20 + 48) & 0x200000) == 0, v42 = 0LL, v33)
     && **(_QWORD **)(v20 + 72) == sub_140287970(a8)
     && (v34 = *(unsigned int *)(v22 + 24), (v34 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12 == a2)
     && (sub_140319600(v22, v34 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32), 0, &v42),
         v35 = sub_140287F30(a1),
         v36 = sub_1403342D0(v42, *(_QWORD *)(v22 + 80), v35),
         v36 == a9)) )
  {
    v41 = a6;
    LODWORD(v40) = v14;
    *((_QWORD *)&v40 + 1) = a4;
    v24 = sub_1406F5F80(v17, (unsigned __int64)&v40, v21, 1u, a2, (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    if ( v24 >= 0 )
      v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  sub_14032E700((char *)v22);
  return (unsigned int)v24;
}
