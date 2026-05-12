/*
 * XREFs of RaidBusEnumeratorProcessBusUnit @ 0x1C00177FC
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C00165A8 (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorDeleteScsiIdentity @ 0x1C0017958 (StorDeleteScsiIdentity.c)
 *     StorCompareScsiIdentity @ 0x1C0017A48 (StorCompareScsiIdentity.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessBusUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  char v5; // al
  __int64 *v6; // r15
  __int64 *v7; // r14
  int v8; // eax
  __int64 result; // rax
  __int64 *v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  void *Pool; // rax
  void *v14; // rsi
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int16 v25; // dx
  __int64 v26; // rcx
  char v27; // al

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 93);
  if ( *(_BYTE *)(a2 + 92) )
  {
    if ( !v5 )
      return StorDeleteScsiIdentity(a2 + 32);
    *(_DWORD *)(a2 + 88) = 1;
  }
  else if ( v5 )
  {
    v6 = (__int64 *)(a2 + 32);
    v7 = (__int64 *)(v3 + 104);
    v8 = StorCompareScsiIdentity(a2 + 32, v3 + 104);
    switch ( v8 )
    {
      case 2:
        v11 = (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 3LL) | (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 2LL) << 8))
            + 4;
        if ( v11 > 0xFFFF )
          v11 = 0xFFFF;
        v12 = v11;
        Pool = (void *)RaidAllocatePool(64LL, v11, 842096978LL, *(_QWORD *)(*a1 + 8LL));
        v14 = Pool;
        if ( Pool )
        {
          memmove(Pool, *(const void **)(a2 + 64), v12);
          v15 = *(void **)(v3 + 136);
          if ( v15 )
            ExFreePoolWithTag(v15, 0x32316152u);
          *(_QWORD *)(v3 + 136) = v14;
        }
        goto LABEL_6;
      case 3:
        v16 = *(_QWORD *)(v3 + 152);
        *(_QWORD *)(v3 + 152) = *(_QWORD *)(a2 + 80);
        v17 = *(_QWORD *)(a2 + 72);
        *(_QWORD *)(a2 + 80) = v16;
        v18 = *(_QWORD *)(v3 + 144);
        *(_QWORD *)(v3 + 144) = v17;
        v19 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 72) = v18;
        v20 = *(_QWORD *)(v3 + 136);
        *(_QWORD *)(v3 + 136) = v19;
        v21 = *v6;
        *(_QWORD *)(a2 + 64) = v20;
        v22 = *v7;
        *v7 = v21;
        v23 = *(_QWORD *)(a2 + 48);
        *v6 = v22;
        LOWORD(v22) = *(_WORD *)(v3 + 114);
        v24 = *(_QWORD *)(v3 + 120);
        v25 = *(_WORD *)(v3 + 112);
        *(_QWORD *)(v3 + 120) = v23;
        *(_WORD *)(v3 + 112) = *(_WORD *)(a2 + 40);
        *(_WORD *)(v3 + 114) = *(_WORD *)(a2 + 42);
        *(_QWORD *)(a2 + 48) = v24;
        *(_WORD *)(a2 + 40) = v25;
        *(_WORD *)(a2 + 42) = v22;
        v26 = *(_QWORD *)(v3 + 24);
        if ( v26 )
        {
          v27 = *(_BYTE *)(v26 + 108);
          if ( (v27 & 0x20) == 0 )
            *(_BYTE *)(v26 + 108) = v27 | 0x20;
        }
        goto LABEL_6;
      case 0:
LABEL_6:
        *(_DWORD *)(a2 + 88) = 2;
        return StorDeleteScsiIdentity(a2 + 32);
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + 448LL) |= 0x40u;
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
    v10 = (__int64 *)a1[16];
    if ( (_QWORD *)*v10 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *(_QWORD *)(result + 8) = v10;
    *v10 = result;
    a1[16] = result;
  }
  return result;
}
