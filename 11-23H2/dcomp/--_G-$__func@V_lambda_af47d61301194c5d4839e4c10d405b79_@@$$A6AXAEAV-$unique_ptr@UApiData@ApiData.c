/*
 * XREFs of ??_G?$__func@V_lambda_af47d61301194c5d4839e4c10d405b79_@@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1800E3E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func<_lambda_af47d61301194c5d4839e4c10d405b79_,void (wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>> &)>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (unsigned short const *,unsigned short const *,char const *,unsigned int *,unsigned short)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
