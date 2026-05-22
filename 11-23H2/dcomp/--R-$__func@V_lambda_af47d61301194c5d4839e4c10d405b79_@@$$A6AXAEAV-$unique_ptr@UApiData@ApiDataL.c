/*
 * XREFs of ??R?$__func@V_lambda_af47d61301194c5d4839e4c10d405b79_@@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@__function@wistd@@UEAAXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@2@@Z @ 0x1800646E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z @ 0x180064834 (-GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z.c)
 */

_WORD *__fastcall wistd::__function::__func<_lambda_af47d61301194c5d4839e4c10d405b79_,void (wistd::unique_ptr<wil::details::ApiTelemetryLogger::ApiDataList::ApiData,wistd::default_delete<wil::details::ApiTelemetryLogger::ApiDataList::ApiData>> &)>::operator()(
        __int64 a1,
        const unsigned __int16 ***a2)
{
  const unsigned __int16 *ClassStringPointer; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  const unsigned __int16 *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdx
  _QWORD *v11; // rax
  _WORD *result; // rax

  ClassStringPointer = wil::details::ApiTelemetryLogger::ApiDataList::GetClassStringPointer(**a2);
  if ( ClassStringPointer )
    v6 = ClassStringPointer;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(*(_QWORD *)(v4 + 8) + 2 * v8) );
  v9 = -1LL;
  do
    ++v9;
  while ( v6[v9] );
  **(_QWORD **)(v5 + 8) += v8 + 1 + v9;
  v10 = (*a2)[2];
  v11 = *(_QWORD **)(v5 + 16);
  if ( v10 )
  {
    do
      ++v7;
    while ( *((_BYTE *)v10 + v7) );
    *v11 += v7 + 1;
  }
  else
  {
    *v11 += 2LL;
  }
  result = *(_WORD **)(v5 + 24);
  ++*result;
  return result;
}
