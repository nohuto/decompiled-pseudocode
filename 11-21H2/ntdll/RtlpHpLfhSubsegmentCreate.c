/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x18002D268
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002D8DC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpGetSubSegmentBlockCount @ 0x18002DB7C (RtlpGetSubSegmentBlockCount.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x18002F004 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // bl
  unsigned int v5; // r13d
  unsigned int v8; // edi
  int v9; // r12d
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  int SubSegmentBlockCount; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  char v16; // dl
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // r14
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // rbx
  char v29[88]; // [rsp+30h] [rbp-58h] BYREF
  char v30; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v3 = *(unsigned __int8 *)(a2 + 1);
  v4 = RtlpHpLfhPerfFlags;
  v5 = a3;
  v8 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  v32 = v8;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    LODWORD(v3) = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, (unsigned int)v3);
    v4 = RtlpHpLfhPerfFlags;
    v9 = v3;
    LOBYTE(v3) = *(_BYTE *)(a2 + 1);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(unsigned __int8 *)(a2 + 2);
  v11 = (unsigned __int16)RtlpBucketBlockSizes[(unsigned __int8)v3];
  v12 = *(unsigned int *)(a2 + 56);
  if ( !v9 )
    v12 = ((unsigned int)v12 >> 3) / v10;
  if ( v12 >= 0xFFFFFFFF )
    LODWORD(v12) = -1;
  LOBYTE(a3) = v10 > 1;
  SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(v11, (unsigned int)v12, a3, *(_QWORD *)(a2 + 64) != 0LL);
  v14 = v8 * SubSegmentBlockCount;
  v15 = ((8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0)
      + 2
      * ((v8 * SubSegmentBlockCount
        + ((8 * (unsigned int)(((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0)
        + 4095) >> 12);
  v16 = 18;
  v17 = v15 + v8 * SubSegmentBlockCount;
  if ( v17 >= 0xF0000 )
    v17 = 983040;
  _BitScanReverse(&v18, v17 - 1);
  v31 = v18;
  v19 = v18 + 1;
  if ( v19 <= 7 )
  {
    v19 = 7;
  }
  else if ( v19 >= 0x12 )
  {
    LOBYTE(v19) = 18;
    goto LABEL_13;
  }
  if ( v19 <= 0xC )
    LOBYTE(v19) = 12;
LABEL_13:
  v20 = 1 << v19;
  if ( (v4 & 8) == 0 || v15 > v14 >> 6 )
    goto LABEL_23;
  if ( v14 >= 0xF0000 )
    v14 = 983040;
  _BitScanReverse(&v21, v14 - 1);
  v33 = v21;
  v22 = v21 + 1;
  if ( v22 <= 7 )
  {
    v22 = 7;
LABEL_19:
    v16 = v22;
    if ( v22 <= 0xC )
      v16 = 12;
    goto LABEL_21;
  }
  if ( v22 < 0x12 )
    goto LABEL_19;
LABEL_21:
  if ( v20 > 1 << v16 )
    v20 = 1 << v16;
LABEL_23:
  if ( (v5 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, char *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v20,
          v5,
          &v30,
          v29);
  if ( v23 )
  {
    if ( v9 && (RtlpHpLfhPerfFlags & 2) != 0 || (v30 & 1) != 0 )
    {
      v24 = v32;
      v25 = v20;
    }
    else
    {
      v24 = v32;
      if ( (RtlpHpAppCompatFlags & 4) != 0 )
      {
        v25 = v20;
      }
      else
      {
        v25 = 2 * v32;
        if ( ((v25 - 1) & v25) != 0 )
        {
          _BitScanReverse(&v26, v25);
          v32 = v26;
          v25 = 1 << (v26 + 1);
        }
        if ( v25 <= 0x1000 )
          v25 = 4096;
        if ( v25 >= v20 )
          v25 = v20;
      }
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v23,
           v25) < 0 )
    {
      v27 = 0LL;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v23,
        v20,
        v5);
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v23, v20, v25, v24, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v23 + 34));
      v27 = v23;
    }
  }
  else
  {
    v27 = 0LL;
  }
  if ( (v5 & 1) == 0 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  return v27;
}
