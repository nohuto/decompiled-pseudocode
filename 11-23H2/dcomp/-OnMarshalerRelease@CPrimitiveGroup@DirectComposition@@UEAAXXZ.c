/*
 * XREFs of ?OnMarshalerRelease@CPrimitiveGroup@DirectComposition@@UEAAXXZ @ 0x1800035E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620 (--1CPrimitiveGroup@DirectComposition@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::OnMarshalerRelease(DirectComposition::CPrimitiveGroup *this)
{
  char *v1; // rbx

  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    *((_BYTE *)this + 72) |= 1u;
  }
  else
  {
    v1 = (char *)this - 8;
    if ( this != (DirectComposition::CPrimitiveGroup *)8 )
    {
      DirectComposition::CPrimitiveGroup::~CPrimitiveGroup((DirectComposition::CPrimitiveGroup *)((char *)this - 8));
      operator delete(v1);
    }
  }
}
