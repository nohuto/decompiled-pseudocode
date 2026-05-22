/*
 * XREFs of ??_EKernelChannel@DirectComposition@@UEAAPEAXI@Z @ 0x180083310
 * Callers:
 *     <none>
 * Callees:
 *     ??1KernelChannel@DirectComposition@@UEAA@XZ @ 0x18008334C (--1KernelChannel@DirectComposition@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

DirectComposition::KernelChannel *__fastcall DirectComposition::KernelChannel::`vector deleting destructor'(
        DirectComposition::KernelChannel *this,
        char a2)
{
  DirectComposition::KernelChannel::~KernelChannel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
