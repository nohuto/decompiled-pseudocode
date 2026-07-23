/*
 * XREFs of sub_14057DCD0 @ 0x14057DCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E394 @ 0x14057E394 (sub_14057E394.c)
 */

__int64 __fastcall sub_14057DCD0(__int64 a1, __int64 a2)
{
  int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // edi

  v4 = **(unsigned __int8 **)(a2 + 184);
  sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
  v5 = sub_14042A5E0(a1, a2);
  v6 = v5;
  if ( (unsigned int)(v4 - 3) <= 1 )
    sub_14057E394(*(_QWORD *)(a1 + 8), a1, a2, v4, v5);
  return v6;
}
