/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140290864
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1402907E0 (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14034B8D0 (KiLockServiceTable.c)
 *     RtlpLookupUserFunctionTable @ 0x1403A20DC (RtlpLookupUserFunctionTable.c)
 *     KiLockExtendedServiceTable @ 0x1403E3218 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     KiFatalExceptionFilter @ 0x140B740E8 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
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
