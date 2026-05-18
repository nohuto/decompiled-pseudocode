/*
 * XREFs of sub_1800B806C @ 0x1800B806C
 * Callers:
 *     sub_1800B7F10 @ 0x1800B7F10 (sub_1800B7F10.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180044708 @ 0x180044708 (sub_180044708.c)
 */

__int64 __fastcall sub_1800B806C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v5 >= 0x10 )
  {
    result = 0LL;
    v8 = (v3 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v8 = 0LL;
    if ( v8 )
    {
      result = a3;
      memset64(*(void **)a1, a3, v8);
    }
  }
  else
  {
    v6 = (__int64 *)sub_180011088(0x80uLL);
    if ( v5 )
      sub_180010884(*(char **)a1, 8 * v5);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v6 + 16;
    *(_QWORD *)(a1 + 16) = v6 + 16;
    return sub_180044708(v6, v6 + 16, (__int64 *)&v9);
  }
  return result;
}
