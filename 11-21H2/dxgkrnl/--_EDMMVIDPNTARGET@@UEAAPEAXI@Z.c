/*
 * XREFs of ??_EDMMVIDPNTARGET@@UEAAPEAXI@Z @ 0x1C000D400
 * Callers:
 *     ??_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z @ 0x1C002D470 (--_EDMMVIDPNTARGET@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z @ 0x1C002D480 (--_EDMMVIDPNTARGET@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z @ 0x1C002D490 (--_EDMMVIDPNTARGET@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x1C000D8C8 (--1-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ.c)
 */

_QWORD *__fastcall DMMVIDPNTARGET::`vector deleting destructor'(_QWORD *P, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  *P = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  P[4] = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  P[6] = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  P[8] = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  P[10] = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  v4 = P[13];
  if ( v4 )
  {
    if ( (unsigned __int64)*(int *)(v4 + 96) > 1 )
      WdLogSingleEntry2(2LL, P[13], P);
    *(_QWORD *)(P[13] + 112LL) = 0LL;
  }
  if ( P[14] )
    WdLogSingleEntry1(2LL, *((unsigned int *)P + 6));
  ReferenceCounted::Release((ReferenceCounted *)(P[12] + 64LL));
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>(P + 15);
  v5 = P[14];
  if ( v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  P[14] = 0LL;
  v6 = P[13];
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  P[13] = 0LL;
  P[10] = &SetElement::`vftable';
  *((_DWORD *)P + 14) |= 0x6D640000u;
  P[5] = 0LL;
  P[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
