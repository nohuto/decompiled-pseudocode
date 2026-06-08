/*
 * XREFs of GetPackageAffinity @ 0x1C002C058
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     HwDebugCreateRegisterGroup @ 0x1C002BCA8 (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageAffinity(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *Pool2; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rdi
  unsigned __int16 i; // r14
  __int64 v10; // rax
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  KeReinitializeAffinityEx(a2);
  v11 = 0;
  v12 = 3;
  v4 = NtQuerySystemInformationEx(107LL, &v12, 4LL, 0LL, 0, &v11);
  if ( v4 == -1073741820 && v11 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, v11, 1919119952LL);
    if ( Pool2 )
    {
      v12 = 3;
      v4 = NtQuerySystemInformationEx(107LL, &v12, 4LL, Pool2, v11, &v11);
      if ( v4 >= 0 && v11 )
      {
        v6 = 0;
        v7 = Pool2;
        v4 = -1073741275;
        while ( 1 )
        {
          for ( i = 0; i < *((_WORD *)v7 + 15); ++i )
            KeAddGroupAffinityEx(a2, LOWORD(v7[2 * i + 5]), v7[2 * i + 4]);
          if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a1 + 56)) )
            break;
          v10 = *((unsigned int *)v7 + 1);
          v6 += v10;
          v7 = (_QWORD *)((char *)v7 + v10);
          KeReinitializeAffinityEx(a2);
          if ( v6 >= v11 )
            goto LABEL_11;
        }
        v4 = 0;
      }
LABEL_11:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
