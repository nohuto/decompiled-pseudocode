/*
 * XREFs of ?InsertAt@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJIM@Z @ 0x1801710EC
 * Callers:
 *     ?InsertAt@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJIM@Z @ 0x180171050 (-InsertAt@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Compo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::InsertAt(
        _QWORD *a1,
        unsigned int a2,
        float a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rbp
  int v7; // eax
  unsigned int v8; // edi
  float *v9; // rcx
  float *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v3 = a1 + 1;
  v5 = a2;
  if ( a2 <= (unsigned __int64)((__int64)(a1[2] - a1[1]) >> 2) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (float *)v3[1];
      v10 = (float *)(*v3 + 4 * v5);
      if ( v9 == (float *)v3[2] )
      {
        std::vector<float>::_Emplace_reallocate<float const &>((__int64)v3, (_BYTE *)(*v3 + 4 * v5), &v12);
      }
      else if ( v10 == v9 )
      {
        *v9 = a3;
        v3[1] = v9 + 1;
      }
      else
      {
        *v9 = *(v9 - 1);
        v3[1] += 4LL;
        memmove_0(v10 + 1, v10, (char *)v9 - (char *)v10 - 4);
        *v10 = a3;
      }
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(17, (__int64)L"index");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
