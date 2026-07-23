/*
 * XREFs of sub_1407D57AC @ 0x1407D57AC
 * Callers:
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     sub_1402F6750 @ 0x1402F6750 (sub_1402F6750.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_14035A850 @ 0x14035A850 (sub_14035A850.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407D56C0 (IoAllocateMiniCompletionPacket.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D57AC(char a1, char a2)
{
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdi
  int v8; // edx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  v9 = 0LL;
  if ( a1 == 4 )
  {
    v8 = 80;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = *((_QWORD *)CurrentPrcb + 270);
    ++*(_DWORD *)(v5 + 20);
    result = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v5);
    if ( result )
      goto LABEL_3;
    ++*(_DWORD *)(v5 + 24);
    v7 = *((_QWORD *)CurrentPrcb + 271);
    ++*(_DWORD *)(v7 + 20);
    result = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v7);
    if ( result )
      goto LABEL_3;
    ++*(_DWORD *)(v7 + 24);
    v8 = 56;
    if ( a2 )
    {
      v3 = 3;
      result = ExAllocatePool2(65LL, 56LL, 544236361LL);
      goto LABEL_9;
    }
  }
  DWORD2(v9) = 0;
  LOBYTE(v9) = 1;
  result = ExAllocatePool3(64, v8, 544236361, (unsigned int)&v9, 1);
LABEL_9:
  if ( result )
LABEL_3:
    *(_BYTE *)(result + 16) = v3;
  return result;
}
