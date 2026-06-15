/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x1800CA060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x1800C9EE4 (--1CMuteControlBase@@MEAA@XZ.c)
 */

void **__fastcall CMuteControlBase::`scalar deleting destructor'(void **this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
