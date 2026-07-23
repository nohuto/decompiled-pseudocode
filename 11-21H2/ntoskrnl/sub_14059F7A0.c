/*
 * XREFs of sub_14059F7A0 @ 0x14059F7A0
 * Callers:
 *     sub_14059F6F4 @ 0x14059F6F4 (sub_14059F6F4.c)
 *     sub_14059FC8C @ 0x14059FC8C (sub_14059FC8C.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_14059F7A0(unsigned int *a1)
{
  __int64 v1; // rax
  unsigned int v3; // esi
  unsigned __int64 *v4; // r14
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r10
  _QWORD *BugCheckParameter4; // rdx
  bool v8; // r8
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // rcx
  _QWORD *v11; // rax

  v1 = (int)a1[1];
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)&unk_140C4F458 + 8 * v1);
  v5 = a1 + 2;
  if ( !*a1 )
    return v1;
  do
  {
    v6 = v5[4];
    LOBYTE(v1) = 0;
    if ( v6 == 0x8000000000000000uLL )
      goto LABEL_13;
    BugCheckParameter4 = (_QWORD *)*v4;
    v8 = 0;
    if ( !*v4 )
      goto LABEL_12;
    v9 = v5[5];
    while ( 1 )
    {
      v10 = BugCheckParameter4[4];
      if ( v9 + v6 > v10 )
        break;
      v11 = (_QWORD *)*BugCheckParameter4;
      if ( !*BugCheckParameter4 )
      {
        v8 = 0;
        goto LABEL_12;
      }
LABEL_10:
      BugCheckParameter4 = v11;
    }
    if ( v6 < BugCheckParameter4[5] + v10 )
      KeBugCheckEx(0x1Au, 0x13003uLL, v6, v9, (ULONG_PTR)BugCheckParameter4);
    v11 = (_QWORD *)BugCheckParameter4[1];
    if ( v11 )
      goto LABEL_10;
    v8 = 1;
LABEL_12:
    LOBYTE(v1) = RtlAvlInsertNodeEx(v4, (unsigned __int64)BugCheckParameter4, v8, v5);
LABEL_13:
    ++v3;
    v5 += 6;
  }
  while ( v3 < *a1 );
  return v1;
}
