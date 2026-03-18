/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x140239D20
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14034BBF0 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpVsSubsegmentInitialize @ 0x140239E54 (RtlpHpVsSubsegmentInitialize.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r14d
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // r14d
  int v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = a2 + 4167;
  v5 = 2 * a2 + 72;
  v15 = 0;
  v14 = 0;
  v6 = v4 & 0xFFFFF000;
  v16 = 0;
  if ( ((v5 - 1) & v5) != 0 )
  {
    _BitScanReverse(&v9, v5);
    v16 = v9;
    v5 = 1 << (v9 + 1);
  }
  v10 = 0x10000;
  if ( v5 > 0x10000 )
  {
    v10 = v5;
    if ( v5 >= 0x40000 )
      v10 = 0x40000;
  }
  while ( 1 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int *, unsigned int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 136)))(
            a1 ^ *(_QWORD *)(a1 + 128),
            v10,
            a3,
            &v14,
            &v15);
    if ( v11 )
      break;
    v10 = v15;
    if ( v15 < v6 )
      return v3;
  }
  v12 = 4096;
  if ( (v14 & 1) != 0 )
    v12 = v10;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
         a1 ^ *(_QWORD *)(a1 + 128),
         v11,
         v12) < 0 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
      a1 ^ *(_QWORD *)(a1 + 128),
      v11,
      v10,
      a3);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), (unsigned __int64)v12 >> 12);
    RtlpHpVsSubsegmentInitialize(v11, v10, v12, *(unsigned int *)(a1 + 8));
    return v11;
  }
  return v3;
}
