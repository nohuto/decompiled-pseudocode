/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C0214D9C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned __int64 *a4,
        unsigned __int64 a5)
{
  char *Quota; // rbx
  unsigned __int64 v6; // r10
  __int64 v10; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  struct DirectComposition::CResourceMarshaler *v12; // r14
  unsigned __int64 v13; // rdi
  int v14; // edi
  unsigned int v15; // edx
  __int64 v16; // rcx
  char v18; // [rsp+58h] [rbp+10h] BYREF

  Quota = 0LL;
  v18 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741790;
  if ( v6 >= *((_QWORD *)this + 10) )
    return (unsigned int)-1073741790;
  _mm_lfence();
  v10 = *((_QWORD *)this + 7);
  v11 = (NSInstrumentation::CLeakTrackingAllocator *)(v6 * *((_QWORD *)this + 11));
  if ( (v12 = *(struct DirectComposition::CResourceMarshaler **)((char *)v11 + v10)) == 0LL )
    return (unsigned int)-1073741790;
  v13 = a5;
  if ( a5 )
  {
    Quota = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v11, 260LL, 8 * a5, 1717715780);
    if ( !Quota )
      return (unsigned int)-1073741801;
    v15 = 0;
    v16 = 0LL;
    do
    {
      ++v15;
      *(_QWORD *)&Quota[8 * v16] = a4[v16];
      v16 = v15;
    }
    while ( v15 < v13 );
  }
  v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, char *))(*(_QWORD *)v12 + 136LL))(
          v12,
          a3,
          Quota,
          v13,
          &v18);
  if ( v14 < 0 )
  {
    if ( Quota )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        Quota);
  }
  else if ( v18 )
  {
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v12);
  }
  return (unsigned int)v14;
}
