/*
 * XREFs of sub_1C00A9E90 @ 0x1C00A9E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00A9A4C @ 0x1C00A9A4C (sub_1C00A9A4C.c)
 */

__int64 __fastcall sub_1C00A9E90(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  __int64 v9; // rdi
  unsigned int v10; // ebx
  _DWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rax
  const void **v16; // r14
  unsigned int v17; // ebp
  unsigned int v18; // r15d
  _WORD *v19; // rcx
  __int64 v20; // rcx
  _DWORD *v21; // rsi
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return 0;
    if ( a1 == 8 )
    {
      v13 = a5;
      v14 = 0;
      v15 = a5;
      v16 = *(const void ***)(a5 + 32);
      do
      {
        v15 = *(_QWORD *)(v15 + 16);
        ++v14;
      }
      while ( v15 );
      if ( v14 <= 0x3F )
      {
        v17 = 32 * v14 + 24;
        if ( v16 )
        {
          v18 = 32 * v14 + 24;
          v17 += *(unsigned __int16 *)v16 + 2;
        }
        else
        {
          v18 = 0;
        }
        if ( v17 > a3 )
        {
          v10 = -1073741789;
          if ( a3 >= 4 )
          {
            *a4 = v17;
            *v6 = 4;
          }
        }
        else
        {
          memset_0(a4, 0, a3);
          *a4 = v17;
          a4[2] = v18;
          a4[4] = v14;
          if ( v16 )
          {
            v19 = (_WORD *)((char *)a4 + v18);
            *v19 = *(_WORD *)v16;
            memmove(v19 + 1, v16[1], *(unsigned __int16 *)v16);
          }
          v20 = v13;
          if ( v14 )
          {
            v21 = a4 + 10;
            v22 = v14;
            do
            {
              v23 = *(_OWORD *)*(_QWORD *)(v20 + 8);
              *v21 = 528384;
              v21 += 8;
              *((_OWORD *)v21 - 3) = v23;
              *(_DWORD *)(v20 + 44) = 0;
              *(_BYTE *)(v20 + 41) = 0;
              v20 = *(_QWORD *)(v20 + 16);
              --v22;
            }
            while ( v22 );
          }
          v10 = 0;
          *v6 = v17;
        }
        do
        {
          sub_1C00A9A4C(*(GUID **)(v13 + 8), (_QWORD *)(v13 + 24), (int *)(v13 + 44), (_BYTE *)(v13 + 41));
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( v13 );
        return v10;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v26 = 0;
  LODWORD(a6) = 0;
  v9 = a5;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v11 = *(_DWORD **)(v9 + 8);
    if ( *v11 == a4[6] && v11[1] == a4[7] && v11[2] == a4[8] && v11[3] == a4[9] )
      break;
    v9 = *(_QWORD *)(v9 + 16);
  }
  while ( v9 );
  if ( !v9 )
    return (unsigned int)-1073741163;
  v10 = 0;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v9 + 44) = 0;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_BYTE *)(v9 + 41) = 0;
  }
  else
  {
    v12 = dword_1C0093C20 == 2;
    v25 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v9 + 24) = v25;
    if ( v12 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))qword_1C0093C30)(
                            3LL,
                            &v26,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v9 + 41) = v26;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))qword_1C0093C30)(
                             2LL,
                             v9 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v9 + 44) = HIDWORD(v25);
      *(_BYTE *)(v9 + 41) = BYTE2(v25);
    }
  }
  return v10;
}
