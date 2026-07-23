/*
 * XREFs of sub_1409DAC68 @ 0x1409DAC68
 * Callers:
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_1409DAC68()
{
  PVOID *v0; // rax
  _QWORD *v1; // rcx
  _SLIST_HEADER *v2; // rbx
  __int64 v3; // rdi

  v0 = (PVOID *)qword_140C5A600;
  v1 = *(_QWORD **)qword_140C5A600;
  if ( *((PVOID **)qword_140C5A600 + 1) != &qword_140C5A600 )
LABEL_2:
    __fastfail(3u);
  while ( 1 )
  {
    if ( (PVOID *)v1[1] != v0 )
      goto LABEL_2;
    qword_140C5A600 = v1;
    v1[1] = &qword_140C5A600;
    if ( v0 == &qword_140C5A600 )
      break;
    ExFreePoolWithTag(v0, 0);
    v0 = (PVOID *)qword_140C5A600;
    if ( *((PVOID **)qword_140C5A600 + 1) != &qword_140C5A600 )
      goto LABEL_2;
    v1 = *(_QWORD **)qword_140C5A600;
  }
  dword_140C5A610 = 0;
  v2 = &SListHead;
  qword_140C5A618 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead(v2++);
    --v3;
  }
  while ( v3 );
}
