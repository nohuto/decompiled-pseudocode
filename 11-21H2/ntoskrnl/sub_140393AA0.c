/*
 * XREFs of sub_140393AA0 @ 0x140393AA0
 * Callers:
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_140393B5C @ 0x140393B5C (sub_140393B5C.c)
 */

__int64 __fastcall sub_140393AA0(__int64 a1, int a2, int *a3, ULONG_PTR *a4, _DWORD *a5)
{
  unsigned int v7; // ebx
  unsigned int v9; // esi
  ULONG_PTR v10; // rax
  _DWORD *v11; // rdx
  bool v12; // zf
  int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v14 = *a3;
  v7 = 0;
  v15 = 0LL;
  v16 = 0;
  v9 = sub_140393B5C(a1, a2, (unsigned int)&v14, (unsigned int)&v15, (__int64)&v16);
  if ( v9 == 1024 )
    return (unsigned int)-1073741275;
  ++*(_DWORD *)(a1 + 1868);
  if ( v15 && v15 > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)*(unsigned int *)(a1 + 1864) )
    return (unsigned int)-1073741763;
  v10 = sub_14035F5AC(a1, v9);
  if ( !v10 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v11 = a5;
    v12 = v16 == 0;
    *a4 = v10;
    *v11 = !v12;
    *a3 = v14;
  }
  return v7;
}
