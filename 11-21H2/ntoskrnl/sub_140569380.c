/*
 * XREFs of sub_140569380 @ 0x140569380
 * Callers:
 *     RtlRestoreContext @ 0x140429CA0 (RtlRestoreContext.c)
 *     sub_140429FE0 @ 0x140429FE0 (sub_140429FE0.c)
 * Callees:
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 */

__int64 __fastcall sub_140569380(__int64 a1, ULONG_PTR a2, _DWORD *a3)
{
  ULONG_PTR v3; // r9
  int v4; // eax

  if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
    v3 = *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232);
  else
    v3 = a2;
  v4 = 0;
  if ( a3 && *a3 == -2147483610 )
    v4 = 2;
  return sub_14054EA40(1, 0LL, a2, v3, *(_QWORD *)(a1 + 248), v4);
}
