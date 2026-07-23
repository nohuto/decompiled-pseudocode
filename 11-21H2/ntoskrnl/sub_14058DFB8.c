/*
 * XREFs of sub_14058DFB8 @ 0x14058DFB8
 * Callers:
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_14058DFB8(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    a2[3] = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51E90);
  if ( !a2 )
  {
    ++qword_140C51E98;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140C51E80;
  if ( !qword_140C51E80 )
    goto LABEL_11;
  while ( a1 < v5[3] )
  {
    v6 = (_QWORD *)*v5;
    if ( !*v5 )
      goto LABEL_11;
LABEL_9:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[1];
  if ( v6 )
    goto LABEL_9;
  v2 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C51E80, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140C51E88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51E90);
}
