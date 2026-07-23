/*
 * XREFs of sub_1408602B8 @ 0x1408602B8
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408602B8(_QWORD *Object, int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  void *v15; // rcx

  v3 = Object[8];
  if ( *(_DWORD *)v3 == 193 )
    v6 = *(_QWORD *)(v3 + 8);
  else
    v6 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 != 4 )
      return 3221225659LL;
    Pool2 = ExAllocatePool2(256LL, 16LL, 1886150984LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = Object;
      ObfReferenceObject(Object);
      *a3 = v10;
      return 0LL;
    }
  }
  else
  {
    if ( !v6 )
      return 3221225659LL;
    v11 = v6;
    do
    {
      v11 = *(_QWORD *)(v11 + 8);
      ++v7;
    }
    while ( v11 );
    v12 = (_DWORD *)ExAllocatePool2(256LL, 16LL * v7, 1886150984LL);
    v13 = v12;
    if ( v12 )
    {
      *v12 = v7;
      v14 = 0LL;
      do
      {
        v15 = *(void **)(v6 + 16);
        *(_QWORD *)&v13[2 * v14 + 2] = v15;
        ObfReferenceObject(v15);
        v6 = *(_QWORD *)(v6 + 8);
        v14 = (unsigned int)(v14 + 1);
      }
      while ( v6 );
      *a3 = (__int64)v13;
      return 0LL;
    }
  }
  return 3221225626LL;
}
