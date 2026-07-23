/*
 * XREFs of sub_14093F8D0 @ 0x14093F8D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14093F428 @ 0x14093F428 (sub_14093F428.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093F8D0(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        _WORD *a3,
        __int128 *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v7; // rax
  unsigned int v11; // ebp
  __int64 Pool2; // rax
  _DWORD *InputBuffer; // rdi
  unsigned int v14; // ebx
  __int128 v15; // xmm0

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = 2 * v7 + 2;
  Pool2 = ExAllocatePool2(256LL, v11 + Size + 32, 538996553LL);
  InputBuffer = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v15 = *a4;
    *(_DWORD *)Pool2 = 0;
    *(_OWORD *)(Pool2 + 16) = v15;
    *(_DWORD *)(Pool2 + 12) = a7;
    memmove((void *)(Pool2 + 32), a3, v11);
    memmove((char *)InputBuffer + v11 + 32, Src, Size);
    InputBuffer[1] = v11 + 32;
    InputBuffer[2] = Size;
    v14 = sub_14093F428(0x520008u, 1u, 0LL, a2, InputBuffer, v11 + Size + 32, 0LL, 0, 0LL);
    ExFreePoolWithTag(InputBuffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
