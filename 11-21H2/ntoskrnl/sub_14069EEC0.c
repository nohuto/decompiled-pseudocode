/*
 * XREFs of sub_14069EEC0 @ 0x14069EEC0
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14091D1FC @ 0x14091D1FC (sub_14091D1FC.c)
 * Callees:
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_140721CA0 @ 0x140721CA0 (sub_140721CA0.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

_UNKNOWN **__fastcall sub_14069EEC0(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 v8; // rdi
  __int64 v9; // rdx
  _UNKNOWN **v10; // rbp
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    v8 = sub_14069F1CC(a1);
    result = (_UNKNOWN **)sub_140721CE0(a2, v9);
    v10 = result;
    v11 = *((unsigned int *)result + 10);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (ULONG_PTR)result[4];
      *(_QWORD *)v8 = v12;
      *(_DWORD *)(v8 + 8) = v11;
      if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
        result = (_UNKNOWN **)sub_1406BF400(v12, v11);
      else
        result = (_UNKNOWN **)sub_1407C9820(v12);
      *(_QWORD *)(v8 + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)sub_140721CA0(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
