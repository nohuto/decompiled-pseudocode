/*
 * XREFs of sub_140AF8D68 @ 0x140AF8D68
 * Callers:
 *     sub_140AF8BF8 @ 0x140AF8BF8 (sub_140AF8BF8.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AF8D68(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  unsigned int *v4; // rax
  unsigned int *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 Pool2; // r13
  unsigned int v10; // r15d
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // rbx
  _DWORD *v15; // rax
  void *v16; // rcx
  __int64 v18; // rax
  __int64 *v19; // [rsp+60h] [rbp+8h]
  unsigned int *v20; // [rsp+70h] [rbp+18h]

  v1 = 4096 - (*(_DWORD *)a1 & 0xFFF);
  if ( v1 < 0x24 )
    v1 = 36;
  v3 = 0;
  while ( 1 )
  {
    v4 = (unsigned int *)MmMapIoSpaceEx(*(_QWORD *)a1, v1, 0x204u);
    v5 = v4;
    if ( !v4 )
      return (unsigned int)-1073741823;
    v6 = v4[1];
    if ( v1 >= v6 )
      break;
    MmUnmapVideoDisplay(v4, v1);
    v1 = v6;
  }
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( v6 >= 0x24 )
      v7 = 36LL;
    v8 = ((unsigned __int64)v6 - v7) >> 3;
  }
  else
  {
    if ( v6 >= 0x24 )
      v7 = 36LL;
    v8 = ((unsigned __int64)v6 - v7) >> 2;
  }
  if ( (_DWORD)v8 )
  {
    Pool2 = ExAllocatePool2(256LL, 8LL * (unsigned int)v8, 0x416C6148u);
    if ( Pool2 )
    {
      v10 = 0;
      v11 = (__int64 *)(v5 + 9);
      v20 = v5;
      v12 = (unsigned int)v8;
      v13 = v11;
      v19 = v11;
      do
      {
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
          v14 = *v13;
        else
          v14 = *(unsigned int *)v11;
        v15 = (_DWORD *)MmMapIoSpaceEx(v14, 36LL, 0x204u);
        v16 = v15;
        if ( v15 )
        {
          if ( *v15 == 1128877139 )
          {
            v18 = v10++;
            *(_QWORD *)(Pool2 + 8 * v18) = v14;
          }
          MmUnmapVideoDisplay(v16, 0x24uLL);
        }
        v11 = (__int64 *)((char *)v11 + 4);
        v13 = ++v19;
        --v12;
      }
      while ( v12 );
      v5 = v20;
      *(_QWORD *)(a1 + 24) = Pool2;
      *(_DWORD *)(a1 + 16) = v10;
    }
    else
    {
      v3 = -1073741801;
    }
  }
  MmUnmapVideoDisplay(v5, v1);
  return v3;
}
