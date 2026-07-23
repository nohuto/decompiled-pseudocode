/*
 * XREFs of RtlCSparseBitmapStart @ 0x180120AFC
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x1800B1B08 (RtlpHpVaMgrCtxStart.c)
 *     RtlHpHeapManagerStart @ 0x18011F4D4 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180022A74 (RtlpHpEnvAllocVA.c)
 */

NTSTATUS __fastcall RtlCSparseBitmapStart(PVOID *BaseAddress, void *a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rcx
  bool v11; // cc
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-28h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF

  BaseAddress[3] = 0LL;
  BaseAddress[5] = 0LL;
  *((_BYTE *)BaseAddress + 49) = 0;
  *((_BYTE *)BaseAddress + 50) = a4;
  BaseAddress[2] = a2;
  *((_BYTE *)BaseAddress + 48) = a4 != 0;
  if ( (unsigned __int64)a2 > 0x7FFFFFFFFFFFFFFFLL )
    return -2147483643;
  v6 = ((((unsigned __int64)a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = *((unsigned int *)BaseAddress + 13);
  v17 = v7;
  if ( ((v7 >> 12) + 7) >> 3 > v8 )
    return -2147483643;
  RegionSize = v7 + v6;
  result = RtlpHpEnvAllocVA(BaseAddress + 1, &RegionSize, 0LL, 1056768, 4u, v12, v14, 0LL);
  if ( result >= 0 )
  {
    _BitScanForward64(&v9, RegionSize);
    v10 = (char *)BaseAddress[1] + v6;
    *((_BYTE *)BaseAddress + 51) = v9;
    v11 = v17 <= 0x1000;
    *BaseAddress = v10;
    if ( v11 )
    {
      result = RtlpHpEnvAllocVA(BaseAddress, &v17, 0LL, 1073745920, 4u, v13, v15, 0LL);
      if ( result < 0 )
        return result;
      BaseAddress[7] = (PVOID)1;
    }
    return 0;
  }
  return result;
}
