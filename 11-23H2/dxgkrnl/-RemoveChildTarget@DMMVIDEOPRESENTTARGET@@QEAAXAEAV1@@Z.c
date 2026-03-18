/*
 * XREFs of ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006A1BC
 * Callers:
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C03B2850 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03B3158 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006A240 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveChildTarget(DMMVIDEOPRESENTTARGET *this, struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r8
  struct DMMVIDEOPRESENTTARGET **v4; // rcx
  _QWORD *i; // rdi

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 57);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 456)
    || (v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 58),
        *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 456)) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  *((_QWORD *)a2 + 59) = 0LL;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 55) == (DMMVIDEOPRESENTTARGET *)((char *)this + 440) )
  {
    for ( i = (_QWORD *)((char *)this + 480);
          (_QWORD *)*i != i;
          DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(this, (struct DMMVIDEOPRESENTTARGET *)(*i - 496LL)) )
    {
      ;
    }
  }
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
}
