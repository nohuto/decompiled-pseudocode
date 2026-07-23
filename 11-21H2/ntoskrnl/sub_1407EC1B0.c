/*
 * XREFs of sub_1407EC1B0 @ 0x1407EC1B0
 * Callers:
 *     sub_1406C0298 @ 0x1406C0298 (sub_1406C0298.c)
 *     sub_1407EC100 @ 0x1407EC100 (sub_1407EC100.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407EC1B0(WNF_STATE_NAME *P)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi
  _DWORD *v4; // rcx

  v2 = P + 8;
  v3 = 3LL;
  do
  {
    v4 = (_DWORD *)*v2;
    if ( *v2 )
    {
      if ( (*v4)-- == 1 )
        ExFreePoolWithTag(v4, 0x74655350u);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( P[7].Data[0] || P[7].Data[1] )
    ZwDeleteWnfStateName(P + 7);
  ExFreePoolWithTag(P, 0x74655350u);
}
