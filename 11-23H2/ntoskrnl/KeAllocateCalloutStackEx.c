/*
 * XREFs of KeAllocateCalloutStackEx @ 0x1408717E0
 * Callers:
 *     KeAllocateCalloutStack @ 0x140850760 (KeAllocateCalloutStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     KeInitializeMutex @ 0x14033B040 (KeInitializeMutex.c)
 *     MmDeleteKernelStack @ 0x1403D6820 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned __int8 v5; // si
  _DWORD *Pool2; // rbx
  unsigned int v7; // edi
  __int64 *v8; // r14
  __int64 KernelStack; // rax

  v4 = a2;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225711LL;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225713LL;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 8LL * a2 + 64, 1666409803LL);
  if ( !Pool2 )
    return 3221225495LL;
  v7 = 0;
  if ( (_BYTE)v4 )
  {
    v8 = (__int64 *)(Pool2 + 16);
    while ( 1 )
    {
      KernelStack = MmCreateKernelStack(v5 != 0 ? 5 : 0, 0, 0LL);
      if ( !KernelStack )
        break;
      *v8 = KernelStack;
      ++v7;
      ++v8;
      if ( v7 >= v4 )
        goto LABEL_10;
    }
    while ( v7 )
      MmDeleteKernelStack(*(_QWORD *)&Pool2[2 * --v7 + 16], v5);
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  else
  {
LABEL_10:
    *Pool2 = 1801548883;
    *((_BYTE *)Pool2 + 4) = v5;
    *((_BYTE *)Pool2 + 5) = v4;
    *((_BYTE *)Pool2 + 6) = 0;
    KeInitializeMutex((PRKMUTEX)(Pool2 + 2), 0);
    *a4 = Pool2;
    return 0LL;
  }
}
