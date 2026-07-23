/*
 * XREFs of sub_14065BF3C @ 0x14065BF3C
 * Callers:
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 * Callees:
 *     sub_14065C2F0 @ 0x14065C2F0 (sub_14065C2F0.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065BF3C(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // esi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v8 = 0LL;
  BugCheckParameter3[0] = 0LL;
  sub_1407C97FC(&v8);
  sub_14065C2F0(a1, BugCheckParameter3, &BugCheckParameter4);
  v2 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    v3 = sub_1406BF400(BugCheckParameter3[0], (unsigned int)BugCheckParameter4);
  else
    v3 = sub_1407C9820(BugCheckParameter3[0]);
  v4 = v3;
  v5 = sub_1406B5158((PSECURITY_DESCRIPTOR)(v3 + 20));
  if ( v4 )
  {
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      sub_1406BF450(v2, &v8);
    else
      sub_1407C97C0(v2, &v8);
  }
  return v5;
}
