/*
 * XREFs of ??_ECLineSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x180243910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CLineSpawner *__fastcall EmitterShapes::CLineSpawner::`vector deleting destructor'(
        EmitterShapes::CLineSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
