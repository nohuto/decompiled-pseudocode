/*
 * XREFs of ?FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ @ 0x180064488
 * Callers:
 *     ??$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ @ 0x1800642C8 (--$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ.c)
 * Callees:
 *     ?Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV?$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd@@@Z @ 0x1800620D8 (-Flush@ApiDataList@ApiTelemetryLogger@details@wil@@QEAAXV-$function@$$A6AXPEBG0PEBDPEAIG@Z@wistd.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::FireEvent_(RTL_SRWLOCK *this)
{
  unsigned int Ptr; // eax
  unsigned int Ptr_high; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v5[16]; // [rsp+28h] [rbp-80h] BYREF

  v5[0] = &wistd::__function::__func<_lambda_705dd68f1b823bc41096a82e28a04b4b_,void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::`vftable';
  v5[13] = v5;
  wil::details::ApiTelemetryLogger::ApiDataList::Flush(this + 4, (__int64)v4);
  Ptr = (unsigned int)this[7].Ptr;
  if ( Ptr < HIDWORD(this[7].Ptr) )
  {
    Ptr_high = 2 * Ptr;
    if ( Ptr_high > HIDWORD(this[7].Ptr) )
      Ptr_high = HIDWORD(this[7].Ptr);
    LODWORD(this[7].Ptr) = Ptr_high;
  }
  wil::details::ApiTelemetryLogger::ScheduleFireEventCallback((wil::details::ApiTelemetryLogger *)this);
}
