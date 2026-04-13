/*
 * XREFs of ??0_lambda_9fac51eb88c67b78a673ed9c220943b4_@@QEAA@QEAVIdentityManager@ContentManagement@@AEBV?$MoveOnCopy@VHString@Wrappers@WRL@Microsoft@@@Internal@Windows@@@Z @ 0x180029CD4
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180041640 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_9fac51eb88c67b78a673ed9c220943b4_::_lambda_9fac51eb88c67b78a673ed9c220943b4_(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 16) = 0;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
