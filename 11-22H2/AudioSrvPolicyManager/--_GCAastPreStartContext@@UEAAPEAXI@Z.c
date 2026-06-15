/*
 * XREFs of ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180032D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x180032C1C (--1CAastPreStartContext@@UEAA@XZ.c)
 */

CAastPreStartContext *__fastcall CAastPreStartContext::`scalar deleting destructor'(
        CAastPreStartContext *this,
        char a2)
{
  CAastPreStartContext::~CAastPreStartContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
