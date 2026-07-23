/*
 * XREFs of sub_140A30510 @ 0x140A30510
 * Callers:
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_140827238 @ 0x140827238 (sub_140827238.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 *     sub_140A304B4 @ 0x140A304B4 (sub_140A304B4.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     sub_1406C59F0 @ 0x1406C59F0 (sub_1406C59F0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A30510(__int64 a1, void *a2)
{
  int v4; // esi
  void **v5; // rdx
  void **v6; // rcx
  void *v7; // rax
  void *v8; // rdi

  v4 = sub_1406C59F0(a1, (__int64)a2);
  if ( v4 >= 0 )
  {
    v5 = *(void ***)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( v5[1] != a2 || (v6 = (void **)*((_QWORD *)a2 + 1), *v6 != a2) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
    }
    v7 = *(void **)(a1 + 32);
    if ( v7 == a2 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v7 = 0LL;
    }
    if ( *(void **)(a1 + 40) == a2 )
      *(_QWORD *)(a1 + 40) = v7;
    v8 = (void *)*((_QWORD *)a2 + 19);
    if ( v8 )
    {
      ExDeleteResourceLite(*((PERESOURCE *)a2 + 19));
      ExFreePoolWithTag(v8, 0);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 1);
    RtlFreeUnicodeString((PUNICODE_STRING)a2 + 3);
    ExFreePoolWithTag(a2, 0);
  }
  return (unsigned int)v4;
}
