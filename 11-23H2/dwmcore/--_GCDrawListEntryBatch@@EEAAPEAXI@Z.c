/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x18020A368
 * Callers:
 *     ??_ECDrawListEntryBatch@@G7EAAPEAXI@Z @ 0x18011D7D0 (--_ECDrawListEntryBatch@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x18020A304 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  CDrawListEntryBatch::~CDrawListEntryBatch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
