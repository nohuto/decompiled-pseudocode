/*
 * XREFs of sub_14098BADC @ 0x14098BADC
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14086141C @ 0x14086141C (sub_14086141C.c)
 */

void sub_14098BADC()
{
  __int64 i; // rbx
  CMSPAddress *j; // rdi

  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  for ( i = qword_140C225F0; (__int64 *)i != &qword_140C225F0; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      sub_1402D66A8(i + 32);
      sub_14086141C(i, (const EVENT_DESCRIPTOR *)qword_140014988);
      for ( j = *(CMSPAddress **)(i + 16); j != (CMSPAddress *)(i + 16); j = *(CMSPAddress **)j )
      {
        if ( *((_BYTE *)j + 18) )
          CMSPAddress::get_DynamicTerminalClasses(j, (const EVENT_DESCRIPTOR *)&stru_140014918);
      }
      sub_1402935D0(i + 32);
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
}
