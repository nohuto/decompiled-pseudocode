/*
 * XREFs of sub_1406FF0A4 @ 0x1406FF0A4
 * Callers:
 *     sub_1406FE8F4 @ 0x1406FE8F4 (sub_1406FE8F4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406FF378 @ 0x1406FF378 (sub_1406FF378.c)
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407010C8 @ 0x1407010C8 (sub_1407010C8.c)
 */

__int64 __fastcall sub_1406FF0A4(unsigned int *a1)
{
  __int64 *v1; // r12
  char v2; // r15
  void *v3; // r13
  int v4; // edi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r14
  int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // ebp
  int v14; // ebp
  unsigned __int8 v15; // r8
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // eax
  int v20; // ecx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = (void *)*((_QWORD *)a1 + 7);
  v4 = 0;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x100000) != 0 )
  {
    dword_140C4F3D0 = 12;
    return 3221226547LL;
  }
  if ( (*a1 & 0x40) != 0 )
    v6 = 2LL;
  else
    v6 = (*a1 & 0x20) != 0;
  result = sub_1406FF49C(*((_QWORD *)a1 + 8), v6);
  if ( (int)result < 0 )
  {
    dword_140C4F3D0 = 13;
    return result;
  }
  v8 = *a1;
  if ( (v8 & 0x100) != 0 )
  {
    v9 = 4;
  }
  else if ( (v8 & 0x20) != 0 )
  {
    v9 = 1;
  }
  else if ( (v8 & 0x10) != 0 )
  {
    v9 = (*a1 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v9 = 0;
  }
  v10 = *v1;
  v11 = v9 | 0x10;
  if ( (v8 & 0x800) == 0 )
    v11 = v9;
  v12 = (unsigned int)v8;
  if ( (v8 & 0x400) != 0 && (v8 & 0x10) == 0 )
  {
    v14 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL);
    LOBYTE(v21) = 0;
    result = sub_1407010C8(v3, (__int64)&v21);
    if ( (int)result < 0 )
    {
      dword_140C4F3D0 = 14;
      return result;
    }
    v12 = *a1;
    if ( (v12 & 0x800) == 0 )
    {
      if ( *((_BYTE *)a1 + 24) && (v14 & 0x800000) != 0 )
        v4 = 1;
      if ( (v14 & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else
      {
        v2 = 0;
        if ( (v14 & 0x2000000) != 0 )
          v2 = 6;
      }
    }
    *((_BYTE *)a1 + 24) = v21;
  }
  if ( (v12 & 0x100000) != 0 )
  {
    v11 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v13 = v11 | 0x20000000;
  if ( (v12 & 0x800000) == 0 )
    v13 = v11;
  if ( (v12 & 0x400) != 0 )
  {
    if ( (v12 & 0x10) != 0 )
      goto LABEL_41;
    v15 = *(_BYTE *)(v10 + 15);
    LOBYTE(v8) = *((_BYTE *)a1 + 24);
    if ( qword_140C1B940 )
    {
      v16 = sub_14042A5E0(v13, v8);
      LOBYTE(v8) = *((_BYTE *)a1 + 24);
      v15 = *(_BYTE *)(v10 + 15);
      if ( v16 )
        goto LABEL_41;
    }
    if ( !qword_140C1B8E0
      || (LOBYTE(v12) = v15 >> 4, v17 = sub_14042A5E0(v12, v8), v18 = *(_BYTE *)(v10 + 15), !v17)
      || (v13 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || (v18 & 0xF0) == 0 && *(char *)(*(_QWORD *)(v10 + 56) + 46LL) < 0 )
    {
LABEL_41:
      v18 = *(_BYTE *)(v10 + 15);
      v4 |= 2u;
    }
    v19 = qword_140C1B8E0;
    if ( qword_140C1B8E0 )
    {
      LOBYTE(v8) = v2;
      LOBYTE(v12) = v18 >> 4;
      v19 = sub_14042A5E0(v12, v8);
    }
    v20 = v4 | 4;
    if ( v19 )
      v20 = v4;
    v4 = v20;
    if ( (*a1 & 0x10000000) != 0 )
      v4 = v20 | 8;
  }
  result = sub_1406FF378(1, (_DWORD)v3, (_DWORD)v1, a1[42], *((_QWORD *)a1 + 20), v13, v4, *((_BYTE *)a1 + 24), v2);
  if ( (int)result < 0 )
    dword_140C4F3D0 = 15;
  return result;
}
