/*
 * XREFs of sub_1403813C0 @ 0x1403813C0
 * Callers:
 *     sub_14023807C @ 0x14023807C (sub_14023807C.c)
 *     sub_140381384 @ 0x140381384 (sub_140381384.c)
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 *     sub_1403823DC @ 0x1403823DC (sub_1403823DC.c)
 * Callees:
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 *     sub_140367008 @ 0x140367008 (sub_140367008.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405FD49C @ 0x1405FD49C (sub_1405FD49C.c)
 */

__int64 __fastcall sub_1403813C0(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  int v5; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // ebx
  _QWORD *v10; // r14
  int v11; // r9d
  _QWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp+10h] BYREF

  v14 = a1;
  BugCheckParameter4 = 0LL;
  v5 = *(_DWORD *)(a2 + 12);
  v6 = a4;
  v8 = 1;
  if ( v5 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = *(_QWORD **)a2;
      v14 = 0LL;
      sub_1402210C0(v10, 0x1000uLL, &v14, 0LL);
      v11 = v14;
      if ( !(_DWORD)v14 )
        v11 = 1;
      if ( v11 == v5 )
      {
        if ( (a3 & 1) != 0 )
        {
          sub_140367008((unsigned __int16)v10, (unsigned __int64)v10, 4096LL, 4u);
          *(_DWORD *)(a2 + 12) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          sub_1405FD49C(v10, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v6, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    sub_140367008(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    v12 = *(_QWORD **)a2;
    v14 = 0LL;
    sub_1402210C0(v12, 0x1000uLL, &v14, 0LL);
    v13 = v14;
    *(_DWORD *)(a2 + 12) = v14;
    if ( !v13 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
