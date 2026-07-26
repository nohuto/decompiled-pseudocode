/*
 * XREFs of ndisCoOidRequestToRequest @ 0x1C00BB798
 * Callers:
 *     NdisCoOidRequest @ 0x1C00BB8C0 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1C00BC260 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // edx

  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406);
  v7 = Pool2;
  if ( Pool2 )
  {
    v9 = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(Pool2 + 24) |= 0x400u;
    *(_DWORD *)(Pool2 + 32) = v9;
    *(_QWORD *)(Pool2 + 8) = a5;
    if ( v9 == 12 )
    {
      v8 = -1073741637;
    }
    else
    {
      v10 = *(_QWORD *)(a5 + 40);
      v11 = *(_DWORD *)(a5 + 48);
      v12 = *(_DWORD *)(a5 + 52);
      v13 = *(_DWORD *)(a5 + 56);
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a5 + 32);
      *(_QWORD *)(v7 + 48) = v10;
      *(_DWORD *)(v7 + 56) = v11;
      *(_DWORD *)(v7 + 60) = v12;
      *(_DWORD *)(v7 + 64) = v13;
      v8 = (*a1)(a2, a3, a4, v7);
      if ( v8 == 259 )
        return v8;
      v14 = *(_DWORD *)(v7 + 64);
      *(_DWORD *)(a5 + 52) = *(_DWORD *)(v7 + 60);
      *(_DWORD *)(a5 + 56) = v14;
    }
    ExFreePoolWithTag((PVOID)v7, 0);
    return v8;
  }
  return (unsigned int)-1073741670;
}
