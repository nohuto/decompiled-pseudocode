/*
 * XREFs of LdrpCreatePendingEnclaveModule @ 0x1800D84C4
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8A40 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     LdrpAllocatePlaceHolder @ 0x18002E360 (LdrpAllocatePlaceHolder.c)
 */

__int64 __fastcall LdrpCreatePendingEnclaveModule(
        _QWORD *a1,
        const void **a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // [rsp+40h] [rbp-18h] BYREF

  result = LdrpAllocatePlaceHolder(a2, a5, a3, a4, a6, (__int64)&v13, a8);
  if ( (int)result >= 0 )
  {
    v11 = v13;
    *(_QWORD *)(v13[22] + 176LL) = a1;
    v12 = (_QWORD *)a1[13];
    if ( (_QWORD *)*v12 != a1 + 12 )
      __fastfail(3u);
    *v11 = a1 + 12;
    v11[1] = v12;
    *v12 = v11;
    a1[13] = v11;
    if ( a7 )
      *a7 = v11;
    if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_180134610, 1u) )
    {
      a1[15] = v11;
    }
    else if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_180134600, 1u) )
    {
      a1[16] = v11;
    }
    return 0LL;
  }
  return result;
}
