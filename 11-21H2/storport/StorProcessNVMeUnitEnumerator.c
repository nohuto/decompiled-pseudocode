/*
 * XREFs of StorProcessNVMeUnitEnumerator @ 0x1C0065FFC
 * Callers:
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memcmp @ 0x1C0023F70 (memcmp.c)
 *     StorDeleteNVMeIdentity @ 0x1C0065CC0 (StorDeleteNVMeIdentity.c)
 */

__int64 __fastcall StorProcessNVMeUnitEnumerator(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int16 v9; // cx
  __int64 v10; // r8
  __int16 v11; // dx
  __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax
  __int64 *v15; // rdx

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 92) )
  {
    if ( !*(_BYTE *)(a2 + 93) )
      return StorDeleteNVMeIdentity(a2 + 32);
    *(_DWORD *)(a2 + 88) = 1;
  }
  else if ( *(_BYTE *)(a2 + 93) )
  {
    v5 = *(_QWORD **)(a2 + 80);
    if ( v5 )
    {
      v6 = *(_QWORD **)(v3 + 152);
      if ( v6 )
      {
        v7 = v5[1] - v6[1];
        if ( !v7 )
          v7 = v5[2] - v6[2];
        if ( !v7 && !memcmp((char *)v5 + 25, (char *)v6 + 25, 0x40uLL) )
        {
          v8 = *(_QWORD *)((char *)v5 + 90) - *(_QWORD *)((char *)v6 + 90);
          if ( !v8 )
            v8 = *(_QWORD *)((char *)v5 + 98) - *(_QWORD *)((char *)v6 + 98);
          if ( v8 )
          {
            v9 = *(_WORD *)(v3 + 114);
            v10 = *(_QWORD *)(v3 + 120);
            v11 = *(_WORD *)(v3 + 112);
            *(_QWORD *)(v3 + 120) = *(_QWORD *)(a2 + 48);
            *(_WORD *)(v3 + 112) = *(_WORD *)(a2 + 40);
            *(_WORD *)(v3 + 114) = *(_WORD *)(a2 + 42);
            *(_QWORD *)(a2 + 48) = v10;
            *(_WORD *)(a2 + 40) = v11;
            *(_WORD *)(a2 + 42) = v9;
            v12 = *(_QWORD *)(v3 + 24);
            if ( v12 )
            {
              v13 = *(_BYTE *)(v12 + 108);
              if ( (v13 & 0x20) == 0 )
                *(_BYTE *)(v12 + 108) = v13 | 0x20;
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
    v15 = (__int64 *)a1[16];
    if ( (_QWORD *)*v15 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *(_QWORD *)(result + 8) = v15;
    *v15 = result;
    a1[16] = result;
  }
  return result;
}
