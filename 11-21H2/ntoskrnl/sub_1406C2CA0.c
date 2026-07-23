/*
 * XREFs of sub_1406C2CA0 @ 0x1406C2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 */

__int64 __fastcall sub_1406C2CA0(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  PVOID *v3; // rbx

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = (PVOID *)(a1 + 24);
    do
    {
      if ( !*v3 )
        break;
      sub_1407A2FA0((ULONG_PTR)*(v3 - 2));
      ObfDereferenceObjectWithTag(*v3, 0x7544624Fu);
      ObfDereferenceObjectWithTag(*(v3 - 2), 0x7544624Fu);
      *v3 = 0LL;
      ++v2;
      v3 += 6;
    }
    while ( v2 < v1 );
  }
  return 0LL;
}
