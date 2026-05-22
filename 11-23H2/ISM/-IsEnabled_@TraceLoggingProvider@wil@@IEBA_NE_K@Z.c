/*
 * XREFs of ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009333C
 * Callers:
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800D4240 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x1800D9794 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003F41C (_tlgKeywordOn.c)
 */

char __fastcall wil::TraceLoggingProvider::IsEnabled_(wil::TraceLoggingProvider *this, unsigned __int8 a2)
{
  _DWORD *v2; // rcx
  char v3; // r9

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 && (unsigned int)a2 < *v2 )
    return tlgKeywordOn((__int64)v2, 0LL) != 0;
  return v3;
}
