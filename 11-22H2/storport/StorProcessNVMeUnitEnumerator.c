/*
 * XREFs of StorProcessNVMeUnitEnumerator @ 0x1C0074ADC
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memcmp @ 0x1C0023500 (memcmp.c)
 *     StorDeleteNVMeIdentity @ 0x1C00747A0 (StorDeleteNVMeIdentity.c)
 */

__int64 __fastcall StorProcessNVMeUnitEnumerator(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  char v5; // al
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int16 v10; // cx
  __int64 v11; // r8
  __int16 v12; // dx
  __int64 v13; // rcx
  char v14; // al
  __int64 result; // rax
  __int64 *v16; // rdx

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 93);
  if ( *(_BYTE *)(a2 + 92) )
  {
    if ( !v5 )
      return StorDeleteNVMeIdentity(a2 + 32);
    *(_DWORD *)(a2 + 88) = 1;
  }
  else if ( v5 )
  {
    v6 = *(_QWORD **)(a2 + 80);
    if ( v6 )
    {
      v7 = *(_QWORD **)(v3 + 152);
      if ( v7 )
      {
        v8 = v6[1] - v7[1];
        if ( !v8 )
          v8 = v6[2] - v7[2];
        if ( !v8 && !memcmp((char *)v6 + 25, (char *)v7 + 25, 0x40uLL) )
        {
          v9 = *(_QWORD *)((char *)v6 + 90) - *(_QWORD *)((char *)v7 + 90);
          if ( !v9 )
            v9 = *(_QWORD *)((char *)v6 + 98) - *(_QWORD *)((char *)v7 + 98);
          if ( v9 )
          {
            v10 = *(_WORD *)(v3 + 114);
            v11 = *(_QWORD *)(v3 + 120);
            v12 = *(_WORD *)(v3 + 112);
            *(_QWORD *)(v3 + 120) = *(_QWORD *)(a2 + 48);
            *(_WORD *)(v3 + 112) = *(_WORD *)(a2 + 40);
            *(_WORD *)(v3 + 114) = *(_WORD *)(a2 + 42);
            *(_QWORD *)(a2 + 48) = v11;
            *(_WORD *)(a2 + 40) = v12;
            *(_WORD *)(a2 + 42) = v10;
            v13 = *(_QWORD *)(v3 + 24);
            if ( v13 )
            {
              v14 = *(_BYTE *)(v13 + 108);
              if ( (v14 & 0x20) == 0 )
                *(_BYTE *)(v13 + 108) = v14 | 0x20;
            }
            *(_DWORD *)(a2 + 88) = 2;
          }
          return StorDeleteNVMeIdentity(a2 + 32);
        }
      }
    }
    *(_BYTE *)(v3 + 448) |= 0x40u;
  }
  result = RaidAllocatePool(64LL, 96LL, 1950703954LL, *(_QWORD *)(*a1 + 8LL));
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)a2;
    *(_OWORD *)(result + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(result + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(result + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(result + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(result + 80) = *(_OWORD *)(a2 + 80);
    if ( *(_DWORD *)(a2 + 88) == 1 )
      a1[7] = 0LL;
    result += 16LL;
    v16 = (__int64 *)a1[16];
    if ( (_QWORD *)*v16 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *(_QWORD *)(result + 8) = v16;
    *v16 = result;
    a1[16] = result;
  }
  return result;
}
