/*
 * XREFs of ?Append@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJM@Z @ 0x18017066C
 * Callers:
 *     ?Append@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJM@Z @ 0x1801705E0 (-Append@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VectorBasedCollection<float>::Append(_QWORD *a1, float a2)
{
  int v3; // eax
  unsigned int v4; // edi
  float *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (float *)a1[2];
    if ( v6 == (float *)a1[3] )
    {
      std::vector<float>::_Emplace_reallocate<float const &>((__int64)(a1 + 1), v6, &v8);
    }
    else
    {
      *v6 = a2;
      a1[2] = v6 + 1;
    }
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\VectorBasedCollection.inl",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
