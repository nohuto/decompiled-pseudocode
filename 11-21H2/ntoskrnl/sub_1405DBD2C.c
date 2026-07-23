/*
 * XREFs of sub_1405DBD2C @ 0x1405DBD2C
 * Callers:
 *     sub_1405CD1FC @ 0x1405CD1FC (sub_1405CD1FC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405DBD2C(unsigned __int8 a1)
{
  int v1; // esi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  int v5; // edx
  LARGE_INTEGER v6; // rcx
  LONGLONG v7; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf
  LARGE_INTEGER v12; // [rsp+38h] [rbp+10h] BYREF

  v12.QuadPart = 0LL;
  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F4A0);
  v3 = qword_140C1F490;
  v4 = v2;
  if ( qword_140C1F490 )
  {
    if ( (*(_DWORD *)qword_140C1F490 & 0x10) != 0 && (*(_DWORD *)qword_140C1F490 & 1) != v1 )
    {
      v5 = *(_DWORD *)qword_140C1F490 ^ ((unsigned __int8)*(_DWORD *)qword_140C1F490 ^ (unsigned __int8)v1) & 1;
      *(_DWORD *)qword_140C1F490 = v5;
      if ( (v5 & 2) == 0 )
      {
        KeQueryInterruptTimePrecise(&v12);
        v6 = v12;
        v7 = v12.QuadPart - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6.QuadPart;
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
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
