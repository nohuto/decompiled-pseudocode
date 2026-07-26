/*
 * XREFs of ?ndisSSGetOidCacheEntry@@YAPEAU_NDIS_OID_CACHE_ENTRY@@PEAU_NDIS_SELECTIVE_SUSPEND@@K@Z @ 0x1C003A082
 * Callers:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A777C (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A7AB4 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_OID_CACHE_ENTRY *__fastcall ndisSSGetOidCacheEntry(struct _NDIS_SELECTIVE_SUSPEND *a1, int a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  _DWORD *i; // rcx

  v2 = (_DWORD *)*((_QWORD *)a1 + 75);
  v3 = 0LL;
  for ( i = v2; *i != a2; i += 6 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 5 )
      return 0LL;
  }
  return (struct _NDIS_OID_CACHE_ENTRY *)&v2[6 * v3];
}
