/*
 * XREFs of sub_140840FF8 @ 0x140840FF8
 * Callers:
 *     sub_14083F51C @ 0x14083F51C (sub_14083F51C.c)
 *     sub_1409DA758 @ 0x1409DA758 (sub_1409DA758.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     sub_1403CB238 @ 0x1403CB238 (sub_1403CB238.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *sub_140840FF8()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  qword_140C16E60 = 0LL;
  qword_140C16E68 = 0LL;
  byte_140C16E48 = 0;
  byte_140C16C30 = 0;
  dword_140C18E90 = 0;
  qword_140C16E50 = 0LL;
  dword_140C18E94 = 0;
  dword_140C18E98 = 0;
  memset(&qword_140C5A600, 0, 0x90uLL);
  qword_140C5A608 = (__int64)&qword_140C5A600;
  v0 = 6LL;
  qword_140C5A600 = &qword_140C5A600;
  v1 = &SListHead;
  qword_140C5A620 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(qword_140C16C40, 0, 0x208uLL);
  memset(qword_140C16E80, 0, 0x2008uLL);
  qword_140C18E88 = 0LL;
  qword_140C16808 = (__int64)&qword_140C16800;
  qword_140C16800 = (__int64)&qword_140C16800;
  dword_140C16810 = 0;
  qword_140C16818 = 0LL;
  result = sub_1403CB238();
  byte_140C16E58 = 1;
  return result;
}
