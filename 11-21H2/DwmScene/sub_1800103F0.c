/*
 * XREFs of sub_1800103F0 @ 0x1800103F0
 * Callers:
 *     sub_18000F6D0 @ 0x18000F6D0 (sub_18000F6D0.c)
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

char __fastcall sub_1800103F0(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rbx
  HANDLE v13; // rax

  if ( !a3 )
  {
    v6 = *(volatile signed __int32 **)a1;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        v7 = *(volatile signed __int32 **)a1;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)v7);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
    }
LABEL_13:
    LOBYTE(v10) = 1;
    return (char)v10;
  }
  v9 = GetProcessHeap();
  v10 = (volatile signed __int32 *)HeapAlloc(v9, 0, a3 + 4);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0;
    if ( a2 )
      sub_18001060C(v10 + 1, a3, a2, a3);
    if ( *(_QWORD *)a1 && _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 )
    {
      v12 = *(volatile signed __int32 **)a1;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, (LPVOID)v12);
    }
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = a3;
    _InterlockedIncrement(v11);
    goto LABEL_13;
  }
  return (char)v10;
}
