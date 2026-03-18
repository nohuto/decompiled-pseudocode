/*
 * XREFs of SepRmDereferenceCapTable @ 0x1405B7F40
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228D00 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316A0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepRmReferenceFindCap @ 0x1405B9948 (SepRmReferenceFindCap.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     SepRmCapUpdateWrkr @ 0x14085D390 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x1409D242C (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
