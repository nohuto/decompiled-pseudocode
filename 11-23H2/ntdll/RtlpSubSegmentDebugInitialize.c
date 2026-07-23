/*
 * XREFs of RtlpSubSegmentDebugInitialize @ 0x18011AE48
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x1800418E0 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitializeSListHead @ 0x180070F90 (RtlInitializeSListHead.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 *     RtlpGetFirstBlockAddress @ 0x1800B10C8 (RtlpGetFirstBlockAddress.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180118D18 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpInitializeLfhBitmapData @ 0x18012346C (RtlpInitializeLfhBitmapData.c)
 */

__int64 __fastcall RtlpSubSegmentDebugInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  signed __int32 v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  __int16 FirstBlockAddress; // ax
  __int64 v18; // rsi
  unsigned int v19; // edx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned int v22; // eax
  ULONG *OldProtect; // rax
  __int64 v24; // rcx
  ULONG_PTR *p_RegionSize; // r8
  PVOID *p_BaseAddress; // rdx
  signed __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-70h] BYREF
  signed __int64 v32; // [rsp+30h] [rbp-40h]
  ULONG v33; // [rsp+38h] [rbp-38h] BYREF
  char v34; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-30h]
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  int v40; // [rsp+B8h] [rbp+48h]
  unsigned int v41; // [rsp+B8h] [rbp+48h]

  if ( (a4 & 3) == 0 )
    return 0LL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned __int8 *)(a2 + 43);
  LODWORD(v32) = v11;
  v13 = *(unsigned __int8 *)(a7 + 2);
  if ( (_BYTE)v12 )
    v14 = *(_QWORD *)(a1 + 8 * v13 + 2224) - 192LL + 192 * v12;
  else
    v14 = *(_QWORD *)(a1 + 8 * v13 + 1192);
  *(_QWORD *)a3 = a2;
  *(_QWORD *)a2 = v14;
  v15 = (a3 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  v35 = ((a5 + 4119) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v16 = (a6 + a3 - v15) / v35;
  HIWORD(v40) = ((a5 + 4119) & 0xF000) + 4096;
  *(_WORD *)(a2 + 36) = (unsigned __int64)(a5 + 16) >> 4;
  *(_WORD *)(a2 + 40) = v16;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a7 + 2);
  *(_WORD *)(a2 + 38) = a4;
  FirstBlockAddress = RtlpGetFirstBlockAddress(a2, v15);
  v18 = (unsigned __int16)(FirstBlockAddress - a3);
  LOWORD(v40) = FirstBlockAddress - a3;
  *(_DWORD *)(a3 + 24) = v40 ^ RtlpLFHKey ^ a3 ^ a1;
  *(_QWORD *)(a3 + 32) = (unsigned int)v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  RtlpInitializeLfhBitmapData();
  v19 = 0;
  v20 = a3 + v18;
  v41 = 0;
  if ( !(_DWORD)v16 )
    goto LABEL_15;
  v21 = v35;
  do
  {
    v22 = *(_DWORD *)(v20 + 12) & 0xFF0000FF;
    *(_DWORD *)(v20 + 8) = RtlpLFHKey ^ *(_DWORD *)(a1 + 24) ^ (v20 >> 4) ^ (((_DWORD)v20 - (_DWORD)a3) << 12);
    *(_DWORD *)(v20 + 12) = v22 | ((unsigned __int16)v19 << 8);
    *(_BYTE *)(v20 + 15) = 0x80;
    if ( (*(_BYTE *)(a2 + 38) & 1) != 0 )
    {
      OldProtect = &v33;
      v24 = *(unsigned __int16 *)(a2 + 36) + 1LL;
      v36 = 4096LL;
      p_RegionSize = (ULONG_PTR *)&v36;
      p_BaseAddress = (PVOID *)&v37;
      v37 = v20 + 16 * v24;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 38) & 2) == 0 )
        goto LABEL_13;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(v20 - 4096);
      p_RegionSize = &RegionSize;
      OldProtect = (ULONG *)&v34;
      p_BaseAddress = &BaseAddress;
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, p_BaseAddress, p_RegionSize, 1u, OldProtect);
    v19 = v41;
LABEL_13:
    ++v19;
    v20 += v21;
    v41 = v19;
  }
  while ( v19 < (unsigned int)v16 );
  v11 = v32;
LABEL_15:
  *(_QWORD *)(a2 + 8) = a3;
  RtlInitializeSListHead((PSLIST_HEADER)(a2 + 16));
  do
  {
    v27 = *(_QWORD *)(v14 + 160);
    LODWORD(v32) = v27 + v16;
    if ( (int)v16 <= 0 )
      v28 = HIDWORD(v27) - 1;
    else
      v28 = HIDWORD(v27) + 1;
    HIDWORD(v32) = v28;
  }
  while ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 160), v32, v27) );
  v29 = *(_QWORD *)v14;
  *(_DWORD *)(v14 + 168) = ++*(_DWORD *)(v29 + 32);
  _InterlockedOr(v31, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(a2 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), (unsigned __int16)v16, v11);
  if ( RtlGetCurrentServiceSessionId() )
    v30 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v30 = 2147353472LL;
  if ( *(_BYTE *)v30 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentInitialize(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a2 + 36),
        *(unsigned __int16 *)(a2 + 40),
        *(unsigned __int8 *)(a2 + 43));
  }
  return 1LL;
}
