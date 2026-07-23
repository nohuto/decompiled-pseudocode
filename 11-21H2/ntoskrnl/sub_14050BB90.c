/*
 * XREFs of sub_14050BB90 @ 0x14050BB90
 * Callers:
 *     HalStartProfileInterrupt @ 0x14050AD30 (HalStartProfileInterrupt.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050BB90(unsigned int a1, _DWORD *a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v7; // rsi
  int v8; // r8d

  if ( off_140C02520 == &off_1400032A0 )
    v7 = qword_140C4D0A8;
  else
    v7 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  v8 = sub_14042A5E0(0LL, a1);
  if ( v8 >= 0 )
  {
    if ( a2 )
      *(_DWORD *)(*(_QWORD *)v7 + 28LL) = *a2;
    if ( a3 )
      *a3 = 0;
    if ( a4 )
      *a4 = &unk_140C4D060;
  }
  return (unsigned int)v8;
}
