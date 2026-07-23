/*
 * XREFs of sub_140951B40 @ 0x140951B40
 * Callers:
 *     sub_1409518C0 @ 0x1409518C0 (sub_1409518C0.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140951B40(__int64 a1, ULONG a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // rbx
  int v8; // eax
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *Pool2; // rax
  _DWORD *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  __int64 ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = a1;
  v4 = *a4;
  LODWORD(ProcNumber) = 0;
  v8 = v4[4];
  if ( v8 == v4[3] )
  {
    v9 = v8 + 4;
    v10 = 4 * v8 + 20;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * (v8 + 4) + 20), 1366322768LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v13 = qword_140C448A8;
      v14 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v14 )
        v14 = 815;
      *(_DWORD *)(qword_140C448A8 + 33272) = v14;
      v15 = *(_DWORD *)(v13 + 33276);
      if ( !v15 )
        v15 = 10;
      *(_DWORD *)(v13 + 33276) = v15;
      return 3221225626LL;
    }
    memmove(Pool2, v4, v10);
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v12;
    v12[3] = v9;
  }
  if ( a2 != -1 )
  {
    KeGetProcessorNumberFromIndex(a2, (PPROCESSOR_NUMBER)&ProcNumber);
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)ProcNumber) |= 1LL << SBYTE2(ProcNumber);
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *a4 = v4;
  return result;
}
