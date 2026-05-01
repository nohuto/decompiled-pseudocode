/*
 * XREFs of ??_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1801A50E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ @ 0x1801A5070 (--1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ.c)
 */

SearchBoxOnTaskbarSearchAppPositionerConfig *__fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::`scalar deleting destructor'(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this,
        char a2)
{
  SearchBoxOnTaskbarSearchAppPositionerConfig::~SearchBoxOnTaskbarSearchAppPositionerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
