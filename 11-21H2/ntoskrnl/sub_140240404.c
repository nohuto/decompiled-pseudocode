/*
 * XREFs of sub_140240404 @ 0x140240404
 * Callers:
 *     sub_14023F108 @ 0x14023F108 (sub_14023F108.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     sub_14039D960 @ 0x14039D960 (sub_14039D960.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

char __fastcall sub_140240404(int *a1)
{
  int v2; // ecx
  int v3; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = v2;
  do
  {
    if ( (v2 & 1) == 0 && !_interlockedbittestandset(a1, 0) )
      return 1;
    sub_1402F32E0(&v6);
    v2 = *a1;
    v5 = *a1 - v3;
  }
  while ( v5 < 3 && (v5 < 2 || (v3 & 1) != 0) );
  return 0;
}
