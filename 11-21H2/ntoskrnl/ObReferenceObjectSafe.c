/*
 * XREFs of ObReferenceObjectSafe @ 0x1402240B0
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_140663FAC @ 0x140663FAC (sub_140663FAC.c)
 *     sub_140667F24 @ 0x140667F24 (sub_140667F24.c)
 *     sub_14069B58C @ 0x14069B58C (sub_14069B58C.c)
 *     sub_14074DD38 @ 0x14074DD38 (sub_14074DD38.c)
 *     sub_14074E130 @ 0x14074E130 (sub_14074E130.c)
 *     sub_14074EA08 @ 0x14074EA08 (sub_14074EA08.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     sub_1407A7098 @ 0x1407A7098 (sub_1407A7098.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407AA950 @ 0x1407AA950 (sub_1407AA950.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     sub_140966F60 @ 0x140966F60 (sub_140966F60.c)
 *     sub_140967470 @ 0x140967470 (sub_140967470.c)
 *     sub_14098501C @ 0x14098501C (sub_14098501C.c)
 *     sub_140A80A58 @ 0x140A80A58 (sub_140A80A58.c)
 * Callees:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( dword_140D05010 )
    sub_1405C5EC8((_DWORD)v1);
  return 1;
}
