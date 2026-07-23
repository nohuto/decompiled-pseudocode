/*
 * XREFs of sub_14050DF10 @ 0x14050DF10
 * Callers:
 *     sub_14050FCE0 @ 0x14050FCE0 (sub_14050FCE0.c)
 * Callees:
 *     sub_140354420 @ 0x140354420 (sub_140354420.c)
 */

unsigned __int64 __fastcall sub_14050DF10(unsigned int a1)
{
  unsigned int LockArray_high; // ebx
  char v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( !qword_140C4E380 )
    return 0LL;
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( dword_140D01740 )
  {
    v3 = 1;
    if ( (*(_DWORD *)(qword_140C4E380 + 224) & 1) == 0 && LockArray_high )
    {
      v4 = *(unsigned int *)(qword_140C4C728 + 24);
LABEL_9:
      *(_DWORD *)(32LL * LockArray_high + qword_140C4C728 + 24) = v4;
      return v4;
    }
  }
  else
  {
    v3 = 0;
  }
  v5 = sub_140354420(qword_140C4E380, 2u, a1, v3, &v6);
  v4 = v6;
  if ( v5 >= 0 )
    goto LABEL_9;
  return v4;
}
