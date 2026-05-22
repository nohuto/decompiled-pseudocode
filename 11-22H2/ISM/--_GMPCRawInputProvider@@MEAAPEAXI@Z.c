/*
 * XREFs of ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800DE1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800DDEC4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 */

MPCRawInputProvider *__fastcall MPCRawInputProvider::`scalar deleting destructor'(MPCRawInputProvider *this, char a2)
{
  MPCRawInputProvider::~MPCRawInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
