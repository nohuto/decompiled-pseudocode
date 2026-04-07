/*
 * XREFs of ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001DEC0
 * Callers:
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18001DDE4 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180063470 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180001E70 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180001EF0 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 */

bool __fastcall CWindowData::PropertiesAllowAutoParenting(CWindowData *this)
{
  const struct tagRECT *v2; // r8
  bool result; // al
  CWindowData *v4; // r8
  bool v5; // di

  result = 0;
  if ( (*((_BYTE *)this + 664) & 1) != 0 )
  {
    v2 = (const struct tagRECT *)*((_QWORD *)this + 75);
    if ( v2 )
    {
      if ( (*((_DWORD *)this + 29) & 0xC00000) != 0xC00000 )
      {
        if ( *((_QWORD *)this + 4) )
        {
          if ( ContainsRect(v2 + 3, (const struct tagRECT *)this + 3) )
          {
            v5 = CWindowData::WillEndAnimationCloaked(v4);
            if ( CWindowData::WillEndAnimationCloaked(this) == v5 )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
