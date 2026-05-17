/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800FFD80
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  __int64 v6; // rcx
  size_t *v7; // r14
  size_t v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // r12
  _QWORD *v11; // r15
  size_t v12; // rsi
  size_t v13; // rcx
  size_t v14; // rax
  __int64 result; // rax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = *(_QWORD *)(a3 + 72);
    v7 = (size_t *)(a3 + 56);
    v8 = *(_QWORD *)(a3 + 56);
    if ( v6 + Size <= v8 )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 48) + v6), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 72);
      v10 = (_QWORD *)(a3 + 48);
      v11 = (_QWORD *)(a3 + 64);
      while ( 1 )
      {
        v12 = v8 - v9;
        memmove((void *)(v9 + *v10), Src, v12);
        v4 -= v12;
        *v11 += *v7;
        Src += v12;
        if ( *v11 >= *(_QWORD *)(a3 + 8) )
          break;
        NtUnmapViewOfSection();
        v13 = *v7;
        v14 = *(_QWORD *)(a3 + 8) - *v11;
        *v10 = 0LL;
        if ( v13 >= v14 )
          v13 = v14;
        *v7 = v13;
        result = ZwMapViewOfSection();
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        v9 = 0LL;
        v8 = *v7;
        v6 = 0LL;
        if ( v4 <= *v7 )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0LL;
}
