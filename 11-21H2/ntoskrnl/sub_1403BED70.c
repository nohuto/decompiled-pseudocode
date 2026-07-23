/*
 * XREFs of sub_1403BED70 @ 0x1403BED70
 * Callers:
 *     sub_1403BED38 @ 0x1403BED38 (sub_1403BED38.c)
 * Callees:
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403BEF40 @ 0x1403BEF40 (sub_1403BEF40.c)
 *     sub_1403BEFA8 @ 0x1403BEFA8 (sub_1403BEFA8.c)
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403BED70(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *v3; // rax
  unsigned int *v4; // rbp
  __int64 v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int *v9; // r14
  __int64 v10; // r12
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // esi
  int v18; // r12d
  int v19; // ecx
  _DWORD *v20; // rax
  _DWORD *v21; // rbx
  __int64 i; // rcx
  __int64 v23; // rax
  int v24; // eax
  unsigned int *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  int NumberOfBytes_4; // [rsp+74h] [rbp+Ch]

  NumberOfBytes_4 = HIDWORD(a1);
  v1 = 0;
  NumberOfBytes = 0;
  if ( !qword_140C54948 )
  {
    v3 = (unsigned int *)sub_140213AC0(0LL, 0x54445358u, 0LL, 0LL);
    v4 = v3;
    if ( v3 )
    {
      v5 = v3[1];
      v6 = 0LL;
      v7 = (unsigned int)v5;
      if ( (unsigned int)v5 >= 0x24 )
        v7 = 36LL;
      v8 = (unsigned __int64)(v5 - v7) >> 3;
    }
    else
    {
      v25 = (unsigned int *)sub_140213AC0(0LL, 0x54445352u, 0LL, 0LL);
      v6 = v25;
      if ( !v25 )
        return qword_140C54948;
      v26 = v25[1];
      v27 = (unsigned int)v26;
      if ( (unsigned int)v26 >= 0x24 )
        v27 = 36LL;
      v8 = (unsigned __int64)(v26 - v27) >> 2;
    }
    if ( (_DWORD)v8 )
    {
      v9 = v6 + 9;
      v10 = (unsigned int)v8;
      v11 = (__int64 *)(v4 + 9);
      do
      {
        if ( v4 )
          v12 = *v11;
        else
          v12 = *v9;
        v13 = sub_140215144(0LL, v12, 0x24u, 0, 0LL, 0LL, 1, &NumberOfBytes);
        v14 = (void *)v13;
        if ( v13 )
        {
          v15 = sub_1403BEFA8(0LL, v13, v12);
          MmUnmapVideoDisplay(v14, NumberOfBytes);
          if ( v15 )
            sub_1403BEF40(0LL, v15);
        }
        ++v9;
        ++v11;
        --v10;
      }
      while ( v10 );
    }
    v16 = qword_140CE2210;
    v17 = 0;
    v18 = 1064961;
    while ( (__int64 *)v16 != &qword_140CE2210 )
    {
      v19 = *(_DWORD *)(v16 + 24);
      if ( ((unsigned int)(v19 - 1413763908) > 0x14 || !_bittest(&v18, v19 - 1413763908)) && v19 != 1396916550 )
        ++v17;
      v16 = *(_QWORD *)v16;
    }
    v20 = (_DWORD *)sub_1403BF088(0LL, (unsigned int)(8 * v17 + 8));
    v21 = v20;
    if ( v20 )
    {
      memset(v20, 0, (unsigned int)(8 * v17 + 8));
      *v21 = v17;
      for ( i = qword_140CE2210; (__int64 *)i != &qword_140CE2210; i = *(_QWORD *)i )
      {
        v24 = *(_DWORD *)(i + 24);
        if ( ((unsigned int)(v24 - 1413763908) > 0x14 || !_bittest(&v18, v24 - 1413763908)) && v24 != 1396916550 )
        {
          v23 = v1++;
          *(_QWORD *)&v21[2 * v23 + 2] = i + 24;
        }
      }
      qword_140C54948 = (__int64)v21;
    }
  }
  return qword_140C54948;
}
