/*
 * XREFs of sub_14052BFC0 @ 0x14052BFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052BCA0 @ 0x14052BCA0 (sub_14052BCA0.c)
 *     sub_14052BE78 @ 0x14052BE78 (sub_14052BE78.c)
 */

void sub_14052BFC0()
{
  ULONG ActiveProcessorCount; // eax
  char v6; // bl
  unsigned int *v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-40h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-20h] BYREF

  _RAX = 0x80000000LL;
  __asm { cpuid }
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)_RAX >= 0x8000001E && (dword_140C49F08 & 6) != 0 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0;
    if ( ActiveProcessorCount )
    {
      v7 = dword_140D0E5E0;
      v8 = ActiveProcessorCount;
      do
      {
        v9 = *v7;
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
        Affinity.Mask = 1LL << (v9 & 0x3F);
        if ( v6 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v6 = 1;
        }
        if ( (dword_140C49F08 & 2) != 0 )
          sub_14052BE78();
        if ( (dword_140C49F08 & 4) != 0 )
          sub_14052BCA0();
        ++v7;
        --v8;
      }
      while ( v8 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
}
