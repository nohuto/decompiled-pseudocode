/*
 * XREFs of ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x1800F4460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1AnimationDataProvider@@UEAA@XZ @ 0x1800F4368 (--1AnimationDataProvider@@UEAA@XZ.c)
 */

AnimationDataProvider *__fastcall AnimationDataProvider::`scalar deleting destructor'(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AnimationDataProvider::~AnimationDataProvider(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
