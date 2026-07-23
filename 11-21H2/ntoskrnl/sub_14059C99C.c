/*
 * XREFs of sub_14059C99C @ 0x14059C99C
 * Callers:
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14034BAE0 @ 0x14034BAE0 (sub_14034BAE0.c)
 *     sub_14059CCB4 @ 0x14059CCB4 (sub_14059CCB4.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14097FF04 @ 0x14097FF04 (sub_14097FF04.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059CE7C @ 0x14059CE7C (sub_14059CE7C.c)
 */

__int64 __fastcall sub_14059C99C(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r10d
  __int64 *v10; // r8
  int v11; // r13d
  volatile signed __int32 *v12; // rbx
  char v13; // al
  char v14; // cl
  char v15; // al
  __int64 v16; // rdx
  LARGE_INTEGER *Timeout; // r14
  unsigned int v18; // edx
  char v19; // al
  unsigned int v20; // ecx
  __int64 v21; // r8
  char v22; // al
  char v23; // cl
  char v24; // al
  char v25; // al
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  volatile signed __int32 **v29; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  _QWORD v36[12]; // [rsp+38h] [rbp-29h] BYREF

  memset(v36, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  v9 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1681) )
    return 0LL;
  v10 = &qword_14003BE78;
  v11 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v12 = (volatile signed __int32 *)(a1 + (v9 != 0 ? 1432LL : 464LL));
    if ( _InterlockedCompareExchange(v12 + 18, 1, 0) )
      return 0LL;
    v13 = *((_BYTE *)v12 + 79);
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v14 = v13 | 1;
    v15 = v13 & 0xFE;
    v16 = 0LL;
    if ( (a3 & 4) == 0 )
      v14 = v15;
    Timeout = 0LL;
    *((_BYTE *)v12 + 79) = v14;
  }
  else
  {
    if ( *((ULONG_PTR *(__fastcall **)(__int64))CurrentThread + 164) == sub_1403CBBF0
      || KeGetCurrentIrql() >= 2u
      || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
    {
      return 0LL;
    }
    if ( (a3 & 8) != 0 )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v18 = *(_DWORD *)(a1 + 16728);
    v12 = (volatile signed __int32 *)v36;
    LODWORD(v36[9]) = 1;
    v36[0] = 0LL;
    BYTE4(v36[9]) = a4;
    if ( (a3 & 1) != 0 )
      v19 = HIBYTE(v36[9]) & 0xE8 | 2;
    else
      v19 = HIBYTE(v36[9]) & 0xE8;
    HIBYTE(v36[9]) = v19;
    v36[8] = &v36[7];
    v36[7] = &v36[7];
    LOWORD(v36[6]) = 0;
    BYTE2(v36[6]) = 6;
    HIDWORD(v36[6]) = 0;
    if ( (a3 & 8) != 0 )
    {
      Timeout = (LARGE_INTEGER *)&qword_14003BE78;
    }
    else if ( a4 >= v18 )
    {
      Timeout = (LARGE_INTEGER *)&qword_14003BE78;
      v20 = 0;
      if ( v18 )
      {
        v21 = a1 + 16736;
        while ( (*(_WORD *)(*(_QWORD *)v21 + 204LL) & 0x50) != 0
             || **(_QWORD **)v21 >= *(_QWORD *)(*(_QWORD *)v21 + 8LL) )
        {
          ++v20;
          v21 += 8LL;
          if ( v20 >= v18 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        if ( v20 == v18 )
          return 0LL;
      }
    }
    else
    {
      Timeout = 0LL;
    }
    v16 = 1LL;
    v10 = &qword_14003BE78;
  }
  v22 = *((_BYTE *)v12 + 79);
  v23 = v22 | 8;
  v24 = v22 & 0xF7;
  if ( !v9 )
    v23 = v24;
  *((_BYTE *)v12 + 79) = v23;
  *((_QWORD *)v12 + 4) = a2;
  v25 = *((_BYTE *)v12 + 79);
  LOBYTE(v10) = 17;
  *((_QWORD *)v12 + 5) = 0LL;
  *((_QWORD *)v12 + 3) = a1;
  *((_QWORD *)v12 + 10) = 0LL;
  *((_BYTE *)v12 + 79) = v25 & 0xDF | (&qword_14003BE78 != (__int64 *)Timeout ? 0x20 : 0);
  sub_14059CE7C(v12, v16, v10);
  if ( !v11 )
  {
    if ( KeWaitForSingleObject((PVOID)(v12 + 12), Executive, 0, 0, Timeout) == 258 )
    {
      v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
      if ( !*((_DWORD *)v12 + 13) )
      {
        v27 = *((_QWORD *)v12 + 10);
        if ( v27 )
        {
          *(_QWORD *)(v27 + 80) = 0LL;
        }
        else
        {
          v28 = *((_QWORD *)v12 + 1);
          v29 = (volatile signed __int32 **)*((_QWORD *)v12 + 2);
          if ( *(volatile signed __int32 **)(v28 + 8) != v12 + 2 || *v29 != v12 + 2 )
            __fastfail(3u);
          *v29 = (volatile signed __int32 *)v28;
          *(_QWORD *)(v28 + 8) = v29;
        }
        *((_QWORD *)v12 + 5) = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v26 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
            v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v34 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v26);
    }
    if ( *((_QWORD *)v12 + 5) )
      return 1LL;
  }
  return 0LL;
}
