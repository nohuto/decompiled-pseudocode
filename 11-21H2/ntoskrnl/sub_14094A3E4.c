/*
 * XREFs of sub_14094A3E4 @ 0x14094A3E4
 * Callers:
 *     sub_14094A4EC @ 0x14094A4EC (sub_14094A4EC.c)
 * Callees:
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     sub_140699B5C @ 0x140699B5C (sub_140699B5C.c)
 *     sub_1406CB238 @ 0x1406CB238 (sub_1406CB238.c)
 *     sub_140862B44 @ 0x140862B44 (sub_140862B44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14094A3E4(char *a1, int a2, int a3)
{
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int i; // edi
  wchar_t *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  v5 = sub_140699B5C(a2, a3, (PVOID *)&Str);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&qword_140D00AC0 && (v6 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
      v7 = *(_QWORD *)(v6 + 8);
    else
      v7 = 0LL;
    v5 = sub_1406CB238((__int64)a1, (__int64)Str, v7, 0);
    v8 = 2;
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 != 2 )
        goto LABEL_17;
      v8 = 1;
    }
    for ( i = 0; i < v8; ++i )
    {
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        *v11 = 0;
        if ( *(_QWORD *)&qword_140D00AC0 && (v12 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
          v13 = *(_QWORD *)(v12 + 8);
        else
          v13 = 0LL;
        if ( (int)sub_140862B44(a1, Str, v13) < 0 )
          break;
      }
    }
  }
LABEL_17:
  if ( Str )
    ExFreePoolWithTag(Str, 0x58706E50u);
  return (unsigned int)v5;
}
