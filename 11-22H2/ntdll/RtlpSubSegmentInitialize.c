/*
 * XREFs of RtlpSubSegmentInitialize @ 0x180041A40
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180117898 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801199C8 (RtlpSubSegmentDebugInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
  unsigned int v19; // ecx
  int v20; // edx
  __int16 v21; // cx
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  __int64 v28; // rax
  struct _TEB *v29; // r15
  unsigned __int16 HeapData_high; // ax
  __int64 v31; // rcx
  unsigned __int16 v32; // si
  __int16 v33; // ax
  __int64 v34; // rdx
  __int16 v35; // bx
  unsigned __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  __int16 RandomValue32; // ax
  signed __int32 v48[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-38h]
  unsigned __int64 v50; // [rsp+48h] [rbp-30h]
  __int64 v51; // [rsp+88h] [rbp+10h]
  unsigned __int32 v52; // [rsp+A8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 43);
  v12 = *(unsigned __int8 *)(a6 + 2);
  if ( (_BYTE)v8 )
    v13 = 192 * v8 + *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL;
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  v51 = v13;
  v14 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v14 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v14, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v15 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v49 = v15 >> 4;
  v16 = 0;
  v17 = RtlpLFHKey;
  v50 = ((((unsigned __int64)(unsigned int)((a5 - 64) / v15) + 31) >> 3) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v50; i + v15 + 8 <= a3 + a5; i += v15 )
  {
    v19 = *(_DWORD *)(i + 12) & 0xFF0000FF;
    *(_DWORD *)(i + 8) = *(_DWORD *)(a1 + 24) ^ v17 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    v20 = (unsigned __int16)v16++;
    *(_DWORD *)(i + 12) = v19 | (v20 << 8);
    *(_BYTE *)(i + 15) = 0x80;
  }
  *(_QWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  memset_thunk_772440563353939046((void *)(a3 + 48), 0, ((unsigned __int64)v16 + 7) >> 3);
  if ( (v16 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)v16 >> 6)) |= ~((1LL << (v16 & 0x3F)) - 1);
  v21 = v49;
  *(_WORD *)(a2 + 36) = v49;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v51;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a3 + 24) = v17 ^ a3 ^ a1 ^ ((unsigned __int16)v50 | ((unsigned __int16)(16 * v21) << 16));
  if ( !*(_DWORD *)(v51 + 164) )
  {
    v43 = *(_QWORD *)v51;
    v44 = *(_DWORD *)(*(_QWORD *)v51 + 36LL);
    if ( v44 >= 0x20 )
    {
LABEL_26:
      *(_WORD *)(v51 + 176) = 0;
      goto LABEL_11;
    }
    v45 = v44 + 4;
LABEL_25:
    *(_DWORD *)(v43 + 36) = v45;
    goto LABEL_26;
  }
  v22 = *(_WORD *)(v51 + 176) + 1;
  *(_WORD *)(v51 + 176) = v22;
  if ( v22 > 0x1Cu )
  {
    v43 = *(_QWORD *)v51;
    v46 = *(_DWORD *)(*(_QWORD *)v51 + 36LL);
    if ( !v46 )
      goto LABEL_26;
    v45 = v46 - 4;
    goto LABEL_25;
  }
  do
  {
LABEL_11:
    v23 = *(_QWORD *)(v51 + 160);
    v24 = HIDWORD(v23) - 1;
    v25 = (unsigned int)v23 + v16;
    if ( (int)v16 > 0 )
      v24 = HIDWORD(v23) + 1;
    v26 = (unsigned int)v25 | (unsigned __int64)(v24 << 32);
    v27 = *(_QWORD *)(v51 + 160);
  }
  while ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 160), v26, v23) );
  v28 = *(_QWORD *)v51;
  *(_DWORD *)(v51 + 168) = ++*(_DWORD *)(v28 + 32);
  v29 = NtCurrentTeb();
  HeapData_high = HIWORD(v29->HeapData);
  v31 = HeapData_high;
  v32 = (unsigned __int8)HeapData_high;
  if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
  {
    LOWORD(v31) = HIBYTE(HeapData_high);
    RandomValue32 = RtlpHeapGenerateRandomValue32(v31, v26, v25);
    v33 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v33 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
  }
  HIWORD(v29->HeapData) = v33;
  v34 = (RtlpLowFragHeapRandomData[v32] % v16) << 16;
  HIWORD(v52) = RtlpLowFragHeapRandomData[v32] % v16;
  LOWORD(v52) = v16;
  _InterlockedOr(v48, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v52, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v35 = HIWORD(NtCurrentTeb()->HeapData);
    v36 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v52, v34, v25) << 32;
    *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)v35 >> 3)] = (v36 | (unsigned int)RtlpHeapGenerateRandomValue32(
                                                                                                    v38,
                                                                                                    v37,
                                                                                                    v39)) & 0x7F7F7F7F7F7F7F7FLL;
  }
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v42 = (__int64)result->SharedData + 550;
  }
  else
  {
    v42 = 2147353472LL;
  }
  if ( *(_BYTE *)v42 )
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
