/*
 * XREFs of sub_14079B22C @ 0x14079B22C
 * Callers:
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_14065D320 @ 0x14065D320 (sub_14065D320.c)
 *     sub_14065D7C4 @ 0x14065D7C4 (sub_14065D7C4.c)
 *     sub_14065DC44 @ 0x14065DC44 (sub_14065DC44.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_14079B2C0 @ 0x14079B2C0 (sub_14079B2C0.c)
 *     sub_140914BEC @ 0x140914BEC (sub_140914BEC.c)
 *     sub_14091F7C8 @ 0x14091F7C8 (sub_14091F7C8.c)
 *     sub_14091F87C @ 0x14091F87C (sub_14091F87C.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14079CF44 @ 0x14079CF44 (sub_14079CF44.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

char __fastcall sub_14079B22C(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  char v5; // al
  char v6; // cl
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    v4 = sub_1406BF400(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    v4 = sub_1407C9820(BugCheckParameter2);
  if ( !v4 )
    return 0;
  v5 = sub_14079CF44(BugCheckParameter2, *(unsigned int *)(v4 + 8));
  v6 = *(_BYTE *)(BugCheckParameter2 + 140);
  if ( !v5 )
  {
    if ( (v6 & 1) != 0 )
      sub_1406BF450(BugCheckParameter2, &v8);
    else
      sub_1407C97C0(BugCheckParameter2, &v8);
    return 0;
  }
  if ( (v6 & 1) != 0 )
    sub_1406BF450(BugCheckParameter2, &v8);
  else
    sub_1407C97C0(BugCheckParameter2, &v8);
  sub_14079BD98(BugCheckParameter2, v2);
  return 1;
}
