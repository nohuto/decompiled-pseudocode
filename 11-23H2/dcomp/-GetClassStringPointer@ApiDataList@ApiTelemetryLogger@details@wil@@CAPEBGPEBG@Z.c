/*
 * XREFs of ?GetClassStringPointer@ApiDataList@ApiTelemetryLogger@details@wil@@CAPEBGPEBG@Z @ 0x180064834
 * Callers:
 *     ??R?$__func@V_lambda_af47d61301194c5d4839e4c10d405b79_@@$$A6AXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z@__function@wistd@@UEAAXAEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@2@@Z @ 0x1800646E0 (--R-$__func@V_lambda_af47d61301194c5d4839e4c10d405b79_@@$$A6AXAEAV-$unique_ptr@UApiData@ApiDataL.c)
 *     ?GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z @ 0x180064804 (-GetNameSpaceLength@ApiDataList@ApiTelemetryLogger@details@wil@@CA_KPEBG@Z.c)
 *     ??R_lambda_54a20ef40f338fc6233fff5f1717a4d2_@@QEBA@AEAV?$unique_ptr@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@U?$default_delete@UApiData@ApiDataList@ApiTelemetryLogger@details@wil@@@wistd@@@wistd@@@Z @ 0x18009A6CC (--R_lambda_54a20ef40f338fc6233fff5f1717a4d2_@@QEBA@AEAV-$unique_ptr@UApiData@ApiDataList@ApiTele.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall wil::details::ApiTelemetryLogger::ApiDataList::GetClassStringPointer(
        const unsigned __int16 *a1)
{
  const unsigned __int16 *result; // rax
  const unsigned __int16 *v2; // r8
  int v3; // edx
  __int64 v4; // rcx
  bool v5; // zf

  result = 0LL;
  v2 = a1;
  v3 = 0;
  while ( *a1 )
  {
    ++v3;
    ++a1;
  }
  v4 = v3;
  v5 = v3 == 0;
  if ( v3 > 0 )
  {
    do
    {
      if ( v2[v4] == 46 )
        break;
      --v3;
      --v4;
    }
    while ( v4 > 0 );
    v5 = v3 == 0;
  }
  if ( !v5 )
    return &v2[v3];
  return result;
}
