/*
 * XREFs of ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800DEB28
 * Callers:
 *     __lambda_b08f66900c5e6cc9009fb22e38011b96_::operator()_::_1_::dtor$0 @ 0x180071124 (__lambda_b08f66900c5e6cc9009fb22e38011b96_--operator()_--_1_--dtor$0.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800EB924 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800EBBC3 (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800EC344 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x1800EC5A7 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 * Callees:
 *     _freea @ 0x18004B5A0 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    freea(v1);
}
