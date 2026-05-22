/*
 * XREFs of ?RemoveAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJI@Z @ 0x18017152C
 * Callers:
 *     ?RemoveAt@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJI@Z @ 0x1801714A0 (-RemoveAt@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Compo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::RemoveAt(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( a2 < (unsigned __int64)((__int64)(a1[2] - a1[1]) >> 2) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    memmove_0((void *)(a1[1] + 4 * v3), (const void *)(a1[1] + 4 * v3 + 4), a1[2] - (a1[1] + 4 * v3 + 4));
    a1[2] -= 4LL;
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    return 0LL;
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(17, (__int64)L"index");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
