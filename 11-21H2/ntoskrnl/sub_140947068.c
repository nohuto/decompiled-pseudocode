/*
 * XREFs of sub_140947068 @ 0x140947068
 * Callers:
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14074CC34 @ 0x14074CC34 (sub_14074CC34.c)
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 *     sub_1407EC34C @ 0x1407EC34C (sub_1407EC34C.c)
 *     sub_14086172C @ 0x14086172C (sub_14086172C.c)
 *     sub_140947BEC @ 0x140947BEC (sub_140947BEC.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405573A8 @ 0x1405573A8 (sub_1405573A8.c)
 */

void __fastcall sub_140947068(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _WORD *v13; // rbx
  char *v14; // rdi
  char *v15; // rdi

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 + v11 + v9 <= 0xF0 )
  {
    v12 = sub_1405573A8((unsigned __int8)v10 + (unsigned __int8)v11 + (unsigned __int8)v9);
    v13 = (_WORD *)v12;
    if ( v12 )
    {
      *(_WORD *)(v12 + 6) = v11;
      v14 = (char *)(v12 + v11);
      *(_DWORD *)(v12 + 12) = a3;
      *(_DWORD *)(v12 + 20) = a3;
      *(_WORD *)(v12 + 2) = Size;
      if ( Size )
        memmove((void *)(v12 + 40), a4, Size);
      if ( a1 )
      {
        v13[2] = 1;
        memmove(v14, a1[1], *(unsigned __int16 *)a1);
        v15 = &v14[*(unsigned __int16 *)a1];
        *(_WORD *)v15 = 0;
        v14 = v15 + 2;
      }
      if ( a2 )
      {
        ++v13[2];
        memmove(v14, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v14[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v13);
    }
  }
}
