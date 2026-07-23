/*
 * XREFs of sub_140564E78 @ 0x140564E78
 * Callers:
 *     sub_14095ECBC @ 0x14095ECBC (sub_14095ECBC.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

char __fastcall sub_140564E78(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  const UNICODE_STRING *v8; // rcx
  const UNICODE_STRING *v9; // rdx

  if ( !a1 || !a2 )
    return 0;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = a1;
  do
  {
    if ( v5 == a2 )
    {
      KeReleaseQueuedSpinLock(0xAuLL, v4);
      return 1;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v5 );
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( _bittest((const signed __int32 *)(v6 + 396), 0xCu) )
  {
    if ( !_bittest((const signed __int32 *)(a2 + 48), 0xCu) )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
      {
        v8 = (const UNICODE_STRING *)(v6 + 56);
        if ( v8->Length )
        {
          v9 = (const UNICODE_STRING *)(*(_QWORD *)(v7 + 48) + 24LL);
          if ( v8->Length == v9->Length && !RtlCompareUnicodeString(v8, v9, 1u) )
            return 1;
        }
      }
    }
  }
  return 0;
}
