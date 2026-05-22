/*
 * XREFs of ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1801266F4
 * Callers:
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x180128DA0 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 * Callees:
 *     ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x180126728 (--$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x180127EE8 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 */

__int64 __fastcall SipcSignalFactory::GetNamespaceSignalPath<13,38,56>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  wil::details::in1diag0 *v4; // rcx

  result = swprintf_s<56>(a3, L"%s\\%s", a1, a2);
  if ( (int)result <= 0 )
    wil::details::in1diag0::FailFast_Unexpected(v4);
  return result;
}
