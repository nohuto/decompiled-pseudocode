/*
 * XREFs of ?GetSmoothenedFrameTimeQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_K0PEA_KI@Z @ 0x1C003408C
 * Callers:
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C001D620 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     ?floor@@YANN@Z @ 0x1C002D708 (-floor@@YANN@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0033D5C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWr.c)
 *     ?SaveState@AUTOFLOATINGPOINTSTATE@@QEAAJXZ @ 0x1C0034400 (-SaveState@AUTOFLOATINGPOINTSTATE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedFrameTimeQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  int v7; // edx
  int v8; // edi
  char v9; // r10
  __int64 v10; // r8
  double v11; // xmm0_8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-8h]

  v19 = 3221225473LL;
  v20 = 0;
  v8 = AUTOFLOATINGPOINTSTATE::SaveState((AUTOFLOATINGPOINTSTATE *)&v19);
  if ( v8 >= 0 )
  {
    v11 = floor(
            (double)(v7 - *((_DWORD *)this + 10)) * *((double *)this + 3)
          + (double)(int)*((_QWORD *)this + 6)
          + *((double *)this + 2)
          + 0.5);
    v12 = (unsigned int)(int)v11;
    *a4 = v12;
    if ( (int)abs32(v10 - v12) > (unsigned __int64)a5 >> 1 )
    {
      WdLogSingleEntry2(3LL, (unsigned int)(int)v11, v10);
      VIDSCH_VSYNC_SMOOTHER::ResetSmoother(this, a5, a5);
      *a4 = 0LL;
      v9 = 1;
      v8 = -1073741823;
    }
  }
  if ( (int)v19 >= 0 )
  {
    v16 = v20;
    _mm_setcsr(v20);
  }
  if ( v9 && (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000010LL) )
  {
    v18 = 1LL;
    v17 = a5;
    LOWORD(v16) = 1;
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      byte_1C005189F,
      v14,
      (__int64)&v19,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v18);
  }
  return (unsigned int)v8;
}
