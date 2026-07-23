/*
 * XREFs of sub_140400FE0 @ 0x140400FE0
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_1404019F4 @ 0x1404019F4 (sub_1404019F4.c)
 *     sub_140406B10 @ 0x140406B10 (sub_140406B10.c)
 * Callees:
 *     sub_14040BC34 @ 0x14040BC34 (sub_14040BC34.c)
 */

__int64 __fastcall sub_140400FE0(int a1, int a2, int a3, _DWORD *a4, void *a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // ebx

  v8 = sub_14040BC34(a1, a2, a3, (int)a4, a5, a6, a7);
  if ( !v8 )
    (*(void (__fastcall **)(_DWORD *, void *, __int64, __int64))((char *)off_140006960 + (*a4 & 0x380)))(a4, a5, a6, a7);
  return v8;
}
