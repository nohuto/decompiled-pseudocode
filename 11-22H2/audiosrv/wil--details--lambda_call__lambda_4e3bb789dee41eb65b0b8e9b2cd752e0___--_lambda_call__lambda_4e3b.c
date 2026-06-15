/*
 * XREFs of wil::details::lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___::_lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___ @ 0x1800CE43C
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18005E594 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___::_lambda_call__lambda_4e3bb789dee41eb65b0b8e9b2cd752e0___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    operator delete(*(void **)(*(_QWORD *)a1 + 8LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
  return result;
}
