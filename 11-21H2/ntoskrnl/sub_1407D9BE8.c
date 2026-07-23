/*
 * XREFs of sub_1407D9BE8 @ 0x1407D9BE8
 * Callers:
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 * Callees:
 *     sub_14024029C @ 0x14024029C (sub_14024029C.c)
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     sub_14035FB90 @ 0x14035FB90 (sub_14035FB90.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407D9CC0 @ 0x1407D9CC0 (sub_1407D9CC0.c)
 */

__int64 sub_1407D9BE8()
{
  _QWORD *v0; // rbx
  int v1; // esi
  PSLIST_ENTRY v2; // rcx
  _QWORD *p_Next; // rax
  _DWORD *v4; // rdi
  _DWORD *v5; // r14
  _SLIST_ENTRY *v8; // rcx

  v0 = 0LL;
  v1 = 0;
  sub_14035FB90((__int64)&unk_140C4EAC0);
  v2 = ExpInterlockedFlushSList(&stru_140C4EB40);
  if ( v2 )
  {
    do
    {
      p_Next = &v2->Next;
      v2 = v2->Next;
      *p_Next = v0;
      v0 = p_Next;
    }
    while ( v2 );
    while ( 1 )
    {
      v4 = v0;
      v0 = (_QWORD *)*v0;
      v5 = v4 + 12;
      if ( v4[10] )
        break;
LABEL_6:
      sub_14035FAE8((__int64)&unk_140C4EAC0, (__int64)v4, v4[8] - (_DWORD)v4, v4[11], 1);
      if ( !v0 )
        return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = sub_1407D9CC0(v5);
      if ( v1 < 0 )
        break;
      v5 += 4 * ((*v5 >> 2) & 0x3FF);
      if ( v4[10]-- == 1 )
        goto LABEL_6;
    }
    memmove(v4 + 12, v5, (unsigned int)(v4[8] - (_DWORD)v5));
    v8 = (_SLIST_ENTRY *)v4;
    while ( 1 )
    {
      sub_14024029C(v8);
      if ( !v0 )
        break;
      v8 = (_SLIST_ENTRY *)v0;
      v0 = (_QWORD *)*v0;
    }
  }
  return (unsigned int)v1;
}
