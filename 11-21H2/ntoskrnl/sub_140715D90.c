/*
 * XREFs of sub_140715D90 @ 0x140715D90
 * Callers:
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14091822C @ 0x14091822C (sub_14091822C.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140715D90(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h]
  int v9; // [rsp+44h] [rbp+1Ch]

  v7 = 0xFFFFFFFFLL;
  v8 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = 0;
  if ( v2 )
    result = sub_1407C9820(BugCheckParameter3);
  else
    result = sub_1406BF400(BugCheckParameter3, a2, &v7);
  v5 = result;
  if ( result )
  {
    v6 = *(unsigned int *)(result + 44);
    if ( (_DWORD)v6 != -1 )
    {
      sub_1402A2104(BugCheckParameter3, v6);
      *(_DWORD *)(v5 + 44) = -1;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return sub_1406BF450(BugCheckParameter3, &v7);
    else
      return sub_1407C97C0(BugCheckParameter3, &v7);
  }
  return result;
}
