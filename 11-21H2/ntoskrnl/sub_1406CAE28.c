/*
 * XREFs of sub_1406CAE28 @ 0x1406CAE28
 * Callers:
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_1406CAEB4 @ 0x1406CAEB4 (sub_1406CAEB4.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 */

__int64 __fastcall sub_1406CAE28(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx

  if ( *(__int16 *)(BugCheckParameter2 + 66) >= 127 )
    return 3221225485LL;
  result = ((__int64 (*)(void))sub_1406CAEB4)();
  if ( (int)result >= 0 )
  {
    result = sub_1406CAEB4(a2);
    if ( (int)result >= 0 )
    {
      sub_14071B250(BugCheckParameter2);
      v5 = *(_QWORD **)(a2 + 192);
      *(_WORD *)(a2 + 66) = *(_WORD *)(BugCheckParameter2 + 66) + 1;
      v6 = *(_QWORD *)(BugCheckParameter2 + 192);
      v5[3] = v6;
      v7 = v6 + 32;
      v8 = *(_QWORD **)(v7 + 8);
      if ( *v8 != v7 )
        __fastfail(3u);
      *v5 = v7;
      v5[1] = v8;
      *v8 = v5;
      *(_QWORD *)(v7 + 8) = v5;
      return 0LL;
    }
  }
  return result;
}
