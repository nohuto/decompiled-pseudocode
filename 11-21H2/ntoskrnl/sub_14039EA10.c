/*
 * XREFs of sub_14039EA10 @ 0x14039EA10
 * Callers:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140273EE0 @ 0x140273EE0 (sub_140273EE0.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     sub_140299240 @ 0x140299240 (sub_140299240.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 *     sub_1403462B0 @ 0x1403462B0 (sub_1403462B0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140424300 @ 0x140424300 (sub_140424300.c)
 *     sub_140428BA0 @ 0x140428BA0 (sub_140428BA0.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     <none>
 */

char sub_14039EA10()
{
  char v0; // dl
  int v2; // ecx
  __int64 *i; // r8
  __int64 v4; // r10

  v0 = 1;
  if ( (dword_140D068EC & 0x400) != 0 && KeGetCurrentIrql() >= 2u && *((_QWORD *)KeGetCurrentPrcb() + 4375) )
  {
    v2 = 0;
    if ( (_DWORD)dword_140D06884 )
    {
      for ( i = qword_140D088C0; ; ++i )
      {
        if ( (*(_BYTE *)(*i + 35) & 1) != 0 )
        {
          v4 = *(_QWORD *)(*i + 35000);
          if ( !v4 || !*(_BYTE *)(v4 + 65) || !*(_BYTE *)(v4 + 64) )
            break;
        }
        if ( ++v2 >= (unsigned int)dword_140D06884 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
