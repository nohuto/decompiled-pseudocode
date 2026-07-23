/*
 * XREFs of sub_140A22F0C @ 0x140A22F0C
 * Callers:
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A22A30 @ 0x140A22A30 (sub_140A22A30.c)
 *     sub_140A22B30 @ 0x140A22B30 (sub_140A22B30.c)
 */

__int64 __fastcall sub_140A22F0C(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  UNICODE_STRING *v4; // rbx
  _QWORD *v5; // rax
  PVOID *v6; // rcx
  _QWORD **v7; // rdx
  PVOID *Buffer; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&qword_140D00AC0;
  P = 0LL;
  result = sub_140A22B30(*(__int64 *)&qword_140D00AC0, a2, 0, (const UNICODE_STRING **)&P);
  if ( (int)result >= 0 )
  {
    v4 = (UNICODE_STRING *)P;
    if ( P == *(PVOID *)(v2 + 88) )
    {
      return 3221225659LL;
    }
    else
    {
      v5 = *(_QWORD **)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P
        || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P)
        || (*v6 = v5, v5[1] = v6, v7 = *(_QWORD ***)&v4[1].Length, v7[1] != (_QWORD *)&v4[1])
        || (Buffer = (PVOID *)v4[1].Buffer, *Buffer != &v4[1]) )
      {
        __fastfail(3u);
      }
      *Buffer = v7;
      v7[1] = Buffer;
      memset((void *)(v2 + 96), 0, 0x80uLL);
      *(_BYTE *)(v2 + 4) = *(_QWORD *)(v2 + 56) != v2 + 56;
      return sub_140A22A30(v4);
    }
  }
  return result;
}
