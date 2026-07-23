/*
 * XREFs of sub_1406B50AC @ 0x1406B50AC
 * Callers:
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_140918174 @ 0x140918174 (sub_140918174.c)
 * Callees:
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1406B50AC(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = BugCheckParameter4;
  sub_1407C97FC(&v7);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter3, v3);
  else
    v4 = sub_1407C9820(BugCheckParameter3);
  if ( v4 )
  {
    v5 = sub_1406B5158((PSECURITY_DESCRIPTOR)(v4 + 20));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v7);
    else
      sub_1407C97C0(BugCheckParameter3, &v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
