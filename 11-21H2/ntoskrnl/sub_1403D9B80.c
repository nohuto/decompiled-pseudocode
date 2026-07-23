/*
 * XREFs of sub_1403D9B80 @ 0x1403D9B80
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1403D9B80(_DWORD *a1)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // r10d
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int i; // r8d
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v11; // esi
  void *v12; // rax
  void *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rbx
  __int64 v17; // rax

  v1 = 0;
  if ( !a1 )
    return 3221225711LL;
  v3 = a1[1];
  if ( !v3 )
  {
    v14 = a1[3];
    a1[3] = 8;
    if ( v14 < 8 )
      return 3221225507LL;
    v15 = 2LL;
    v16 = a1 + 4;
    do
    {
      v17 = v1;
      v1 += 2;
      *v16++ = *((_DWORD *)qword_140025EA0 + v17);
      --v15;
    }
    while ( v15 );
    return 0LL;
  }
  if ( v3 != 1 )
    return 3221225711LL;
  v4 = a1[2];
  v5 = 2;
  v6 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( LODWORD(qword_140025EA0[v6]) == v4 )
    {
      v8 = HIDWORD(qword_140025EA0[v6]);
      v9 = a1[3];
      a1[3] = v8;
      if ( v9 < v8 )
        return 3221225507LL;
      v5 = v6 * 2;
      goto LABEL_9;
    }
    ++v6;
  }
  v8 = 0;
  if ( i == 2 )
    return 3221225711LL;
LABEL_9:
  v11 = v8;
  v12 = (void *)MmMapIoSpaceEx(*((unsigned int *)qword_140025EA0 + v5), v8, 0x204u);
  v13 = v12;
  if ( v12 )
  {
    memmove(a1 + 4, v12, v11);
    MmUnmapVideoDisplay(v13, v11);
    return 0LL;
  }
  return 3221226021LL;
}
