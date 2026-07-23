/*
 * XREFs of RtlpSubSegmentInitialize @ 0x18002D530
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x1801174AC (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180118780 (RtlpSubSegmentDebugInitialize.c)
 */

struct _PEB *__fastcall RtlpSubSegmentInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v8; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  int v17; // r15d
  unsigned __int64 i; // rax
  int v19; // ecx
  int v20; // edx
  __int16 v21; // cx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  signed __int64 v25; // rdx
  __int64 v26; // rtt
  __int64 v27; // rax
  struct _TEB *v28; // r15
  unsigned __int16 HeapData_high; // ax
  __int64 v30; // rcx
  unsigned __int16 v31; // si
  __int16 v32; // ax
  __int64 v33; // rdx
  __int16 v34; // bx
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  __int16 RandomValue32; // ax
  signed __int32 v47[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-38h]
  unsigned __int64 v49; // [rsp+48h] [rbp-30h]
  __int64 v50; // [rsp+88h] [rbp+10h]
  int v51; // [rsp+A8h] [rbp+30h]
  unsigned __int32 v52; // [rsp+A8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 43);
  v12 = *(unsigned __int8 *)(a6 + 2);
  if ( (_BYTE)v8 )
    v13 = 192 * v8 + *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL;
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  v50 = v13;
  v14 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v14 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v14, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v15 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v48 = v15 >> 4;
  v16 = 0;
  v17 = RtlpLFHKey;
  v49 = ((((unsigned __int64)(unsigned int)((a5 - 64) / v15) + 31) >> 3) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v49; i + v15 + 8 <= a3 + a5; i += v15 )
  {
    v19 = (unsigned __int16)v16 << 8;
    v20 = *(_DWORD *)(a1 + 24) ^ v17 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v19;
    *(_BYTE *)(i + 15) = 0x80;
    *(_DWORD *)(i + 8) = v20;
  }
  *(_QWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  memset((void *)(a3 + 48), 0, ((unsigned __int64)v16 + 7) >> 3);
  if ( (v16 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)v16 >> 6)) |= ~((1LL << (v16 & 0x3F)) - 1);
  v21 = v48;
  *(_WORD *)(a2 + 36) = v48;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v50;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)(a2 + 16) = 0LL;
  LOWORD(v51) = v49;
  HIWORD(v51) = 16 * v21;
  *(_DWORD *)(a3 + 24) = v51 ^ v17 ^ a3 ^ a1;
  if ( !*(_DWORD *)(v50 + 164) )
  {
    v42 = *(_QWORD *)v50;
    v43 = *(_DWORD *)(*(_QWORD *)v50 + 36LL);
    if ( v43 >= 0x20 )
    {
LABEL_24:
      *(_WORD *)(v50 + 176) = 0;
      goto LABEL_11;
    }
    v44 = v43 + 4;
LABEL_26:
    *(_DWORD *)(v42 + 36) = v44;
    goto LABEL_24;
  }
  if ( ++*(_WORD *)(v50 + 176) > 0x1Cu )
  {
    v42 = *(_QWORD *)v50;
    v45 = *(_DWORD *)(*(_QWORD *)v50 + 36LL);
    if ( !v45 )
      goto LABEL_24;
    v44 = v45 - 4;
    goto LABEL_26;
  }
  do
  {
LABEL_11:
    v22 = *(_QWORD *)(v50 + 160);
    v23 = HIDWORD(v22) - 1;
    v24 = (unsigned int)v22 + v16;
    if ( (int)v16 > 0 )
      v23 = HIDWORD(v22) + 1;
    v25 = (unsigned int)v24 | (unsigned __int64)(v23 << 32);
    v26 = *(_QWORD *)(v50 + 160);
  }
  while ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 160), v25, v22) );
  v27 = *(_QWORD *)v50;
  *(_DWORD *)(v50 + 168) = ++*(_DWORD *)(v27 + 32);
  v28 = NtCurrentTeb();
  HeapData_high = HIWORD(v28->HeapData);
  v30 = HeapData_high;
  v31 = (unsigned __int8)HeapData_high;
  if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
  {
    LOWORD(v30) = HIBYTE(HeapData_high);
    RandomValue32 = RtlpHeapGenerateRandomValue32(v30, v25, v24);
    v32 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v32 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
  }
  HIWORD(v28->HeapData) = v32;
  v33 = (RtlpLowFragHeapRandomData[v31] % v16) << 16;
  HIWORD(v52) = RtlpLowFragHeapRandomData[v31] % v16;
  LOWORD(v52) = v16;
  _InterlockedOr(v47, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v52, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v34 = HIWORD(NtCurrentTeb()->HeapData);
    v35 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v52, v33, v24) << 32;
    *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)v34 >> 3)] = (v35 | (unsigned int)RtlpHeapGenerateRandomValue32(
                                                                                                    v37,
                                                                                                    v36,
                                                                                                    v38)) & 0x7F7F7F7F7F7F7F7FLL;
  }
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v41 = (__int64)result->SharedData + 550;
  }
  else
  {
    v41 = 2147353472LL;
  }
  if ( *(_BYTE *)v41 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)RtlpLogHeapSubSegmentInitialize(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(a2 + 8),
                              *(unsigned __int16 *)(a2 + 36),
                              *(unsigned __int16 *)(a2 + 40),
                              *(unsigned __int8 *)(a2 + 43));
  }
  return result;
}
