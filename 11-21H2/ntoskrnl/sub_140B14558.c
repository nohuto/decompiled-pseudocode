/*
 * XREFs of sub_140B14558 @ 0x140B14558
 * Callers:
 *     sub_140B13B7C @ 0x140B13B7C (sub_140B13B7C.c)
 *     sub_140B143B0 @ 0x140B143B0 (sub_140B143B0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 */

_WORD *__fastcall sub_140B14558(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int16 v5; // bx
  unsigned __int16 v6; // bx
  _WORD *v7; // rax
  _WORD *v8; // rdi
  _WORD *v10; // rax

  if ( a3 )
    *a3 = 0;
  v5 = *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
  {
    v6 = v5 + 2;
    v10 = (_WORD *)sub_14042A5E0(v6, 0LL);
    v8 = v10;
    if ( v10 )
    {
      memmove(v10, (const void *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
      v8[((unsigned __int64)v6 >> 1) - 1] = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
  v6 = 2 * (v5 + 1);
  v7 = (_WORD *)sub_14042A5E0(v6, 0LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  sub_140718AE8(v7, v6, (unsigned __int8 *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
  v8[((unsigned __int64)v6 >> 1) - 1] = 0;
LABEL_6:
  if ( a3 )
    *a3 = v6;
  return v8;
}
