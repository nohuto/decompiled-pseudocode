/*
 * XREFs of sub_140945BCC @ 0x140945BCC
 * Callers:
 *     sub_14081FF7C @ 0x14081FF7C (sub_14081FF7C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140945BCC(__int64 a1, unsigned int a2, _QWORD **a3, char a4)
{
  __int64 *v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _QWORD *result; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1

  if ( a2 )
  {
    v4 = (__int64 *)(a1 + 32);
    v5 = a2;
    do
    {
      v6 = *v4;
      if ( a4 )
      {
        v7 = *(__int64 **)(v6 + 16);
        *(_QWORD *)(v6 + 24) = v7;
      }
      else
      {
        v7 = *(__int64 **)(v6 + 24);
        *(_QWORD *)(v6 + 16) = v7;
      }
      v8 = *v7;
      v9 = v8 + 24;
      v10 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
      while ( v9 < v10 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v9 + 8LL) )
        {
          v11 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
          if ( a4 )
          {
            v12 = *(_DWORD *)(v11 + 152);
            v13 = *(_OWORD *)(v11 + 56);
            *(_OWORD *)(v11 + 160) = *(_OWORD *)(v11 + 40);
            v14 = *(_OWORD *)(v11 + 72);
            *(_OWORD *)(v11 + 176) = v13;
            v15 = *(_OWORD *)(v11 + 88);
            *(_OWORD *)(v11 + 192) = v14;
            v16 = *(_OWORD *)(v11 + 104);
            *(_OWORD *)(v11 + 208) = v15;
            v17 = *(_OWORD *)(v11 + 120);
            *(_OWORD *)(v11 + 224) = v16;
            v18 = *(_OWORD *)(v11 + 136);
            *(_OWORD *)(v11 + 240) = v17;
            *(_OWORD *)(v11 + 256) = v18;
            *(_DWORD *)(v11 + 272) = v12;
          }
          else
          {
            v19 = *(_DWORD *)(v11 + 272);
            v20 = *(_OWORD *)(v11 + 176);
            *(_OWORD *)(v11 + 40) = *(_OWORD *)(v11 + 160);
            v21 = *(_OWORD *)(v11 + 192);
            *(_OWORD *)(v11 + 56) = v20;
            v22 = *(_OWORD *)(v11 + 208);
            *(_OWORD *)(v11 + 72) = v21;
            v23 = *(_OWORD *)(v11 + 224);
            *(_OWORD *)(v11 + 88) = v22;
            v24 = *(_OWORD *)(v11 + 240);
            *(_OWORD *)(v11 + 104) = v23;
            v25 = *(_OWORD *)(v11 + 256);
            *(_OWORD *)(v11 + 120) = v24;
            *(_OWORD *)(v11 + 136) = v25;
            *(_DWORD *)(v11 + 152) = v19;
          }
        }
        v9 += 8LL;
      }
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  for ( result = *a3; result != a3; result = (_QWORD *)*result )
  {
    if ( a4 )
    {
      v27 = *(_OWORD *)result;
      *((_OWORD *)result - 2) = *((_OWORD *)result - 3);
      *((_OWORD *)result - 1) = v27;
    }
    else
    {
      v28 = *((_OWORD *)result - 1);
      *((_OWORD *)result - 3) = *((_OWORD *)result - 2);
      *(_OWORD *)result = v28;
    }
  }
  return result;
}
