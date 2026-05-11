/*
 * XREFs of IntersectFindBestMatch @ 0x1C002BEE8
 * Callers:
 *     IntersectFindDataRange @ 0x1C002C074 (IntersectFindDataRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectFindBestMatch(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  _QWORD *v9; // r11
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 *v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // r11
  __int64 v23; // r8
  unsigned int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // edx
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rcx

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v9 = a1;
    v10 = a2;
    v11 = a2;
    do
    {
      v12 = *v9;
      v13 = *(_DWORD *)(*v9 + 108LL);
      if ( v13 )
      {
        *(_DWORD *)(v12 + 100) = 0;
        v14 = *(unsigned int **)(v12 + 120);
        v15 = v13;
        do
        {
          v16 = *v14;
          if ( *v14 <= a3 && v16 > *(_DWORD *)(v12 + 100) )
            *(_DWORD *)(v12 + 100) = v16;
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        v17 = a3;
        if ( *(_DWORD *)(v12 + 80) < a3 )
          v17 = *(_DWORD *)(v12 + 80);
        *(_DWORD *)(v12 + 100) = v17;
      }
      ++v9;
      --v11;
    }
    while ( v11 );
    v18 = a1;
    do
    {
      v19 = *v18;
      v20 = v3;
      ++v18;
      v3 = *(_DWORD *)(v19 + 100);
      if ( v3 <= v20 )
        v3 = v20;
      --v10;
    }
    while ( v10 );
    v21 = a1;
    v22 = v4;
    v23 = v4;
    v24 = v4;
    do
    {
      if ( *(_DWORD *)(*v21 + 100LL) < v3 )
      {
        *v21 = 0LL;
        --v24;
      }
      ++v21;
      --v23;
    }
    while ( v23 );
    v25 = a1;
    do
    {
      v26 = *v25;
      v27 = v5;
      if ( *v25 )
      {
        v5 = *(_DWORD *)(v26 + 64);
        if ( v5 <= v27 )
          v5 = v27;
        if ( *(_DWORD *)(v26 + 104) > v6 )
          v6 = *(_DWORD *)(v26 + 104);
      }
      ++v25;
      --v22;
    }
    while ( v22 );
    v28 = a1;
    v29 = 0;
    do
    {
      if ( v24 <= 1 )
        break;
      if ( *v28 && *(_DWORD *)(*v28 + 64LL) < v5 )
      {
        *v28 = 0LL;
        --v24;
      }
      ++v29;
      ++v28;
    }
    while ( v29 < (unsigned int)v4 );
    v30 = 0;
    if ( (_DWORD)v4 )
    {
      v31 = a1;
      do
      {
        if ( v24 <= 1 )
          break;
        if ( *v31 && *(_DWORD *)(*v31 + 104LL) < v6 )
        {
          *v31 = 0LL;
          --v24;
        }
        ++v30;
        ++v31;
      }
      while ( v30 < (unsigned int)v4 );
    }
    v32 = 0LL;
    if ( (_DWORD)v4 )
    {
      v33 = a1;
      do
      {
        if ( *v33 )
          break;
        v32 = (unsigned int)(v32 + 1);
        ++v33;
      }
      while ( (unsigned int)v32 < (unsigned int)v4 );
    }
  }
  else
  {
    v32 = 0LL;
  }
  return a1[v32];
}
