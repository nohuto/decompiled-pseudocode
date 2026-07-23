/*
 * XREFs of sub_1409DD22C @ 0x1409DD22C
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1409DD334 @ 0x1409DD334 (sub_1409DD334.c)
 */

__int64 __fastcall sub_1409DD22C(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rbx
  int v8; // esi
  unsigned int v9; // ebp
  _QWORD **v10; // r14
  _QWORD *i; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 result; // rax

  v5 = 0LL;
  v8 = 0;
  v9 = (a3 - 8) / 0x24u;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v10 = (_QWORD **)qword_140C16560;
  for ( i = *(_QWORD **)qword_140C16560; i != v10; i = (_QWORD *)*i )
  {
    ++v8;
    if ( (unsigned int)v5 < v9 )
    {
      v12 = 9 * v5;
      v5 = (unsigned int)(v5 + 1);
      *(_OWORD *)&a2[v12 + 2] = *(_OWORD *)(i + 9);
    }
  }
  if ( a1 == 2244960 )
  {
    v13 = *v10;
    v8 = 0;
    v5 = 0LL;
    while ( v13 != v10 )
    {
      ++v8;
      if ( (unsigned int)v5 < v9 )
      {
        sub_1409DD334(&a2[8 * v5 + 2 + (unsigned int)v5], v13);
        v5 = (unsigned int)(v5 + 1);
      }
      v13 = (_QWORD *)*v13;
    }
  }
  KeReleaseMutex(&Object, 0);
  *a4 = 36 * v5 + 8;
  result = 0LL;
  *a2 = v8;
  a2[1] = v5;
  return result;
}
