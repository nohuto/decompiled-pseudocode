/*
 * XREFs of sub_140A129F4 @ 0x140A129F4
 * Callers:
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140A10CF0 @ 0x140A10CF0 (sub_140A10CF0.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A10AD0 @ 0x140A10AD0 (sub_140A10AD0.c)
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 */

__int64 __fastcall sub_140A129F4(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  const wchar_t *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdi
  wchar_t *v6; // rax
  __int64 v7; // rsi
  size_t v8; // rdi

  v1 = a1;
  if ( *(_QWORD *)(a1 + 72) )
    return 1LL;
  v3 = *(const wchar_t **)(a1 + 64);
  if ( !v3 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 || (a1 = *(_QWORD *)(a1 + 56)) == 0 )
    {
      v4 = -1LL;
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 32) + 2 * v5) );
      do
        ++v4;
      while ( *(_WORD *)(*(_QWORD *)(v1 + 40) + 2 * v4) );
      v6 = (wchar_t *)sub_14075B444(a1, 2LL * (unsigned int)(v4 + v5 + 1));
      v3 = v6;
      if ( !v6 )
        goto LABEL_12;
      v7 = (unsigned int)v5;
      v8 = (unsigned int)v5;
      memmove(v6, *(const void **)(v1 + 32), v8 * 2);
      memmove((void *)&v3[v8], *(const void **)(v1 + 40), 2LL * (unsigned int)v4);
      v3[(unsigned int)v4 + v7] = 0;
    }
    else
    {
      v3 = (const wchar_t *)sub_140A13308(a1, *(_QWORD *)(v1 + 32), *(_QWORD *)(v1 + 40));
      if ( !v3 )
      {
LABEL_12:
        sub_1406E0C3C(1LL, (__int64)"SdbpInitializeSearchDBContext");
        return 0LL;
      }
    }
  }
  *(_QWORD *)(v1 + 64) = v3;
  result = sub_140A10AD0(v3, (_QWORD *)(v1 + 72));
  if ( (_DWORD)result )
    *(_DWORD *)v1 |= 1u;
  return result;
}
