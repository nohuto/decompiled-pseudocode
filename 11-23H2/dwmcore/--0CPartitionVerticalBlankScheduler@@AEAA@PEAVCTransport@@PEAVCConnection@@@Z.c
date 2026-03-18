/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800BF3AC
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800BF2D8 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A00E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1800C0938 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C097C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  void *v10; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_DWORD *)this + 22) = 16;
  `vector constructor iterator'((char *)this + 96, 256LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::CFrameInfo);
  *((_DWORD *)this + 2197) = -1;
  *((_DWORD *)this + 2196) = -1;
  *((_DWORD *)this + 1161) = -1;
  *((_DWORD *)this + 1160) = -1;
  *((_QWORD *)this + 1097) = g_qpcFrequency.QuadPart / 60;
  *((_QWORD *)this + 1170) = 0LL;
  *((_DWORD *)this + 2326) = GetCurrentThreadId();
  v6 = ((unsigned __int64)*((unsigned int *)this + 1048) << 8) + 96;
  *((_DWORD *)this + 1049) = 15;
  *((_DWORD *)this + 1050) = -1;
  *((_QWORD *)this + 526) = (char *)this + v6;
  *((_QWORD *)this + 527) = (char *)this + 3936;
  *((_DWORD *)this + 1051) = -1;
  *((_BYTE *)this + 4551) = 1;
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = a3;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    v7);
  v8 = operator new(0x1068uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[11] = 0LL;
    v8[12] = 0LL;
    *v8 = &LinearFitT<256>::`vftable';
    v8[4] = 0x3FF0000000000000LL;
    LinearFitT<256>::Reset(v8);
    *v9 = &CPartitionVerticalBlankScheduler::SchedulerLinearFit::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 1170);
  *((_QWORD *)this + 1170) = v9;
  if ( v10 )
    operator delete(v10, 0x1068uLL);
  *(_QWORD *)(*((_QWORD *)this + 1170) + 88LL) = 1LL;
  *(_QWORD *)(*((_QWORD *)this + 1170) + 96LL) = 5 * g_qpcFrequency.QuadPart;
  return this;
}
