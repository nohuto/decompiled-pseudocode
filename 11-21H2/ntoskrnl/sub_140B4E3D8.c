/*
 * XREFs of sub_140B4E3D8 @ 0x140B4E3D8
 * Callers:
 *     sub_140B4E4C8 @ 0x140B4E4C8 (sub_140B4E4C8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_140B4E2B0 @ 0x140B4E2B0 (sub_140B4E2B0.c)
 */

bool __fastcall sub_140B4E3D8(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF

  v11 = 0LL;
  v13 = 0xFFFFFFFFLL;
  DestinationString = 0LL;
  if ( !a3 || !sub_140B4E2B0(BugCheckParameter3, a2, &v11, (unsigned int *)&v13) )
    return 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, a3) < 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v13);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v13);
    return 0;
  }
  v9 = sub_14082F108(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v13);
  else
    sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v13);
  if ( v9 == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? sub_1406BF400(BugCheckParameter3, v9, a5)
      : sub_1407C9820(BugCheckParameter3, v9, a5);
  *a4 = v10;
  return v10 != 0;
}
