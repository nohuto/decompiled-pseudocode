/*
 * XREFs of sub_14067EB38 @ 0x14067EB38
 * Callers:
 *     sub_14067EA88 @ 0x14067EA88 (sub_14067EA88.c)
 *     sub_14067EAE0 @ 0x14067EAE0 (sub_14067EAE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14067EB38(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax

  v2 = (__int64 *)(a2 + 16);
  if ( v2 )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( v3 == a1 )
      {
        *v2 = *(_QWORD *)(v3 + 8);
        return;
      }
      v2 = (__int64 *)(v3 + 8);
    }
    while ( v3 != -8 );
  }
}
