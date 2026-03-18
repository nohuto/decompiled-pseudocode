/*
 * XREFs of ?Copy@CMarshaledArrayBase@DirectComposition@@IEAAJPEBX_K1K@Z @ 0x1C021B4A4
 * Callers:
 *     ?SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0226110 (-SetBufferProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0226240 (-SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChanne.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CMarshaledArrayBase::Copy(
        DirectComposition::CMarshaledArrayBase *this,
        const void *a2,
        size_t a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  size_t v9; // rsi
  size_t v10; // rax
  size_t v11; // r8
  __int64 Quota; // rbp
  char *v13; // rdx
  char *v14; // rdx

  v6 = 0;
  v9 = a3 / a4;
  v10 = a4 * (a3 / a4);
  if ( a3 == v10 )
  {
    v11 = *((_QWORD *)this + 2);
    if ( v9 <= v11 )
    {
      if ( v9 )
      {
        if ( v9 < v11 )
          memset((void *)(v10 + *((_QWORD *)this + 1)), 0, a4 * (v11 - v9));
      }
      else
      {
        v14 = (char *)*((_QWORD *)this + 1);
        if ( v14 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v14);
          *((_QWORD *)this + 1) = 0LL;
        }
      }
    }
    else
    {
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, a3, a5);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v13 = (char *)*((_QWORD *)this + 1);
      if ( v13 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v13);
      *((_QWORD *)this + 1) = Quota;
    }
    memmove(*((void **)this + 1), a2, a3);
    *((_QWORD *)this + 2) = v9;
    *(_QWORD *)this = 0LL;
    return v6;
  }
  return (unsigned int)-1073741811;
}
