/*
 * XREFs of ?Release@CAudioMediaType@@UEAAKXZ @ 0x14002A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140027DD8 (--3@YAXPEAX@Z.c)
 *     ??1CAudioMediaType@@MEAA@XZ @ 0x140029A10 (--1CAudioMediaType@@MEAA@XZ.c)
 */

__int64 __fastcall CAudioMediaType::Release(CAudioMediaType *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CAudioMediaType::~CAudioMediaType((void **)this);
    operator delete(this);
  }
  return v2;
}
