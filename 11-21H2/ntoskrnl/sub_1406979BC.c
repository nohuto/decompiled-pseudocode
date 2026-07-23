/*
 * XREFs of sub_1406979BC @ 0x1406979BC
 * Callers:
 *     sub_14069760C @ 0x14069760C (sub_14069760C.c)
 *     sub_140697824 @ 0x140697824 (sub_140697824.c)
 *     sub_140698128 @ 0x140698128 (sub_140698128.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406979BC(__int64 a1)
{
  void *v2; // rcx
  unsigned int i; // edi
  char *v4; // rcx
  void **v5; // rdx
  void *v6; // rbx
  void **v7; // rax
  void *v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r8

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < 0x7F; ++i )
    {
      while ( 1 )
      {
        v4 = *(char **)(a1 + 24);
        v5 = (void **)&v4[16 * i];
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( *((void ***)v6 + 1) != v5 || (v7 = *(void ***)v6, *(void **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        RtlFreeUnicodeString((PUNICODE_STRING)v6 + 1);
        v8 = (void *)*((_QWORD *)v6 + 5);
        if ( v8 )
        {
          v9 = *((_DWORD *)v6 + 8);
          if ( (_WORD)v9 == 0x8000 )
          {
            if ( (v9 & 0x100000) != 0 )
            {
              if ( *(_QWORD *)&qword_140D00AC0 && (v10 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
                v11 = *(_QWORD *)(v10 + 8);
              else
                v11 = 0LL;
              sub_1406CB238(v8, 0LL, v11, 0LL);
            }
            ZwClose(*((HANDLE *)v6 + 5));
          }
          else
          {
            ExFreePoolWithTag(v8, 0);
          }
        }
        ExFreePoolWithTag(v6, 0);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ZwClose(v2);
}
