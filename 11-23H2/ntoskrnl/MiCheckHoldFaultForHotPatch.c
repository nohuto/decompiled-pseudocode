/*
 * XREFs of MiCheckHoldFaultForHotPatch @ 0x1406421F0
 * Callers:
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockFaultWorkingSet @ 0x1403625E4 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiCheckHoldFaultForHotPatch(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  bool v5; // zf
  unsigned int v7; // r15d
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r14
  _QWORD *v12; // rcx
  volatile LONG *SharedVm; // rbx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v17; // [rsp+50h] [rbp-10h]

  v4 = a2[7];
  v5 = (a2[1] & 2) == 0;
  v17 = 0LL;
  v15 = 0LL;
  Object = 0LL;
  if ( v5 || *a2 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  v7 = 0;
  v8 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v10 = *a2;
    do
    {
      v11 = v9;
      if ( v10 >= v9[2] && v10 <= v9[3] )
        break;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != v8 );
    if ( v9 == v8 )
      break;
    LOWORD(Object) = 0;
    DWORD1(Object) = 0;
    v17 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    v12 = (_QWORD *)v11[5];
    if ( (_QWORD *)*v12 != v11 + 4 )
      __fastfail(3u);
    *((_QWORD *)&v15 + 1) = v11[5];
    *(_QWORD *)&v15 = v11 + 4;
    *v12 = &v15;
    v11[5] = &v15;
    MiUnlockFaultWorkingSet((__int64)(a2 + 7), (__int64)&v15, a3, a4);
    v7 = 1;
    KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
    SharedVm = (volatile LONG *)MiGetSharedVm(v4);
    ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v7;
}
