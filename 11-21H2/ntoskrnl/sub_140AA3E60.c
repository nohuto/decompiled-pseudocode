/*
 * XREFs of sub_140AA3E60 @ 0x140AA3E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

char __fastcall sub_140AA3E60(__int64 a1)
{
  ULONG_PTR v2; // r8
  char result; // al

  sub_1406021F8(*(_QWORD *)(a1 + 8), *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 8LL));
  v2 = *(_QWORD *)(a1 + 8);
  result = *(_WORD *)(v2 + 10) & 0x11;
  if ( result == 1 )
    return sub_140A8C924(0xC4u, 0xB8uLL, v2, *(__int16 *)(v2 + 10), 0LL);
  return result;
}
