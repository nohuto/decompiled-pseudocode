/*
 * XREFs of sub_140237A0C @ 0x140237A0C
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 * Callees:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_140238294 @ 0x140238294 (sub_140238294.c)
 *     sub_1402382D0 @ 0x1402382D0 (sub_1402382D0.c)
 *     sub_1406AFCA8 @ 0x1406AFCA8 (sub_1406AFCA8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140237A0C(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_DWORD *)(a1 + 4248) |= 1u;
  sub_140237ABC(a1 + 80, 0LL);
  sub_140237ABC(a1 + 2016, 0LL);
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 72);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a1 + 4016);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(a1 + 4208);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  sub_1402382D0(a1 + 3960);
  sub_1406AFCA8(a1 + 4064);
  return sub_140238294(a1);
}
