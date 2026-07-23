/*
 * XREFs of sub_14093F9F0 @ 0x14093F9F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055C25C @ 0x14055C25C (sub_14055C25C.c)
 *     sub_14093E9A0 @ 0x14093E9A0 (sub_14093E9A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093F9F0(__int64 a1, __int64 a2, _WORD *a3, _OWORD *a4, void *Src, unsigned int Size, int a7)
{
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // ebx
  int v16; // ecx
  int v18; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-30h] BYREF

  v18 = 0;
  v19 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = 2 * v11 + 2;
  Pool2 = ExAllocatePool2(256LL, v12 + Size + 36, 538996553LL);
  v14 = Pool2;
  if ( Pool2 )
  {
    v16 = a7 | 6;
    *(_OWORD *)(Pool2 + 4) = *a4;
    *(_DWORD *)Pool2 = 36;
    if ( (a7 & 1) == 0 )
      v16 = a7;
    *(_DWORD *)(Pool2 + 20) = v16;
    memmove((void *)(Pool2 + 36), a3, v12);
    *(_DWORD *)(v14 + 32) = v12 + 36;
    *(_QWORD *)(v14 + 24) = Size;
    memmove((void *)(v14 + v12 + 36), Src, Size);
    v15 = sub_14055C25C(2, a1, a2, v14, v12 + Size + 36, (__int64)&v19, 8u, 8u, &v18);
    if ( v15 >= 0 && v19 )
      v15 = sub_14093E9A0(v19);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
