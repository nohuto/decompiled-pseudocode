/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x180072AE4
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1800374D0 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  int v3; // ebp
  unsigned int v5; // edx
  unsigned int v6; // ebp
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned int v12; // ebp
  __int16 v13; // cx
  unsigned __int64 v14; // r8
  __int16 v15; // cx
  __int16 v16; // ax
  char v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h]

  v3 = a2 + 4167;
  v5 = 2 * a2 + 72;
  v6 = v3 & 0xFFFFF000;
  if ( ((v5 - 1) & v5) != 0 )
  {
    _BitScanReverse(&v8, v5);
    v20 = v8;
    v5 = 1 << (v8 + 1);
  }
  v9 = 0x10000LL;
  if ( v5 > 0x10000 )
  {
    v9 = v5;
    if ( v5 >= 0x40000 )
      v9 = 0x40000LL;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *, unsigned int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 136)))(
            *(_QWORD *)(a1 + 128) ^ a1,
            (unsigned int)v9,
            a3,
            &v18,
            &v19);
    if ( v11 )
      break;
    v9 = v19;
    if ( v19 < v6 )
      return v10;
  }
  v12 = 4096;
  if ( (v18 & 1) != 0 )
    v12 = v9;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
         *(_QWORD *)(a1 + 128) ^ a1,
         v11,
         v12) < 0 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
      *(_QWORD *)(a1 + 128) ^ a1,
      v11,
      (unsigned int)v9,
      a3);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), (unsigned __int64)v12 >> 12);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 34) = 0;
    *(_WORD *)(v11 + 38) = 0;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)v12 >> 12));
    v13 = 0;
    v14 = (unsigned __int64)(v9 - 48) >> 4;
    *(_WORD *)(v11 + 32) = v14;
    if ( v12 == (_DWORD)v9 )
      v13 = 0x8000;
    v15 = (v14 ^ v13 ^ 0x2BED) & 0x7FFF;
    v16 = 0;
    if ( v12 == (_DWORD)v9 )
      v16 = 0x8000;
    *(_WORD *)(v11 + 34) = v16 ^ v15;
    *(_OWORD *)(v11 + 48) = 0LL;
    *(_WORD *)(v11 + 52) = 0;
    v10 = v11;
    *(_WORD *)(v11 + 50) = v14;
    *(_QWORD *)(v11 + 48) ^= (v11 + 48) ^ RtlpHpHeapGlobals;
  }
  return v10;
}
