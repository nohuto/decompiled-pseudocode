/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180064CC8
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x1800656B8 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlpHpEnvFreeVA @ 0x180047828 (RtlpHpEnvFreeVA.c)
 *     RtlpCSparseBitmapLock @ 0x18004AC54 (RtlpCSparseBitmapLock.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004ACA4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpWaitOnAddress @ 0x18004FE64 (RtlpWaitOnAddress.c)
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
  __int64 v12; // r8
  _QWORD *v13; // rdx
  const signed __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // r9
  __int64 v18; // r10
  bool v19; // zf
  signed __int32 v21[14]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-B0h]
  __int64 v23; // [rsp+40h] [rbp-A8h]
  _QWORD *i; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+50h] [rbp-98h]
  unsigned __int64 v26; // [rsp+58h] [rbp-90h]
  __int64 v27; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v28; // [rsp+70h] [rbp-78h]
  __int64 v29; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-60h] BYREF
  __int128 v32; // [rsp+98h] [rbp-50h]
  int v33; // [rsp+108h] [rbp+20h]

  v33 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v28 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  v22 = v5;
  v23 = v6;
  v7 = a2 << 15;
  v25 = a2 << 15;
  v8 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v26 = v9;
  v32 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_23;
    if ( v7 >= v22 )
    {
LABEL_14:
      LODWORD(v14) = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      LODWORD(v14) = !_bittest64((const signed __int64 *)(v23 + 8 * (v8 >> 6)), 0);
    }
    else
    {
      if ( v22 - v7 < v9 )
        goto LABEL_14;
      v11 = (_QWORD *)(v23 + 8 * (v7 >> 6));
      i = v11;
      v10 = v23 + 8 * ((v9 + v7 - 1) >> 6);
      v12 = *v11;
      if ( v11 == (_QWORD *)v10 )
      {
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7;
      }
      else
      {
        if ( (v12 & (-1LL << v7)) != 0 )
          goto LABEL_14;
        v13 = v11 + 1;
        for ( i = v13; ; i = v13 )
        {
          v12 = *v13;
          if ( v13 == (_QWORD *)v10 )
            break;
          if ( v12 )
            goto LABEL_14;
          ++v13;
        }
        v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1);
      }
      LODWORD(v14) = (v12 & v15) == 0;
    }
LABEL_20:
    v21[12] = (int)v14;
    if ( !(_DWORD)v14 )
      goto LABEL_21;
LABEL_23:
    RtlpCSparseBitmapLock(a1, 1uLL, (unsigned __int64)v31, v10);
    v27 = *(_QWORD *)(a1 + 32);
    if ( v27 == -1 )
      break;
    RtlpCSparseBitmapUnlock((__int64)v31);
    RtlpWaitOnAddress((_QWORD *)(a1 + 32), &v27, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount);
    v14 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_21;
    a3 = 0;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock((__int64)v31);
  v33 = 1;
  v14 = *(const signed __int64 **)a1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
    goto LABEL_21;
  if ( v7 >= v22 )
    goto LABEL_32;
  if ( v9 <= 1 )
  {
    if ( v9 == 1 )
    {
      LOBYTE(v14) = !_bittest64((const signed __int64 *)(v23 + 8 * (v8 >> 6)), 0);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( v22 - v7 < v9 )
    goto LABEL_32;
  v16 = (__int64 *)(v23 + 8 * (v7 >> 6));
  v17 = (__int64 *)(v23 + 8 * ((v9 + v7 - 1) >> 6));
  v18 = *v16;
  if ( v16 == v17 )
  {
    v19 = (v18 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7)) == 0;
    goto LABEL_37;
  }
  if ( (v18 & (-1LL << v7)) != 0 )
  {
LABEL_32:
    LOBYTE(v14) = 0;
    goto LABEL_33;
  }
  while ( ++v16 != v17 )
  {
    if ( *v16 )
      goto LABEL_32;
  }
  v19 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1)) & *v16) == 0;
LABEL_37:
  LOBYTE(v14) = v19;
LABEL_33:
  if ( (_BYTE)v14 )
  {
    _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
    v30 = *v28 + (a2 << 12);
    v29 = 4096LL;
    LOBYTE(v14) = RtlpHpEnvFreeVA((__int64)&v30, (__int64)&v29, 0x4000, *(unsigned __int8 *)(a1 + 50), 0LL);
  }
LABEL_21:
  if ( v33 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v21, 0);
    LOBYTE(v14) = RtlpWakeByAddress(a1 + 32, 1);
  }
  return (char)v14;
}
