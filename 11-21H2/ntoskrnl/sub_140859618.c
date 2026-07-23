/*
 * XREFs of sub_140859618 @ 0x140859618
 * Callers:
 *     sub_140B277F4 @ 0x140B277F4 (sub_140B277F4.c)
 * Callees:
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 */

__int64 __fastcall sub_140859618(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v2 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v2 + 300) == 772 && (*(_DWORD *)(v2 + 396) & 0x6002) == 0 && !*(_QWORD *)(v2 + 432) )
  {
    sub_140779DC4((__int64 **)&P);
    BYTE4(v4) = byte_140C4629A;
    if ( (int)sub_1407743C8(v2, (__int64)&v4) >= 0 )
      sub_1402D2238(v2, 0);
    if ( P )
      sub_140779A50((PVOID **)P);
  }
  return 0LL;
}
