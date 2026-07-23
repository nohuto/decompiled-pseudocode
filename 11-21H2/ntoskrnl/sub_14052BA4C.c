/*
 * XREFs of sub_14052BA4C @ 0x14052BA4C
 * Callers:
 *     sub_14052B780 @ 0x14052B780 (sub_14052B780.c)
 *     sub_14052BCA0 @ 0x14052BCA0 (sub_14052BCA0.c)
 *     sub_14052BE78 @ 0x14052BE78 (sub_14052BE78.c)
 *     sub_140A63680 @ 0x140A63680 (sub_140A63680.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14052BA4C(unsigned int a1)
{
  __int64 v2; // rdx
  bool v3; // cf
  __int64 result; // rax
  __int64 v5; // rcx

  if ( off_140C02520 == &off_1400032A0 )
    v2 = qword_140C4D0A8;
  else
    v2 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  v3 = a1 < dword_140C49EA4;
  *(_DWORD *)(*(_QWORD *)(v2 + 8LL * a1) + 32LL) = 0;
  result = *(_QWORD *)(v2 + 8LL * a1);
  *(_DWORD *)(result + 24) = 3;
  if ( v3 )
  {
    _mm_lfence();
    result = *(_QWORD *)(v2 + 8LL * a1);
    v5 = *(_QWORD *)(result + 16);
    if ( *(_BYTE *)(v5 + 8) )
    {
      *(_BYTE *)(v5 + 8) = 0;
      *(_DWORD *)(*(_QWORD *)(v2 + 8LL * (a1 + 1)) + 32LL) = 0;
      result = *(_QWORD *)(v2 + 8LL * (a1 + 1));
      *(_DWORD *)(result + 24) = 3;
    }
  }
  return result;
}
