/*
 * XREFs of sub_1409DDF80 @ 0x1409DDF80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140856634 @ 0x140856634 (sub_140856634.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409DDF80(__int64 a1)
{
  _WORD *v2; // rcx
  _WORD *v3; // rdx
  void *v4; // rcx

  v2 = *(_WORD **)(a1 + 40);
  if ( !v2 )
  {
LABEL_5:
    if ( !v2 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v3 = *(_WORD **)(a1 + 48);
  if ( v3 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
  {
    sub_140856634(v2, v3, qword_140A37FB0, 1);
    v2 = *(_WORD **)(a1 + 40);
    goto LABEL_5;
  }
LABEL_6:
  ExFreePoolWithTag(v2, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
LABEL_7:
  v4 = *(void **)(a1 + 48);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
