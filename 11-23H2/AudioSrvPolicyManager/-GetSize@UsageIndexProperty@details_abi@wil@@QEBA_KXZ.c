/*
 * XREFs of ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180035688
 * Callers:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180033B10 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800363C4 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::UsageIndexProperty::GetSize(wil::details_abi::UsageIndexProperty *this)
{
  __int64 result; // rax

  if ( *(_WORD *)this )
    result = *(unsigned __int16 *)this;
  else
    result = *((unsigned __int16 *)this + 4) + 2LL;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    result += 2LL;
  }
  else if ( *((_BYTE *)this + 2) == 2 )
  {
    result += 4LL;
  }
  return result;
}
