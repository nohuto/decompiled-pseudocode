/*
 * XREFs of sub_1405DBE28 @ 0x1405DBE28
 * Callers:
 *     sub_1409971BC @ 0x1409971BC (sub_1409971BC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DBCD4 @ 0x1405DBCD4 (sub_1405DBCD4.c)
 */

__int64 __fastcall sub_1405DBE28(char a1)
{
  KIRQL v2; // al
  LARGE_INTEGER *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int v5; // ecx
  BOOL v6; // edx
  LARGE_INTEGER v7; // rbp
  ULONG LowPart; // eax
  LONGLONG v9; // r11
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  bool v14; // zf
  LARGE_INTEGER v15; // [rsp+48h] [rbp+10h] BYREF

  v15.QuadPart = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F4A0);
  v3 = (LARGE_INTEGER *)qword_140C1F490;
  v4 = v2;
  if ( qword_140C1F490 )
  {
    v5 = *(_DWORD *)qword_140C1F490;
    if ( (*(_DWORD *)qword_140C1F490 & 0x10) != 0 )
    {
      v6 = a1 == 0;
      if ( ((v5 >> 1) & 1) != v6 )
      {
        *(_DWORD *)qword_140C1F490 = (2 * v6) | v5 & 0xFFFFFFFD;
        KeQueryInterruptTimePrecise(&v15);
        v7 = v15;
        LowPart = v3->LowPart;
        v9 = v15.QuadPart - v3[1].QuadPart;
        if ( (v3->LowPart & 8) == 0 )
        {
          v10 = v15.QuadPart - v3[23].QuadPart;
          if ( v10 > qword_140C1F4A8 )
            v3->LowPart = LowPart | 4;
          sub_1405DBCD4(v10, 6u, (__int64)qword_140C1F490 + 208, (__int64)qword_140C1F490 + 232, qword_140C0BE00);
          v3->LowPart |= 8u;
          LowPart = v3->LowPart;
        }
        if ( a1 )
        {
          v3[2].QuadPart += v9;
        }
        else if ( (LowPart & 1) != 0 )
        {
          v3[3].QuadPart += v9;
        }
        else
        {
          v3[4].QuadPart += v9;
        }
        v3[1] = v7;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C1F4A0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v14 = ((unsigned int)result & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= result;
        if ( v14 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
