/*
 * XREFs of sub_18008E160 @ 0x18008E160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800161AC @ 0x1800161AC (sub_1800161AC.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_18008E8B8 @ 0x18008E8B8 (sub_18008E8B8.c)
 *     sub_18008E95C @ 0x18008E95C (sub_18008E95C.c)
 */

__int64 __fastcall sub_18008E160(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  sub_18008E8B8(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_18008E95C(a1);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v2 = sub_18008141C(a1);
    v3 = sub_1800161AC(v2, &v7);
    sub_180011020((_QWORD *)(a1 + 1896), v3);
    if ( v8 )
      sub_180010530(v8);
    v4 = *(_QWORD *)(a1 + 1896);
    v5 = sub_18001C680((char *)&v7, (_QWORD *)(a1 + 24), " ColorSampler");
    sub_180029824(v4, (void **)v5);
  }
  return sub_18008E858(a1);
}
