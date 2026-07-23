/*
 * XREFs of sub_14038DF70 @ 0x14038DF70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14038E01C @ 0x14038E01C (sub_14038E01C.c)
 *     sub_14038E4BC @ 0x14038E4BC (sub_14038E4BC.c)
 */

LONG __fastcall sub_14038DF70(unsigned int a1)
{
  __int64 v2; // rsi
  void *i; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi

  v2 = sub_14023FF18((__int64)&StartContext, 0);
  for ( i = 0LL; ; i = v5 )
  {
    v4 = sub_140236710(i);
    v5 = v4;
    if ( !v4 )
      break;
    v6 = *v4;
    if ( a1 )
    {
      sub_14038E4BC(*v4, a1);
      *(_BYTE *)(v6 + 15588) = 0;
    }
    sub_14038E01C(v6);
  }
  if ( v2 )
    sub_14023FD0C(v2, 1);
  _InterlockedDecrement(&dword_140C53440);
  stru_140C529E8.Parameter = (PVOID)-1LL;
  return KeSetEvent(&stru_140C529D0, 0, 0);
}
