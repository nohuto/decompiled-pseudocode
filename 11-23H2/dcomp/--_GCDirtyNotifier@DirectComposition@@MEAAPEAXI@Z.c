/*
 * XREFs of ??_GCDirtyNotifier@DirectComposition@@MEAAPEAXI@Z @ 0x1800EA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall DirectComposition::CDirtyNotifier::`scalar deleting destructor'(void **this, char a2)
{
  *this = &DirectComposition::CDirtyNotifier::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
