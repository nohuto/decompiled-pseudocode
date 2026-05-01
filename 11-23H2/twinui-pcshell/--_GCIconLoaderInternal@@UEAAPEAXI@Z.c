/*
 * XREFs of ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x1805519D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1CIconLoaderInternal@@UEAA@XZ @ 0x1805517A8 (--1CIconLoaderInternal@@UEAA@XZ.c)
 */

CIconLoaderInternal *__fastcall CIconLoaderInternal::`scalar deleting destructor'(CIconLoaderInternal *this, char a2)
{
  CIconLoaderInternal::~CIconLoaderInternal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
