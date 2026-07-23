/*
 * XREFs of sub_140236710 @ 0x140236710
 * Callers:
 *     sub_1402366D4 @ 0x1402366D4 (sub_1402366D4.c)
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 *     sub_14038A830 @ 0x14038A830 (sub_14038A830.c)
 *     sub_14038DF70 @ 0x14038DF70 (sub_14038DF70.c)
 *     sub_140597560 @ 0x140597560 (sub_140597560.c)
 *     sub_14059770C @ 0x14059770C (sub_14059770C.c)
 *     sub_14062F0B8 @ 0x14062F0B8 (sub_14062F0B8.c)
 *     sub_14063F394 @ 0x14063F394 (sub_14063F394.c)
 *     sub_1406AFBF0 @ 0x1406AFBF0 (sub_1406AFBF0.c)
 *     sub_140A01E60 @ 0x140A01E60 (sub_140A01E60.c)
 *     sub_140A485A0 @ 0x140A485A0 (sub_140A485A0.c)
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 * Callees:
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 */

void *__fastcall sub_140236710(void *a1)
{
  void *v1; // rbx
  void *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // r8

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    v3 = sub_140363D98(a1);
    v5 = (void *)v3;
    if ( !v3 )
      break;
    if ( (unsigned __int8)sub_1403606EC(v3, v4, v3) )
    {
      v2 = v5;
      break;
    }
    a1 = v5;
  }
  if ( v1 )
    sub_1403606C4(v1, v4, v5);
  return v2;
}
