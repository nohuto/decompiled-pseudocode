/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x14069E2C0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1406711DC (AdtpIsSDValidSelfRelative.c)
 *     SepHasCriticalAcesRemoved @ 0x14069C020 (SepHasCriticalAcesRemoved.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14069CE68 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetControlSecurityDescriptor(unsigned __int8 *a1, _WORD *a2, _DWORD *a3)
{
  *a3 = *a1;
  if ( *a1 != 1 )
    return 3221225560LL;
  *a2 = *((_WORD *)a1 + 1);
  return 0LL;
}
