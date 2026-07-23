/*
 * XREFs of sub_140A80A58 @ 0x140A80A58
 * Callers:
 *     sub_1409848D4 @ 0x1409848D4 (sub_1409848D4.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     sub_14067A4A0 @ 0x14067A4A0 (sub_14067A4A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140A80A58(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx

  if ( !sub_14067A4A0(a1) )
    goto LABEL_6;
  Pool2 = ExAllocatePool2(64LL, 0x10uLL, 0x6F7649u);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = qword_140C46C00;
      qword_140C46C00 = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(Pool2) = 1;
  }
  return Pool2;
}
