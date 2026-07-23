/*
 * XREFs of sub_14082F95C @ 0x14082F95C
 * Callers:
 *     sub_14082F914 @ 0x14082F914 (sub_14082F914.c)
 *     sub_140B14608 @ 0x140B14608 (sub_140B14608.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 *     sub_14082FA20 @ 0x14082FA20 (sub_14082FA20.c)
 */

__int64 __fastcall sub_14082F95C(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int128 *a3)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  UNICODE_STRING v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v10 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  v7 = 0LL;
  v8 = *a3;
  while ( 1 )
  {
    sub_14082FA20(&v8, &v7, &v9);
    if ( !v7.Length )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v5 = sub_1406BF400(BugCheckParameter3, v3, &v10);
    else
      v5 = sub_1407C9820(BugCheckParameter3, v3, (unsigned int *)&v10);
    if ( v5 )
    {
      v9 = 0;
      sub_14082F12C(BugCheckParameter3, v5, &v7, &v9);
      v3 = v9;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v10);
      else
        sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v10);
      if ( v3 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return v3;
}
