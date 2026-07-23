/*
 * XREFs of IoGetSilo @ 0x1402A3FD0
 * Callers:
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != off_140C06A80 && (v2 = v1[8]) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
