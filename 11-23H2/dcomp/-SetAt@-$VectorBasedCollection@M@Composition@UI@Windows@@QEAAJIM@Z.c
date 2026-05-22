/*
 * XREFs of ?SetAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJIM@Z @ 0x18017176C
 * Callers:
 *     ?SetAt@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIM@Z @ 0x1801716D0 (-SetAt@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::SetAt(_QWORD *a1, unsigned int a2, float a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  v5 = a1[1];
  if ( a2 >= (unsigned __int64)((a1[2] - v5) >> 2) )
  {
    Windows::UI::Composition::OriginateInvalidArgument(17, (__int64)L"index");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a3 != *(float *)(v5 + 4LL * a2) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
        (const char *)(unsigned int)v7);
      return v8;
    }
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    *(float *)(a1[1] + 4 * v4) = a3;
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
  }
  return 0LL;
}
