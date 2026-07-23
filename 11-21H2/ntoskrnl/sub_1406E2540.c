/*
 * XREFs of sub_1406E2540 @ 0x1406E2540
 * Callers:
 *     <none>
 * Callees:
 *     sub_140209344 @ 0x140209344 (sub_140209344.c)
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 */

__int64 __fastcall sub_1406E2540(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // r11

  v3 = (volatile signed __int32 *)(a1 + 1120);
  if ( (*v3 & 1) == 0 )
  {
    sub_140209344(v3, 4, 32);
    sub_14025863C(a2, 6LL, *(_QWORD *)(v4 + 1088), 0);
  }
  return 0LL;
}
