/*
 * XREFs of sub_1403B7B80 @ 0x1403B7B80
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_140251B4C @ 0x140251B4C (sub_140251B4C.c)
 *     sub_1402745EC @ 0x1402745EC (sub_1402745EC.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 */

__int64 sub_1403B7B80()
{
  unsigned int v0; // esi
  __int64 i; // rdi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // ecx
  ULONG_PTR v8; // rax

  v0 = 0;
  for ( i = 0LL; ; ++i )
  {
    v2 = 2LL * v0;
    InitializeSListHead((PSLIST_HEADER)&qword_140C4F040[v2 + 2100]);
    InitializeSListHead((PSLIST_HEADER)&qword_140C4F040[v2 + 2104]);
    v3 = v0 != 0 ? 16 : 8;
    *((_BYTE *)&qword_140C4F040[2108] + i) = v0 != 0 ? 16 : 8;
    v4 = sub_140251B4C(v0, v3);
    if ( !v4 )
      break;
    qword_140C4F040[i + 2109] = v4;
    v5 = (-(__int64)(v0 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368;
    qword_140C4F040[i + 2111] = v4 + v5 * v3;
    v6 = (unsigned int *)(v4 + 192);
    do
    {
      v7 = *v6 | 0x40;
      if ( i )
        v7 = *v6 & 0xFFFFFFBF;
      *v6 = v7;
      sub_1402745EC((PSLIST_ENTRY)v6 - 12);
      v6 = (unsigned int *)((char *)v6 + v5);
      --v3;
    }
    while ( v3 );
    if ( (int)++v0 >= 2 )
    {
      v8 = sub_1403095B0((__int64)&qword_140C534C0, 0x10u);
      if ( v8 )
      {
        qword_140C53250 = 0LL;
        qword_140C53248 = v8;
        return 1LL;
      }
      return 0LL;
    }
  }
  return 0LL;
}
