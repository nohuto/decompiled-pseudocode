/*
 * XREFs of sub_14052A5C0 @ 0x14052A5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14052A5C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r10

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      sub_14042A5E0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(v2 + 344) + 48LL));
  }
}
