/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180041574
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpGetSubSegmentBlockCount @ 0x180041800 (RtlpGetSubSegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180041864 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x180044074 (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x1800740C0 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned int v4; // r14d
  int v7; // edi
  int v8; // r12d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  int SubSegmentBlockCount; // eax
  unsigned __int64 v12; // r8
  int v13; // edx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  char v19; // cl
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r15d
  __int64 v24; // r14
  int v25; // r12d
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // rbx
  int v30; // eax
  char v31[88]; // [rsp+30h] [rbp-58h] BYREF
  int v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v34 = a3;
  v3 = RtlpHpLfhPerfFlags;
  v4 = a3;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)];
  v32 = v7;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    v30 = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, *(unsigned __int8 *)(a2 + 1));
    v3 = RtlpHpLfhPerfFlags;
    v8 = v30;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(unsigned __int8 *)(a2 + 2);
  v10 = *(unsigned int *)(a2 + 56);
  if ( !v8 )
    v10 = ((unsigned int)v10 >> 3) / v9;
  if ( v10 >= 0xFFFFFFFF )
    LODWORD(v10) = -1;
  LOBYTE(a3) = v9 > 1;
  SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(
                           (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)],
                           (unsigned int)v10,
                           a3,
                           *(_QWORD *)(a2 + 64) != 0LL);
  v12 = (unsigned int)(v7 * SubSegmentBlockCount);
  v13 = (8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v14 = v13 + 2 * ((unsigned int)(v13 + v12 + 4095) >> 12);
  v15 = 12LL;
  v16 = v14 + v12;
  if ( (unsigned int)(v14 + v12) >= 0xF0000 )
    v16 = 983040;
  _BitScanReverse(&v17, v16 - 1);
  v35 = v17;
  v18 = v17 + 1;
  if ( v17 + 1 <= 7 )
  {
    v18 = 7;
  }
  else
  {
    v19 = 18;
    if ( v18 >= 0x12 )
      goto LABEL_13;
  }
  v19 = v18;
  if ( v18 <= 0xC )
    v19 = 12;
LABEL_13:
  v20 = 1 << v19;
  if ( (v3 & 8) != 0 && (unsigned int)v14 <= (unsigned int)v12 >> 6 )
  {
    v21 = RtlpCalculateSubsegmentSizeIndex((unsigned int)v12);
    if ( v21 <= (unsigned int)v15 )
      LOBYTE(v21) = v15;
    v22 = 1 << v21;
    if ( v20 > v22 )
      v20 = v22;
  }
  v23 = v4 & 1;
  if ( (v4 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), v15, v12, v14);
  v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, char *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v20,
          v4,
          &v33,
          v31);
  if ( v24 )
  {
    if ( v8 && (RtlpHpLfhPerfFlags & 2) != 0 || (v33 & 1) != 0 )
    {
      v25 = v32;
      v26 = v20;
    }
    else
    {
      v25 = v32;
      if ( (RtlpHpAppCompatFlags & 4) != 0 )
      {
        v26 = v20;
      }
      else
      {
        v26 = 2 * v32;
        if ( ((v26 - 1) & v26) != 0 )
        {
          _BitScanReverse(&v27, v26);
          v26 = 1 << (v27 + 1);
        }
        if ( v26 <= 0x1000 )
          v26 = 4096;
        if ( v26 >= v20 )
          v26 = v20;
      }
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v24,
           v26) < 0 )
    {
      v28 = 0LL;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v24,
        v20,
        v34);
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v24, v20, v26, v25, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v24 + 34));
      v28 = v24;
    }
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v23 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  return v28;
}
