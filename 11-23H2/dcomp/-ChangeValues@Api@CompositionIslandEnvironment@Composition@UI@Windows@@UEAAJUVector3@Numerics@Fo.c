/*
 * XREFs of ?ChangeValues@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@MM@Z @ 0x180088E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180088E74 (-ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironment::Api::ChangeValues(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v4 = *a2;
  v5 = v2;
  Windows::UI::Composition::CompositionIslandEnvironment::ChangeValues_NoLock(a1 - 24, &v4);
  return 0LL;
}
