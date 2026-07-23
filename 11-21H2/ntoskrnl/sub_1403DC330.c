/*
 * XREFs of sub_1403DC330 @ 0x1403DC330
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     Dns_LibHeapReset @ 0x140AAB008 (Dns_LibHeapReset.c)
 *     sub_140AAB028 @ 0x140AAB028 (sub_140AAB028.c)
 *     sub_140AAEDB0 @ 0x140AAEDB0 (sub_140AAEDB0.c)
 *     sub_140AAEDC8 @ 0x140AAEDC8 (sub_140AAEDC8.c)
 *     sub_140AAEDE0 @ 0x140AAEDE0 (sub_140AAEDE0.c)
 *     sub_140AB0880 @ 0x140AB0880 (sub_140AB0880.c)
 */

__int64 __fastcall sub_1403DC330(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  int v9; // eax
  size_t v10; // rsi
  _DWORD *v11; // r9
  __int64 v12; // rax
  size_t v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v2 = 0;
  if ( a2 )
  {
    qword_140C54D28 = a2;
  }
  else if ( !qword_140C54D28 )
  {
    return 3221225712LL;
  }
  if ( !a1 )
    return 0LL;
  v4 = sub_140AAB028();
  LOBYTE(v5) = sub_140AAEDE0(&v16);
  if ( !*(_BYTE *)v4 || !*(_BYTE *)(v4 + 1) )
    return 3221225474LL;
  v6 = *(unsigned int *)(v4 + 16);
  v7 = 24;
  if ( (_DWORD)v6 == 4 )
  {
    v8 = 24;
  }
  else
  {
    v8 = 1;
    if ( (_DWORD)v6 == 5 )
      v8 = 32;
  }
  v9 = *(_DWORD *)(a1 + 36);
  if ( v9 == 4 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    v7 = 1;
    if ( v9 == 5 )
      v7 = 32;
  }
  v10 = *(_DWORD *)(v4 + 4) * (v8 >> 3) * *(_DWORD *)(v4 + 12);
  if ( v10 == *(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      sub_140AAEDC8(v6, v5);
      memmove(*(void **)a1, *(const void **)(v4 + 32), v10);
      v2 = 1;
      goto LABEL_17;
    }
    v11 = *(_DWORD **)a1;
    if ( !(_BYTE)v5 )
    {
      memset(*(void **)a1, 0, (unsigned int)v10);
LABEL_16:
      sub_140AAEDC8(v6, v5);
LABEL_17:
      v12 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *(_DWORD *)(v4 + 8);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = *(_DWORD *)(v4 + 4);
      }
      else
      {
        *(_DWORD *)(v12 + 4) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0;
      }
      **(_DWORD **)(a1 + 16) = 0;
      if ( v8 != v7 )
        sub_140AB0880(v7);
      *(_QWORD *)(v4 + 32) = *(_QWORD *)a1;
      *(_OWORD *)(v4 + 4) = *(_OWORD *)(a1 + 24);
      Dns_LibHeapReset(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + 4LL, *(_QWORD *)(a1 + 16) + 24LL);
      byte_140C54D38 = 1;
      sub_140AAEDB0();
      return 0LL;
    }
    v14 = v10 >> 2;
    if ( v14 )
    {
      v15 = v16;
      if ( ((unsigned __int8)v11 & 4) == 0 )
        goto LABEL_32;
      *v11 = v16;
      if ( --v14 )
      {
        ++v11;
LABEL_32:
        memset64(v11, v15 | (v15 << 32), v14 >> 1);
        v6 = 0LL;
        if ( (v14 & 1) != 0 )
          v11[v14 - 1] = v15;
      }
    }
    v2 = 1;
    goto LABEL_16;
  }
  return 3221225473LL;
}
