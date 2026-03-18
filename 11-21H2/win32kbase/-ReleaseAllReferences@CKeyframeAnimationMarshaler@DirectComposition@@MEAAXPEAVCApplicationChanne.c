/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000B260 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C (-Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  void *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  __int64 v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  void *v8; // rdx
  void *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // edi

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(this, a2);
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    v10 = 0;
    if ( !*((_DWORD *)this + 63) )
      goto LABEL_15;
    do
      DirectComposition::CApplicationChannel::ReleaseResource(
        a2,
        *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 19) + 8LL * v10++));
    while ( v10 < *((_DWORD *)this + 63) );
    v4 = (void *)*((_QWORD *)this + 19);
    if ( v4 )
LABEL_15:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
    *((_QWORD *)this + 19) = 0LL;
    *(_QWORD *)((char *)this + 252) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_DWORD *)this + 62) = 0;
  }
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)(v6 + 16));
    *((_QWORD *)this + 21) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 18);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 22);
  if ( v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 20);
  if ( v9 )
  {
    v11 = 0;
    if ( !*((_DWORD *)this + 65) )
      goto LABEL_20;
    do
      DirectComposition::CResourceMarshaler::Release(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 20)
                                                                                               + 16LL * v11++));
    while ( v11 < *((_DWORD *)this + 65) );
    v9 = (void *)*((_QWORD *)this + 20);
    if ( v9 )
LABEL_20:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
    *((_QWORD *)this + 20) = 0LL;
    *(_QWORD *)((char *)this + 260) = 0LL;
  }
}
