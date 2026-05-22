/*
 * XREFs of ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800FCA70
 * Callers:
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800FF034 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z.c)
 * Callees:
 *     ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x1800FCADC (--$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x1800FE1E0 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 */

__int64 __fastcall SipcSignalFactory::GetFullSignalPath<13,38,56>(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  wil::details::in1diag0 *v5; // rcx

  result = swprintf_s<56>(a4, L"%s\\%4.4X_%s", a2, a1, a3);
  if ( (int)result <= 0 )
    wil::details::in1diag0::FailFast_Unexpected(v5);
  return result;
}
