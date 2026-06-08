/*
 * XREFs of GetPackageAffinity @ 0x1C002FF70
 * Callers:
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0037568 (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageAffinity(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _QWORD *Pool2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v7; // rdi
  unsigned __int16 i; // r14
  __int64 v9; // rax
  unsigned int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  KeReinitializeAffinityEx(a2);
  v11 = 0;
  v12 = 3;
  v3 = NtQuerySystemInformationEx(107LL, &v12, 4LL, 0LL, 0, &v11);
  if ( v3 == -1073741820 && v11 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, v11, 1919119952LL);
    if ( Pool2 )
    {
      v12 = 3;
      v3 = NtQuerySystemInformationEx(107LL, &v12, 4LL, Pool2, v11, &v11);
      if ( v3 >= 0 )
      {
        v5 = v11;
        if ( v11 )
        {
          v6 = 0;
          v7 = Pool2;
          v3 = -1073741275;
          while ( v6 < v5 )
          {
            for ( i = 0; i < *((_WORD *)v7 + 15); ++i )
              KeAddGroupAffinityEx(a2, LOWORD(v7[2 * i + 5]), v7[2 * i + 4]);
            if ( (unsigned int)KeCheckProcessorAffinityEx(a2) )
            {
              v3 = 0;
              break;
            }
            v9 = *((unsigned int *)v7 + 1);
            v6 += v9;
            v7 = (_QWORD *)((char *)v7 + v9);
            KeReinitializeAffinityEx(a2);
            v5 = v11;
          }
        }
      }
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
