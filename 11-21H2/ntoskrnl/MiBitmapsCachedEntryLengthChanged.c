/*
 * XREFs of MiBitmapsCachedEntryLengthChanged @ 0x1402E2738
 * Callers:
 *     MiInvalidatePageFileBitmapsCache @ 0x14025FB48 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402E22B0 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 *a2, int a3)
{
  char v3; // bl
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 j; // r9

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    v6 = a2[1];
    if ( v6 )
    {
      v8 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v6 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = a2[2]; ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)v6 == a2 )
          break;
        a2 = (unsigned __int64 *)v6;
      }
    }
  }
  else
  {
    v6 = *a2;
    v15 = (unsigned __int64)a2;
    if ( *a2 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( j = a2[2]; ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v15 )
          break;
        v15 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v9 = *(_DWORD *)(v6 + 52);
  v10 = *((_DWORD *)v4 + 13);
  if ( a3 )
  {
    if ( v9 > v10 )
      return;
  }
  else if ( v9 < v10 )
  {
    return;
  }
  v11 = a1 + 144;
  RtlRbRemoveNode(v11, v4);
  v13 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= v11;
    else
      v13 = 0LL;
  }
  if ( v13 )
  {
    v12 = *((unsigned int *)v4 + 13);
    while ( 1 )
    {
      if ( v4[6] < *(_QWORD *)(v13 + 48) )
      {
        v14 = *(_QWORD *)v13;
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v14 )
            break;
          v14 ^= v13;
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_28;
          v14 ^= v13;
        }
        if ( !v14 )
        {
LABEL_28:
          v3 = 1;
          break;
        }
      }
      v13 = v14;
    }
  }
  LOBYTE(v12) = v3;
  RtlRbInsertNodeEx(v11, v13, v12, v4);
}
