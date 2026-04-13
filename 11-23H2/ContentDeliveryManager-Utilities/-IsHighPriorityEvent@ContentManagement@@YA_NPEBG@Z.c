/*
 * XREFs of ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005A280
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x180053B1C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?GetEventNameFromToken@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180058384 (-GetEventNameFromToken@ContentManagement@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

char __fastcall ContentManagement::IsHighPriorityEvent(ContentManagement *this, const unsigned __int16 *a2)
{
  __int64 v2; // rdx
  char v3; // di
  LPCWCH *i; // rbx
  const WCHAR *v5; // rcx
  LPCWCH lpString1[4]; // [rsp+30h] [rbp-38h] BYREF

  ContentManagement::GetEventNameFromToken((__int64)lpString1);
  v3 = 0;
  if ( lpString1[2] )
  {
    for ( i = (LPCWCH *)&off_1800EBF00; i != (LPCWCH *)&unk_1800EBF08; ++i )
    {
      v5 = (const WCHAR *)lpString1;
      if ( lpString1[3] >= (LPCWCH)8 )
        v5 = lpString1[0];
      if ( CompareStringOrdinal(v5, -1, *i, -1, 1) == 2 )
      {
        v3 = 1;
        break;
      }
    }
  }
  LOBYTE(v2) = 1;
  std::wstring::_Tidy(lpString1, v2, 0LL);
  return v3;
}
