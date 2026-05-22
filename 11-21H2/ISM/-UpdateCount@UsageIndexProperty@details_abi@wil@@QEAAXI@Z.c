/*
 * XREFs of ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18007E9F8
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18007BBD4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18007D2BC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x18007E518 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 * Callees:
 *     memcpy_s @ 0x18002FD08 (memcpy_s.c)
 */

void __fastcall wil::details_abi::UsageIndexProperty::UpdateCount(
        wil::details_abi::UsageIndexProperty *this,
        __int64 a2)
{
  _DWORD *v2; // r8
  char v3; // al
  _WORD *v4; // rax

  v2 = (_DWORD *)((char *)this + 4);
  if ( *((_DWORD *)this + 1) != (_DWORD)a2 )
  {
    v3 = *((_BYTE *)this + 2);
    *v2 = a2;
    if ( v3 == 1 )
    {
      v4 = (_WORD *)*((_QWORD *)this + 2);
      if ( v4 )
      {
        *v4 = a2;
      }
      else
      {
        *(_DWORD *)_o__errno(this, a2, v2) = 22;
        invalid_parameter_noinfo();
      }
    }
    else if ( v3 == 2 )
    {
      memcpy_s(*((void *const *)this + 2), 4uLL, v2, 4uLL);
    }
  }
}
