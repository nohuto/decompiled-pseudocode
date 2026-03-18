/*
 * XREFs of EtwpAllocatePayloadFilterData @ 0x1409F49A4
 * Callers:
 *     EtwpAllocateFilter @ 0x1406CEEB0 (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     EtwpValidatePayloadFilter @ 0x1409F5758 (EtwpValidatePayloadFilter.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocatePayloadFilterData(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v7; // edi
  _DWORD *Pool2; // rax
  _DWORD *v9; // rbx
  size_t v10; // r8
  const void *v11; // rdx

  v3 = *(_DWORD *)(a2 + 8);
  result = EtwpValidatePayloadFilter(a1, *(_QWORD *)a2, v3);
  v7 = result;
  if ( (int)result >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, v3 + 8, 1182233669LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      v10 = *(unsigned int *)(a2 + 8);
      v11 = *(const void **)a2;
      *Pool2 = 1;
      memmove(Pool2 + 2, v11, v10);
      result = v7;
      *a3 = v9;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
