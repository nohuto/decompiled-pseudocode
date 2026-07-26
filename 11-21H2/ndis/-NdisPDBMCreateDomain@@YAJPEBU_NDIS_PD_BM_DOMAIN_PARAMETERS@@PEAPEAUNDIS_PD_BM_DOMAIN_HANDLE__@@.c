/*
 * XREFs of ?NdisPDBMCreateDomain@@YAJPEBU_NDIS_PD_BM_DOMAIN_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@@Z @ 0x1C0129B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisPDBMCreateDomain(
        const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *a1,
        struct NDIS_PD_BM_DOMAIN_HANDLE__ **a2)
{
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *PoolWithTag; // rax

  *a2 = 0LL;
  if ( a1->Header.Type != 0x80 || a1->Header.Revision != 1 || a1->Header.Size < 8u || (a1->Flags & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 12) = 0;
  *((_DWORD *)PoolWithTag + 7) = 0;
  *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 2;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 2;
  if ( (a1->Flags & 1) != 0 )
    *((_BYTE *)PoolWithTag + 24) = 1;
  *a2 = PoolWithTag;
  return 0LL;
}
