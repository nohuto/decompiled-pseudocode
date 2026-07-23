/*
 * XREFs of sub_1403BF3B8 @ 0x1403BF3B8
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     sub_14023AEE0 @ 0x14023AEE0 (sub_14023AEE0.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403BEC00 @ 0x1403BEC00 (sub_1403BEC00.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_140416FEC @ 0x140416FEC (sub_140416FEC.c)
 *     sub_140509490 @ 0x140509490 (sub_140509490.c)
 *     sub_140509570 @ 0x140509570 (sub_140509570.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14051DEB0 @ 0x14051DEB0 (sub_14051DEB0.c)
 *     sub_14052448C @ 0x14052448C (sub_14052448C.c)
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 *     sub_140B4CE34 @ 0x140B4CE34 (sub_140B4CE34.c)
 *     sub_140B4CF2C @ 0x140B4CF2C (sub_140B4CF2C.c)
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_1403BF580 @ 0x1403BF580 (sub_1403BF580.c)
 *     sub_1403BF630 @ 0x1403BF630 (sub_1403BF630.c)
 *     sub_140509500 @ 0x140509500 (sub_140509500.c)
 */

unsigned __int64 __fastcall sub_1403BF3B8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v6; // r12
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  _BYTE *v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v6 = a4;
  v7 = 1LL;
  v8 = a2;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v10 = 0x100000014LL;
  if ( !_bittest64(&v10, a5) )
    return 0LL;
  v11 = qword_140C54AB0;
  v12 = 0;
  if ( (_DWORD)a2 )
  {
    while ( 2 )
    {
      v12 = 0;
      v13 = v11;
      while ( 1 )
      {
        if ( v13 == qword_140C54AA8 )
          return 0LL;
        v14 = (_BYTE *)sub_1403BF580(v13);
        if ( !v14 )
          return 0LL;
        v13 += 4096LL;
        v7 = 1LL;
        if ( (*v14 & 1) != 0 )
          break;
        if ( ++v12 >= v8 )
          goto LABEL_10;
      }
      v11 = v13;
LABEL_10:
      if ( a5 == 32 )
      {
        v15 = v12 < v8;
        if ( v12 != v8 )
        {
LABEL_12:
          if ( v15 )
            continue;
          goto LABEL_13;
        }
        if ( !(unsigned __int8)sub_140509500(v11) && !(unsigned __int8)sub_140509500(v11 + (v8 << 12) - 4096) )
        {
          v7 = 1LL;
          goto LABEL_13;
        }
        v12 = 0;
        v7 = 1LL;
      }
      break;
    }
    v15 = v12 < v8;
    goto LABEL_12;
  }
LABEL_13:
  v16 = v11 | a1 & 0xFFF;
  if ( v11 == qword_140C54AB0 )
    qword_140C54AB0 = v11 + (v8 << 12);
  if ( v12 )
  {
    v17 = 3LL;
    if ( a5 != 4 )
      v17 = 1LL;
    v18 = v17 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v18 = v17;
    a2 = v18 | 0x18;
    if ( a3 == 1 )
      a2 = v18;
    do
    {
      v19 = a2 | a1 & 0xFFFFFFFFFF000LL;
      v7 = 0xFFFFF68000000000uLL;
      a1 += 4096LL;
      v10 = 8 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v10 = v19;
      if ( v6 )
        __invlpg((void *)v11);
      v11 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  if ( !v6 )
    sub_1403BF630(v10, a2, v7, a4);
  return v16;
}
