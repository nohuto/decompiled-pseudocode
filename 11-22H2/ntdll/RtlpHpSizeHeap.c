/*
 * XREFs of RtlpHpSizeHeap @ 0x18003AE30
 * Callers:
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x18003B350 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043970 (RtlpHpSegReAlloc.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800633DC (RtlpHpVsChunkSize.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063F88 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x18008777C (RtlpHpLargeAllocSize.c)
 *     RtlCompareMemory @ 0x1800A3970 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  unsigned __int64 DescriptorValidateSafe; // rbx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rsi
  char v12; // al
  char v13; // cl
  char v14; // cl
  unsigned __int64 v15; // r9
  unsigned int v16; // edx
  int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  char v21; // cl
  unsigned __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // r8
  unsigned __int16 v25; // r11
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rsi
  __int64 v31; // rax
  signed __int32 v32[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 20) | a3;
  DescriptorValidateSafe = 0LL;
  v7 = *(_DWORD *)(a1 + 220);
  v8 = 0;
  if ( v7 )
    LOBYTE(v8) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v9 = v3 | 1;
  if ( !v8 )
    v9 = v3;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v31 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801859B8) >> 20));
    if ( !v31 || (v10 = v31 - 1, v10 == 2) )
    {
      v29 = RtlpHpLargeAllocSize(a1, a2, v9, 0LL);
      goto LABEL_30;
    }
  }
  v11 = 192LL * v10 + a1 + 320;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v11, a2);
  }
  else if ( (v11 ^ RtlpHpHeapGlobals ^ *(_QWORD *)((*(_QWORD *)v11 & a2) + 0x10) ^ *(_QWORD *)v11 & a2) == 0xA2E64EADA2E64EADuLL )
  {
    DescriptorValidateSafe = (*(_QWORD *)v11 & a2)
                           + 32
                           * ((unsigned __int64)((unsigned int)a2 - (*(_DWORD *)v11 & (unsigned int)a2)) >> *(_BYTE *)(v11 + 8));
  }
  if ( !DescriptorValidateSafe )
    return -1LL;
  v12 = *(_BYTE *)(DescriptorValidateSafe + 24);
  if ( (v12 & 1) == 0 )
    return -1LL;
  if ( (v12 & 2) != 0 )
  {
    if ( (v12 & 0xCu) < 8 && (((1 << *(_BYTE *)(v11 + 8)) - 1) & a2) != 0 )
      return -1LL;
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v13 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v13 & 3) != 3 || (v13 & 0xCu) < 8 || !DescriptorValidateSafe )
      return -1LL;
  }
  v14 = *(_BYTE *)(v11 + 8);
  v15 = (*(_QWORD *)v11 & DescriptorValidateSafe)
      + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v11 & DescriptorValidateSafe)) >> 5 << v14);
  if ( a2 <= v15 )
  {
    v29 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v14)
        - *(unsigned int *)(DescriptorValidateSafe + 4);
  }
  else if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 8 )
  {
    v16 = qword_180184E48 ^ *(_DWORD *)(v15 + 40) ^ ((unsigned int)v15 >> 12);
    v17 = (unsigned __int16)v16;
    v18 = *(_QWORD *)(*(_QWORD *)(v11 + 24)
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v16 + 15) >> 4]
                    + 128);
    v19 = a2 - HIWORD(v16) - v15;
    v20 = *(_DWORD *)(v18 + 72);
    v21 = *(_BYTE *)(v18 + 76);
    if ( v20 )
    {
      v22 = (v19 * (unsigned __int64)v20) >> v21;
      v23 = v19 - v22 * v17;
    }
    else
    {
      LODWORD(v22) = v19 >> v21;
      v23 = ((1 << v21) - 1) & v19;
    }
    if ( v23 )
    {
      v29 = -1LL;
    }
    else
    {
      v24 = *(_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned int)(2 * v22) >> 6) + 48) >> ((2 * v22) & 0x3F);
      if ( (v24 & 1) != 0 )
      {
        v25 = *(_WORD *)(v15 + 40) ^ ((unsigned int)v15 >> 12);
        v26 = (unsigned __int16)qword_180184E48 ^ v25;
        if ( (v24 & 2) != 0 )
        {
          v27 = (unsigned __int16)qword_180184E48 ^ (unsigned __int64)v25;
          if ( (*(_WORD *)(v27 + a2 - 2) & 0x4000) != 0 )
            _InterlockedOr(v32, 0);
          v28 = *(_WORD *)(v27 + a2 - 2);
          if ( v28 < 0 )
            --v26;
          else
            v26 -= v28 & 0x3FFF;
        }
        v29 = v26;
      }
      else
      {
        v29 = -1LL;
      }
    }
  }
  else
  {
    v29 = RtlpHpVsChunkSize(*(_QWORD *)(v11 + 32), a2, v3, 0LL);
  }
LABEL_30:
  if ( v29 == -1LL
    || (v9 & 0x10000000) == 0
    || RtlCompareMemory((const void *)(v29 + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
  {
    return v29;
  }
  return -1LL;
}
