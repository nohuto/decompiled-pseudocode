/*
 * XREFs of RtlpFcAddFeatureUsageDataToBuffer @ 0x140411F44
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 * Callees:
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall RtlpFcAddFeatureUsageDataToBuffer(__int64 a1, const void *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int32 v4; // esi
  const void *v6; // r10
  unsigned __int32 v8; // edi
  int v9; // r9d
  unsigned __int32 i; // edx
  unsigned __int32 v11; // ecx
  unsigned __int32 v12; // eax
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = 0;
  v14 = 0;
  v6 = a2;
  _m_prefetchw((const void *)(a1 + 16));
  v8 = *(_DWORD *)(a1 + 16);
  v9 = v3;
  for ( i = *(_DWORD *)(a1 + 28); v8 != i; i = *(_DWORD *)(a1 + 28) )
  {
    v11 = v8 + v3;
    if ( v8 + (unsigned int)v3 < v8 || v11 < v3 || v11 > i )
      v11 = i;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), v11, v8);
    if ( v8 == v12 )
    {
      v4 = v11 - v12;
      memmove((void *)(a1 + 8 * (v12 + 4LL)), v6, 8LL * (v11 - v12));
      v9 = v3;
      break;
    }
    RtlBackoff(&v14);
    _m_prefetchw((const void *)(a1 + 16));
    v8 = *(_DWORD *)(a1 + 16);
  }
  if ( v4 != v3 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 20), v9 - v4);
    *a3 = v4;
  }
  return v8;
}
