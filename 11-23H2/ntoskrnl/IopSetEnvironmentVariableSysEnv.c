/*
 * XREFs of IopSetEnvironmentVariableSysEnv @ 0x140951550
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140951208 (IopIssueSystemEnvironmentRequest.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetEnvironmentVariableSysEnv(
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
  Pool2 = ExAllocatePool2(256LL, v11 + Size + 32, 2035511113LL);
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
    v14 = IopIssueSystemEnvironmentRequest(0x520008u, 1u, 0LL, a2, InputBuffer, v11 + Size + 32, 0LL, 0, 0LL);
    ExFreePoolWithTag(InputBuffer, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
