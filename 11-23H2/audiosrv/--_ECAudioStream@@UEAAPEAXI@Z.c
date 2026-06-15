/*
 * XREFs of ??_ECAudioStream@@UEAAPEAXI@Z @ 0x180013F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

CAudioStream *__fastcall CAudioStream::`vector deleting destructor'(CAudioStream *this, char a2)
{
  CAudioStream::~CAudioStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x2A8uLL);
  return this;
}
