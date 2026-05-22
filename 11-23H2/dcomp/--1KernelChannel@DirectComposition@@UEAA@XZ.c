/*
 * XREFs of ??1KernelChannel@DirectComposition@@UEAA@XZ @ 0x18008334C
 * Callers:
 *     ??_EKernelChannel@DirectComposition@@UEAAPEAXI@Z @ 0x180083310 (--_EKernelChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::KernelChannel::~KernelChannel(DirectComposition::KernelChannel *this)
{
  *(_QWORD *)this = &DirectComposition::KernelChannel::`vftable';
  if ( *((_DWORD *)this + 2) )
    NtDCompositionDestroyChannel();
  *(_QWORD *)this = &DirectComposition::Channel::`vftable';
}
