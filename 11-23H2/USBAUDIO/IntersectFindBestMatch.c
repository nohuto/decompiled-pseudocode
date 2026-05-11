/*
 * XREFs of IntersectFindBestMatch @ 0x1C002C68C
 * Callers:
 *     IntersectFindDataRange @ 0x1C0037F60 (IntersectFindDataRange.c)
 * Callees:
 *     IntersectGetMaxSampleRate @ 0x1C003A220 (IntersectGetMaxSampleRate.c)
 */

__int64 __fastcall IntersectFindBestMatch(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 *v7; // r10
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // r11d
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 *v17; // rdx
  __int64 v18; // r9
  __int64 *v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 *v23; // rax
  unsigned int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v7 = a1;
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    v10 = a2;
    do
    {
      IntersectGetMaxSampleRate(*v8++, a3);
      --v10;
    }
    while ( v10 );
    v12 = v7;
    v13 = v9;
    do
    {
      v14 = *v12++;
      v15 = *(_DWORD *)(v14 + 100);
      if ( v15 <= v3 )
        v15 = v3;
      v3 = v15;
      --v13;
    }
    while ( v13 );
    v16 = v11;
    v17 = v7;
    v18 = v9;
    do
    {
      if ( *(_DWORD *)(*v17 + 100) < v3 )
      {
        *v17 = 0LL;
        --v16;
      }
      ++v17;
      --v9;
    }
    while ( v9 );
    v19 = v7;
    do
    {
      v20 = *v19;
      if ( *v19 )
      {
        v21 = *(_DWORD *)(v20 + 64);
        if ( v21 <= v4 )
          v21 = v4;
        v4 = v21;
        if ( *(_DWORD *)(v20 + 104) > v5 )
          v5 = *(_DWORD *)(v20 + 104);
      }
      ++v19;
      --v18;
    }
    while ( v18 );
    v22 = 0;
    v23 = v7;
    do
    {
      if ( v16 <= 1 )
        break;
      if ( *v23 && *(_DWORD *)(*v23 + 64) < v4 )
      {
        *v23 = 0LL;
        --v16;
      }
      ++v22;
      ++v23;
    }
    while ( v22 < v11 );
    v24 = 0;
    v25 = v7;
    do
    {
      if ( v16 <= 1 )
        break;
      if ( *v25 && *(_DWORD *)(*v25 + 104) < v5 )
      {
        *v25 = 0LL;
        --v16;
      }
      ++v24;
      ++v25;
    }
    while ( v24 < v11 );
    v26 = 0LL;
    if ( v11 )
    {
      v27 = v7;
      do
      {
        if ( *v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        ++v27;
      }
      while ( (unsigned int)v26 < v11 );
    }
  }
  else
  {
    v26 = 0LL;
  }
  return v7[v26];
}
