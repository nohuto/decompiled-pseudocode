/*
 * XREFs of TpSetPoolStackInformation @ 0x180050B10
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180031818 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800509F0 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}
