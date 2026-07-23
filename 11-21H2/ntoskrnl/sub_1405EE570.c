/*
 * XREFs of sub_1405EE570 @ 0x1405EE570
 * Callers:
 *     sub_140296FC0 @ 0x140296FC0 (sub_140296FC0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_140296DC0 @ 0x140296DC0 (sub_140296DC0.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     sub_1403A6AE0 @ 0x1403A6AE0 (sub_1403A6AE0.c)
 */

_BYTE *__fastcall sub_1405EE570(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rdi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  ImageBase = 0LL;
  v4 = sub_1403A6AE0(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v5 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    if ( !v5 )
      return 0LL;
    v6 = ImageBase;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v5 = (PRUNTIME_FUNCTION)sub_140296DC0(a3, (__int64)&v8);
    if ( !v5 )
      return 0LL;
    v6 = *((_QWORD *)&v8 + 1);
  }
  if ( *(_DWORD *)v4 == *(_DWORD *)sub_1403A6AE0(v5, v6, a3) )
    return v4;
  return 0LL;
}
