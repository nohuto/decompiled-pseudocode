/*
 * XREFs of ??_GCFlipContent@Flip@@EEAAPEAXI@Z @ 0x1801AC000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFlipContent@Flip@@EEAA@XZ @ 0x1801ABF80 (--1CFlipContent@Flip@@EEAA@XZ.c)
 */

Flip::CFlipContent *__fastcall Flip::CFlipContent::`scalar deleting destructor'(Flip::CFlipContent *this, char a2)
{
  Flip::CFlipContent::~CFlipContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
