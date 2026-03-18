/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140290984
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x140290900 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14034BED0 (KiLockServiceTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1403A289C (RtlpLookupUserFunctionTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3878 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     KiFatalExceptionFilter @ 0x140B73480 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(int a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, (int)a2, 3, (int)a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
