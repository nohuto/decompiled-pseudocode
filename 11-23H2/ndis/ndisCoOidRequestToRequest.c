/*
 * XREFs of ndisCoOidRequestToRequest @ 0x1C00C08C4
 * Callers:
 *     NdisCoOidRequest @ 0x1C00C0A00 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1C00C13F0 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // esi
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // r14
  int *v15; // r15
  int v16; // ecx

  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406);
  v10 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) |= 0x400u;
    *(_QWORD *)(Pool2 + 8) = a5;
    v12 = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(Pool2 + 32) = v12;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = (_DWORD *)(Pool2 + 60);
        *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a5 + 32);
        v15 = (int *)(Pool2 + 64);
        *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a5 + 40);
        *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(a5 + 48);
        *(_DWORD *)(Pool2 + 60) = *(_DWORD *)(a5 + 52);
        *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a5 + 56);
LABEL_9:
        v11 = (*a1)(a2, a3, a4, Pool2);
        if ( v11 == 259 )
          return v11;
        v16 = *v15;
        *(_DWORD *)(a5 + 52) = *v14;
        *(_DWORD *)(a5 + 56) = v16;
LABEL_11:
        ExFreePoolWithTag(v10, 0);
        return v11;
      }
      if ( v13 == 11 )
      {
        v11 = -1073741637;
        goto LABEL_11;
      }
    }
    v15 = (int *)(Pool2 + 64);
    *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a5 + 32);
    v14 = (_DWORD *)(Pool2 + 60);
    *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a5 + 40);
    *(_DWORD *)(Pool2 + 56) = *(_DWORD *)(a5 + 48);
    *(_DWORD *)(Pool2 + 60) = *(_DWORD *)(a5 + 52);
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a5 + 56);
    goto LABEL_9;
  }
  return (unsigned int)-1073741670;
}
