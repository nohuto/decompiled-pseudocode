/*
 * XREFs of sub_14022D9F0 @ 0x14022D9F0
 * Callers:
 *     sub_14022D9C0 @ 0x14022D9C0 (sub_14022D9C0.c)
 *     sub_14039188C @ 0x14039188C (sub_14039188C.c)
 *     sub_140391A94 @ 0x140391A94 (sub_140391A94.c)
 *     HalGetEnvironmentVariable @ 0x140508580 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140508720 (HalSetEnvironmentVariable.c)
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_14050BD94 @ 0x14050BD94 (sub_14050BD94.c)
 *     sub_14050BF10 @ 0x14050BF10 (sub_14050BF10.c)
 *     sub_1405183DC @ 0x1405183DC (sub_1405183DC.c)
 *     sub_140523400 @ 0x140523400 (sub_140523400.c)
 *     sub_140523480 @ 0x140523480 (sub_140523480.c)
 *     sub_1405234F0 @ 0x1405234F0 (sub_1405234F0.c)
 *     sub_1405235A0 @ 0x1405235A0 (sub_1405235A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14022D9F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  __int16 v6; // [rsp+20h] [rbp-8h]

  v3 = 0;
  while ( 1 )
  {
    _disable();
    LODWORD(a1) = HIDWORD(KeGetPcr()[1].LockArray);
    v4 = v6 & 0x200;
    LOBYTE(a3) = (v6 & 0x200) != 0;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140C0B460, a1, -1);
    if ( (_DWORD)result == -1 )
      break;
    if ( (v6 & 0x200) != 0 )
      _enable();
    while ( dword_140C0B460 != -1 )
    {
      if ( qword_140C4C1F8 )
        sub_14042A5E0(a1, v4, a3);
      if ( (++v3 & dword_140C4C47C) != 0 || !qword_140C4C480 )
        _mm_pause();
      else
        sub_14042A5E0(v3, v4, a3);
    }
  }
  byte_140C4C1F0 = (v6 & 0x200) != 0;
  return result;
}
