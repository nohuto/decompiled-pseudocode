/*
 * XREFs of RtlpHpGCFlushCallback @ 0x18007FC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpGCFlushCallback(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  if ( *(_DWORD *)(a1 + 16) != -571548178 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v1 = *(__int16 *)(a1 + 342);
  v2 = *(_QWORD *)(v1 + a1 + 328) >> *(_BYTE *)(a1 + 331);
  if ( v2 <= 8 )
    v2 = 8LL;
  if ( *(_QWORD *)(v1 + a1 + 336) + *(_QWORD *)(v1 + a1 + 344) > v2 )
    return RtlpHpHeapCompact(a1, 0);
  else
    return 0LL;
}
