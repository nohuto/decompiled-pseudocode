/*
 * XREFs of ?Create@KernelChannel@DirectComposition@@SAJPEAIPEAPEAXPEAPEAVChannel@2@@Z @ 0x18008338C
 * Callers:
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VKernelChannel@DirectComposition@@U?$default_delete@VKernelChannel@DirectComposition@@@std@@@std@@QEAA@XZ @ 0x1801002D0 (--1-$unique_ptr@VKernelChannel@DirectComposition@@U-$default_delete@VKernelChannel@DirectComposi.c)
 */

__int64 __fastcall DirectComposition::KernelChannel::Create(
        unsigned int *a1,
        void **a2,
        struct DirectComposition::Channel **a3)
{
  int v4; // eax
  int v5; // ebx
  struct DirectComposition::Channel *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v4 = NtDCompositionCreateChannel(&v9, a1, a2);
  v5 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v4);
  if ( v5 >= 0 )
  {
    v6 = (struct DirectComposition::Channel *)DefaultHeap::Alloc(0x10uLL);
    if ( v6 )
    {
      *((_DWORD *)v6 + 2) = v9;
      *(_QWORD *)v6 = &DirectComposition::KernelChannel::`vftable';
      *a3 = v6;
      return 0LL;
    }
    NtDCompositionDestroyChannel(v9);
    v5 = -2147024882;
  }
  std::unique_ptr<DirectComposition::KernelChannel>::~unique_ptr<DirectComposition::KernelChannel>(v8);
  return (unsigned int)v5;
}
