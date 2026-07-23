/*
 * XREFs of sub_1409778EC @ 0x1409778EC
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_1405A3738 @ 0x1405A3738 (sub_1405A3738.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409778EC(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int v4; // r8d
  struct _MDL *i; // rcx
  struct _MDL *v6; // rax
  struct _MDL *v7; // rdi
  void *v8; // rcx
  void *v9; // rcx

  if ( (*(_DWORD *)(a1 + 140) & 2) != 0 )
    sub_1405A3738((_QWORD *)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    goto LABEL_7;
  v3 = (_QWORD *)sub_140313C70(*(_QWORD *)(v2 + 24));
  sub_1402BB6D0((__int64)&qword_140C534C0, v3, v4);
  *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) &= ~1u;
  for ( i = *(struct _MDL **)(a1 + 64); ; i = v7 )
  {
    IoFreeMdl(i);
LABEL_7:
    v6 = *(struct _MDL **)(a1 + 56);
    v7 = v6;
    if ( !v6 )
      break;
    *(_QWORD *)(a1 + 56) = v6->Next;
    MmUnlockPages(v6);
  }
  v8 = *(void **)(a1 + 40);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v9 = *(void **)(a1 + 48);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
