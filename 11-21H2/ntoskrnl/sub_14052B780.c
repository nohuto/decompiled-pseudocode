/*
 * XREFs of sub_14052B780 @ 0x14052B780
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052B630 @ 0x14052B630 (sub_14052B630.c)
 *     sub_14052BA4C @ 0x14052BA4C (sub_14052BA4C.c)
 */

unsigned __int64 __fastcall sub_14052B780(int a1, unsigned int *a2)
{
  unsigned __int64 result; // rax
  int LockArray_high; // ecx
  __int64 v5; // r8
  __int64 v6; // rbx
  signed __int64 v7; // rcx
  bool v8; // cc
  signed __int64 v9; // rcx

  result = (unsigned __int64)&off_1400032A0;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( off_140C02520 == &off_1400032A0 )
  {
    v5 = qword_140C4D0A8;
  }
  else
  {
    result = qword_140C4D0A8;
    v5 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * LockArray_high);
  }
  if ( a2 )
  {
    v6 = *a2;
    if ( a1 == 32 )
      return result;
    if ( (unsigned int)v6 >= dword_140C49EA4 )
    {
      v7 = _InterlockedExchangeAdd64(
             (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 16LL) + 16LL),
             0xFFFFFFFFFFFFFFFFuLL);
      v8 = v7 <= 1;
      v9 = v7 - 1;
      if ( !v8 )
        return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
      if ( v9 )
        __fastfail(0xEu);
    }
LABEL_15:
    sub_14052B630(v6, 0, 0LL, 0LL, 0);
    sub_14052BA4C((unsigned int)v6);
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)KeGetCurrentPrcb() + 22, 0xFFFFFFFE);
  }
  result = (unsigned int)dword_140C49FE0;
  LODWORD(v6) = 0;
  if ( dword_140C49FE0 )
  {
    do
    {
      if ( !*(_DWORD *)(*(_QWORD *)v5 + 24LL) && *(_DWORD *)(*(_QWORD *)v5 + 32LL) == a1 )
        break;
      LODWORD(v6) = v6 + 1;
      v5 += 8LL;
    }
    while ( (unsigned int)v6 < dword_140C49FE0 );
  }
  if ( (_DWORD)v6 != dword_140C49FE0 )
    goto LABEL_15;
  return result;
}
