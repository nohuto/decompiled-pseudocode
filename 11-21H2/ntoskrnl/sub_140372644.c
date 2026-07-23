/*
 * XREFs of sub_140372644 @ 0x140372644
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     sub_1402D708C @ 0x1402D708C (sub_1402D708C.c)
 *     sub_140389D88 @ 0x140389D88 (sub_140389D88.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 * Callees:
 *     sub_14037270C @ 0x14037270C (sub_14037270C.c)
 *     sub_140372774 @ 0x140372774 (sub_140372774.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

__int64 __fastcall sub_140372644(__int16 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rsi
  char v5; // bl
  __int64 *v7; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( a3 < 0 || !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (__int64 *)bsearch(
                    &Key,
                    &off_140004470,
                    0x1B4uLL,
                    0x10uLL,
                    (int (__cdecl *)(const void *, const void *))sub_14025ABE0);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)sub_140372774(v7) )
    return 0LL;
  v9 = *v7;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(v9 + 2 * v10) );
  if ( a2 && (int)sub_14037270C(a2, v4, v9, v10 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v10 + 1);
}
