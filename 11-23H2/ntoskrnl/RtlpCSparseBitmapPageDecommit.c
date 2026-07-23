/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x140355D1C
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x140315698 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140209468 (ExpUnblockPushLock.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x140313800 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpCSparseBitmapLock @ 0x140313840 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140314BC0 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x140314BF8 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x1405B7A50 (RtlpCSparseBitmapWaitOnAddress.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // r9
  BOOL v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  bool v18; // al
  char v19; // al
  __int64 *v20; // r8
  __int64 *v21; // r9
  __int64 v22; // r10
  bool v23; // zf
  __int64 v24; // r8
  signed __int32 v25[10]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+30h] [rbp-B8h]
  __int64 v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+40h] [rbp-A8h] BYREF
  ULONG_PTR v30; // [rsp+48h] [rbp-A0h] BYREF
  ULONG_PTR v31[4]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-78h]
  __int128 v33; // [rsp+78h] [rbp-70h] BYREF
  __int128 v34; // [rsp+90h] [rbp-58h] BYREF
  __int64 v35[9]; // [rsp+A0h] [rbp-48h] BYREF
  int v37; // [rsp+108h] [rbp+20h]

  v29 = 0LL;
  v31[0] = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v37 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v32 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  v27 = v5;
  v28 = v6;
  v7 = a2 << 15;
  v31[1] = a2 << 15;
  v8 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v31[2] = v9;
  v34 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v35, a1);
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_23;
    i = 0LL;
    if ( v7 >= v27 )
      goto LABEL_12;
    if ( v9 <= 1 )
    {
      if ( v9 == 1 )
      {
        v11 = !_bittest64((const signed __int64 *)(v28 + 8 * (v8 >> 6)), 0);
        goto LABEL_20;
      }
LABEL_12:
      v11 = 0;
      goto LABEL_20;
    }
    if ( v27 - v7 < v9 )
      goto LABEL_12;
    v12 = (_QWORD *)(v28 + 8 * (v7 >> 6));
    i = v12;
    v13 = (_QWORD *)(v28 + 8 * ((v9 + v7 - 1) >> 6));
    v14 = *v12;
    if ( v12 == v13 )
    {
      v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7;
    }
    else
    {
      if ( (v14 & (-1LL << v7)) != 0 )
        goto LABEL_12;
      v16 = v12 + 1;
      for ( i = v16; ; i = v16 )
      {
        v14 = *v16;
        if ( v16 == v13 )
          break;
        if ( v14 )
          goto LABEL_12;
        ++v16;
      }
      v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1);
    }
    v11 = (v14 & v15) == 0;
LABEL_20:
    v25[8] = v11;
    if ( !v11 )
      goto LABEL_21;
LABEL_23:
    a3 = 0;
    RtlpCSparseBitmapLock(a1, 1, (__int64)&v33);
    v29 = *(_QWORD *)(a1 + 32);
    if ( v29 == -1 )
      break;
    RtlpCSparseBitmapUnlock((int *)&v33);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v29, v24, a1);
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_21;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock((int *)&v33);
  v37 = 1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) )
    goto LABEL_21;
  if ( v7 >= v27 )
    goto LABEL_36;
  if ( v9 > 1 )
  {
    if ( v27 - v7 >= v9 )
    {
      v20 = (__int64 *)(v28 + 8 * (v7 >> 6));
      v21 = (__int64 *)(v28 + 8 * ((v9 + v7 - 1) >> 6));
      v22 = *v20;
      if ( v20 == v21 )
      {
        v23 = (v22 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7)) == 0;
      }
      else
      {
        if ( (v22 & (-1LL << v7)) != 0 )
          goto LABEL_36;
        while ( ++v20 != v21 )
        {
          if ( *v20 )
            goto LABEL_36;
        }
        v23 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1)) & *v20) == 0;
      }
      v18 = v23;
      goto LABEL_29;
    }
LABEL_36:
    v18 = 0;
    goto LABEL_29;
  }
  if ( v9 != 1 )
    goto LABEL_36;
  v18 = !_bittest64((const signed __int64 *)(v28 + 8 * (v8 >> 6)), 0);
LABEL_29:
  if ( v18 )
  {
    _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
    v31[0] = *v32 + (a2 << 12);
    v30 = 4096LL;
    MmFreePoolMemory(v31, &v30);
  }
LABEL_21:
  if ( v37 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    v19 = *(_BYTE *)(a1 + 48);
    _InterlockedOr(v25, 0);
    if ( !v19 )
    {
      if ( *(_QWORD *)(a1 + 40) )
        ExpUnblockPushLock((volatile __int64 *)(a1 + 40), 0LL, 0);
    }
  }
  return RtlCSparseBitmapLeaveLockingRegion((unsigned __int8 *)&v34);
}
