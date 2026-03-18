/*
 * XREFs of ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00D325C
 * Callers:
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall COLORSPACEREF::~COLORSPACEREF(COLORSPACEREF *this)
{
  struct OBJECT *v2; // rcx

  v2 = (struct OBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  PopThreadGuardedObject(this);
}
