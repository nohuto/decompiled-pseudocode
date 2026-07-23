/*
 * XREFs of sub_14024FDF0 @ 0x14024FDF0
 * Callers:
 *     sub_1403CDBF0 @ 0x1403CDBF0 (sub_1403CDBF0.c)
 * Callees:
 *     sub_14037D59C @ 0x14037D59C (sub_14037D59C.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_14037E128 @ 0x14037E128 (sub_14037E128.c)
 *     sub_14037E3A0 @ 0x14037E3A0 (sub_14037E3A0.c)
 *     sub_140386D24 @ 0x140386D24 (sub_140386D24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024FDF0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // r9
  const signed __int32 *v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // ebx
  const signed __int32 *v7; // r8
  const signed __int32 *v8; // rdx
  unsigned int v9; // edi
  unsigned int j; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int i; // r12d
  void *v15; // rax
  const signed __int32 *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  const signed __int32 *v19; // [rsp+40h] [rbp-10h]
  int v20; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 204);
  v17 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    sub_14037E3A0(a1, &v17);
    v4 = v19;
    v5 = DWORD2(v18);
    v6 = 0;
    while ( 1 )
    {
      if ( v5 <= v6 )
      {
LABEL_28:
        v15 = (void *)sub_14037E128(a1, &v17, 0LL);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        return;
      }
      v7 = &v4[(unsigned __int64)(v5 - 1) >> 5];
      v8 = &v4[(unsigned __int64)v6 >> 5];
      if ( v8 != v7 )
      {
        v3 = v6 & 0x1F;
        if ( (*v8 | *((_DWORD *)qword_140015FA0 + v3)) == -1 )
        {
          v6 = v6 - v3 + 32;
          for ( ++v8; v8 < v7 && *v8 == -1; ++v8 )
            v6 += 32;
        }
      }
      while ( v6 < v5 && _bittest(v4, v6) )
        ++v6;
      v9 = 0;
      if ( v8 == v7 )
        goto LABEL_17;
      v3 = v6 & 0x1F;
      if ( (*v8 & ~*((_DWORD *)qword_140015FA0 + v3)) != 0 )
        goto LABEL_16;
      v9 = 32 - v3;
      if ( (_DWORD)v3 != 33 )
        break;
LABEL_22:
      v4 = v19;
      v5 = DWORD2(v18);
LABEL_23:
      if ( v9 )
      {
        v20 = 0;
        v21 = v6 | (unsigned __int64)(v1 << 60);
        sub_14037D59C(&v21, &v20, v7, v3, v17, *((_QWORD *)&v17 + 1), v18);
        v12 = sub_14037D8B8(v11, &v20, v9);
        for ( i = v9; ; v12 = sub_14037D8B8(v13, &v20, i) )
        {
          i -= v12;
          if ( !i )
            break;
          v20 += v12;
        }
        sub_140386D24(a1, v6, v9);
        if ( *(_DWORD *)(a1 + 200) )
        {
          v6 += v9;
          if ( v6 < v5 )
            continue;
        }
      }
      goto LABEL_28;
    }
    v16 = v8 + 1;
    while ( v16 < v7 && !*v16 )
    {
      ++v16;
      v9 += 32;
      if ( v9 == -1 )
        goto LABEL_22;
    }
LABEL_16:
    v4 = v19;
    v5 = DWORD2(v18);
LABEL_17:
    for ( j = v9 + v6; j < v5 && !_bittest(v4, j) && v9 != -1; ++j )
      ++v9;
    goto LABEL_23;
  }
}
