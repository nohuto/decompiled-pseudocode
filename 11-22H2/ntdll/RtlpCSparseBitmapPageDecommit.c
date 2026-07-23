/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180064DF8
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x1800657E8 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlpCSparseBitmapLock @ 0x18004ADB4 (RtlpCSparseBitmapLock.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004AE04 (RtlpCSparseBitmapUnlock.c)
 *     RtlpWaitOnAddress @ 0x18004FFC4 (RtlpWaitOnAddress.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _RTL_SRWLOCK v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // r9
  __int64 v19; // r10
  bool v20; // zf
  signed __int32 v22[14]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-B0h]
  __int64 v24; // [rsp+40h] [rbp-A8h]
  _QWORD *i; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+50h] [rbp-98h]
  unsigned __int64 v27; // [rsp+58h] [rbp-90h]
  __int64 v28; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v29; // [rsp+70h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v32[16]; // [rsp+88h] [rbp-60h] BYREF
  __int128 v33; // [rsp+98h] [rbp-50h]
  int v34; // [rsp+108h] [rbp+20h]

  v34 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v29 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  v23 = v5;
  v24 = v6;
  v7 = a2 << 15;
  v26 = a2 << 15;
  v8 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v27 = v9;
  v33 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_23;
    if ( v7 >= v23 )
    {
LABEL_14:
      *(_DWORD *)&v15.0 = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      *(_DWORD *)&v15.0 = !_bittest64((const signed __int64 *)(v24 + 8 * (v8 >> 6)), 0);
    }
    else
    {
      if ( v23 - v7 < v9 )
        goto LABEL_14;
      v11 = (_QWORD *)(v24 + 8 * (v7 >> 6));
      i = v11;
      v12 = (_QWORD *)(v24 + 8 * ((v9 + v7 - 1) >> 6));
      v13 = *v11;
      if ( v11 == v12 )
      {
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7;
      }
      else
      {
        if ( (v13 & (-1LL << v7)) != 0 )
          goto LABEL_14;
        v14 = v11 + 1;
        for ( i = v14; ; i = v14 )
        {
          v13 = *v14;
          if ( v14 == v12 )
            break;
          if ( v13 )
            goto LABEL_14;
          ++v14;
        }
        v16 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1);
      }
      *(_DWORD *)&v15.0 = (v13 & v16) == 0;
    }
LABEL_20:
    v22[12] = (signed __int32)v15.0;
    if ( !*(_DWORD *)&v15.0 )
      goto LABEL_21;
LABEL_23:
    RtlpCSparseBitmapLock((_RTL_SRWLOCK *)a1, 1, (__int64)v32);
    v28 = *(_QWORD *)(a1 + 32);
    if ( v28 == -1 )
      break;
    RtlpCSparseBitmapUnlock((__int64)v32);
    RtlpWaitOnAddress((_QWORD *)(a1 + 32), &v28, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount);
    v15.0 = *($2F38BEDF952D5DA5F266621B11247D04 *)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_21;
    a3 = 0;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock((__int64)v32);
  v34 = 1;
  v15.0 = *($2F38BEDF952D5DA5F266621B11247D04 *)a1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
    goto LABEL_21;
  if ( v7 >= v23 )
    goto LABEL_32;
  if ( v9 <= 1 )
  {
    if ( v9 == 1 )
    {
      *(_BYTE *)&v15.0 = !_bittest64((const signed __int64 *)(v24 + 8 * (v8 >> 6)), 0);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( v23 - v7 < v9 )
    goto LABEL_32;
  v17 = (__int64 *)(v24 + 8 * (v7 >> 6));
  v18 = (__int64 *)(v24 + 8 * ((v9 + v7 - 1) >> 6));
  v19 = *v17;
  if ( v17 == v18 )
  {
    v20 = (v19 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7)) == 0;
    goto LABEL_37;
  }
  if ( (v19 & (-1LL << v7)) != 0 )
  {
LABEL_32:
    *(_BYTE *)&v15.0 = 0;
    goto LABEL_33;
  }
  while ( ++v17 != v18 )
  {
    if ( *v17 )
      goto LABEL_32;
  }
  v20 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1)) & *v17) == 0;
LABEL_37:
  *(_BYTE *)&v15.0 = v20;
LABEL_33:
  if ( v15.0 )
  {
    _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
    BaseAddress = (PVOID)(*v29 + (a2 << 12));
    RegionSize = 4096LL;
    *(_BYTE *)&v15.0 = RtlpHpEnvFreeVA(&BaseAddress, &RegionSize, 0x4000, *(unsigned __int8 *)(a1 + 50), 0LL);
  }
LABEL_21:
  if ( v34 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v22, 0);
    *(_BYTE *)&v15.0 = RtlpWakeByAddress(a1 + 32, 1);
  }
  return (char)v15.0;
}
