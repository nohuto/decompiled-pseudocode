/*
 * XREFs of sub_140370898 @ 0x140370898
 * Callers:
 *     sub_14037039C @ 0x14037039C (sub_14037039C.c)
 * Callees:
 *     sub_140371BFC @ 0x140371BFC (sub_140371BFC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140370898(_QWORD *a1, __int64 a2, unsigned int a3)
{
  void *v6; // rax
  void *v7; // rbx

  v6 = (void *)sub_14042A5E0(*a1, ((((unsigned int)dword_140C1BBE0 >> 10) & 1) + 1LL) << 6);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    sub_140371BFC(v7, *(unsigned __int8 *)(a2 + 1), a3, a1);
  }
  return v7;
}
