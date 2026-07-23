/*
 * XREFs of sub_1407221B0 @ 0x1407221B0
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_14071F68C @ 0x14071F68C (sub_14071F68C.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140721FFC @ 0x140721FFC (sub_140721FFC.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140722280 @ 0x140722280 (sub_140722280.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407221B0(ULONG_PTR BugCheckParameter3, _DWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v9 = 0LL;
  sub_1407C97FC(&v13);
  if ( *a2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v10 = sub_1406BF400(BugCheckParameter3, (unsigned int)a2[1], &v13);
    else
      v10 = sub_1407C9820(BugCheckParameter3);
    v9 = v10;
  }
  v11 = sub_140722280(BugCheckParameter3, a4, a5, a6);
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v13);
    else
      sub_1407C97C0(BugCheckParameter3, &v13);
  }
  return v11;
}
