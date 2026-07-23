/*
 * XREFs of sub_1407DD6F0 @ 0x1407DD6F0
 * Callers:
 *     sub_1407D79B4 @ 0x1407D79B4 (sub_1407D79B4.c)
 *     sub_1407DD3D0 @ 0x1407DD3D0 (sub_1407DD3D0.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140857C48 @ 0x140857C48 (sub_140857C48.c)
 */

__int64 __fastcall sub_1407DD6F0(__int64 a1, _OWORD *a2, __int64 a3, int *a4)
{
  unsigned int v4; // r12d
  __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rbp
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _QWORD *i; // rdx
  __int128 v22; // xmm1
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  __int64 v29; // [rsp+60h] [rbp+8h]
  __int64 v30; // [rsp+60h] [rbp+8h]
  _OWORD *Buf2; // [rsp+68h] [rbp+10h]
  __int64 v33; // [rsp+70h] [rbp+18h]

  Buf2 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v7 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v8 = 1;
  v9 = 0LL;
  v10 = a3 & v7;
  v29 = a3 & v7;
  do
  {
    if ( v9 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      goto LABEL_15;
    a2 = Buf2;
    v9 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v29)) & ((v4 >> 5) - 1));
    do
    {
LABEL_5:
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        goto LABEL_15;
    }
    while ( v10 != (v7 & *(_QWORD *)(v9 + 8)) );
    if ( !v9 )
    {
LABEL_15:
      if ( !a4 )
        return 0LL;
      if ( *(_QWORD *)(a1 + 8) || (int)sub_140857C48(a1) >= 0 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        if ( v9 )
        {
          *(_QWORD *)(a1 + 32) = *(_QWORD *)v9;
        }
        else
        {
          v18 = (_QWORD *)(a1 + 16);
          v19 = *(_QWORD **)(a1 + 16);
          if ( v19[1] != a1 + 16 || (v20 = *v19, *(_QWORD **)(*v19 + 8LL) != v19) )
FatalListEntryError_113:
            __fastfail(3u);
          *v18 = v20;
          v9 = (__int64)(v19 - 2);
          *(_QWORD *)(v20 + 8) = v18;
          v30 = *(_QWORD *)(v9 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
          for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                             + 8LL
                             * ((37
                               * (BYTE6(v30)
                                + 37
                                * (BYTE5(v30)
                                 + 37
                                 * (BYTE4(v30)
                                  + 37
                                  * (BYTE3(v30)
                                   + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                               + HIBYTE(v30)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( *i == v9 )
            {
              *i = *(_QWORD *)v9;
              --*(_DWORD *)a1;
              *(_QWORD *)v9 |= 0x8000000000000002uLL;
              break;
            }
          }
        }
        memset((void *)v9, 0, 0x78uLL);
        *(_OWORD *)(v9 + 32) = *Buf2;
        *(_OWORD *)(v9 + 48) = Buf2[1];
        *(_OWORD *)(v9 + 64) = Buf2[2];
        v22 = Buf2[3];
        *(_QWORD *)(v9 + 8) = a3;
        *(_OWORD *)(v9 + 80) = v22;
        v23 = *(_DWORD *)(a1 + 4);
        v33 = a3 & (-1LL << (v23 & 0x1F));
        v24 = *(_QWORD *)(a1 + 8);
        v25 = (37
             * (BYTE6(v33)
              + 37
              * (BYTE5(v33)
               + 37
               * (BYTE4(v33)
                + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
             + HIBYTE(v33)) & ((v23 >> 5) - 1);
        *(_QWORD *)v9 = *(_QWORD *)(v24 + 8 * v25);
        v26 = (_QWORD *)(v9 + 16);
        *(_QWORD *)(v24 + 8 * v25) = v9;
        ++*(_DWORD *)a1;
        v27 = a1 + 16;
        v28 = *(_QWORD **)(v27 + 8);
        if ( *v28 != v27 )
          goto FatalListEntryError_113;
        *v26 = v27;
        *(_QWORD *)(v9 + 24) = v28;
        *v28 = v26;
        *(_QWORD *)(v27 + 8) = v26;
      }
      else
      {
        v9 = 0LL;
      }
LABEL_13:
      *a4 = v8;
      return v9;
    }
    v11 = memcmp((const void *)(v9 + 32), a2, 0x40uLL);
    a2 = Buf2;
  }
  while ( v11 );
  v12 = (_QWORD *)(v9 + 16);
  v13 = *(_QWORD *)(v9 + 16);
  if ( *(_QWORD *)(v13 + 8) != v9 + 16 )
    goto FatalListEntryError_113;
  v14 = *(_QWORD **)(v9 + 24);
  if ( (_QWORD *)*v14 != v12 )
    goto FatalListEntryError_113;
  *v14 = v13;
  v15 = a1 + 16;
  *(_QWORD *)(v13 + 8) = v14;
  v16 = *(_QWORD **)(v15 + 8);
  if ( *v16 != v15 )
    goto FatalListEntryError_113;
  *v12 = v15;
  *(_QWORD *)(v9 + 24) = v16;
  *v16 = v12;
  *(_QWORD *)(v15 + 8) = v12;
  v8 = 0;
  if ( a4 )
    goto LABEL_13;
  return v9;
}
