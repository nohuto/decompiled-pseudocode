/*
 * XREFs of ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801A670C
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x1801A4C10 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180047E38 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180099AF0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0A0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800E6980 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013F828 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801A6CDC (-Initialize@PenInterface@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=9
PenInterface *__fastcall PenInterface::PenInterface(PenInterface *this, void *a2, void *a3)
{
  __int128 *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  int v9; // eax
  void *v10; // rbx
  int v11; // eax
  int v12; // eax
  void *Src; // [rsp+20h] [rbp-49h] BYREF
  __int128 v15; // [rsp+28h] [rbp-41h] BYREF
  __int128 v16; // [rsp+38h] [rbp-31h]
  __int64 v17; // [rsp+48h] [rbp-21h]
  PenInterface *v18; // [rsp+50h] [rbp-19h]
  char *v19; // [rsp+58h] [rbp-11h]
  __int128 v20; // [rsp+60h] [rbp-9h] BYREF
  __m128i si128; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v18 = this;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &PenInterface::`vftable';
  v6 = (__int128 *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = -1LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_WORD *)this + 72) = 1;
  *((_BYTE *)this + 146) = 0;
  v7 = (_QWORD *)((char *)this + 152);
  v19 = (char *)this + 152;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v8 = operator new(0x30uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *v7 = v8;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v15) = 4;
  v9 = RIMGetDeviceProperties(a2, a3, &v15);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v9,
      (int)Src);
  std::make_unique<unsigned short [0],0>(&Src, DWORD2(v15));
  v10 = Src;
  *(_QWORD *)&v16 = Src;
  v11 = RIMGetDeviceProperties(a2, a3, &v15);
  if ( v11 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v11,
      (int)Src);
  *(_QWORD *)&v20 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstring::assign((void **)&v20, v10, DWORD2(v15));
  if ( v6 != &v20 )
  {
    std::wstring::_Tidy_deallocate((__int64)v6);
    *v6 = v20;
    v6[1] = (__int128)si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v20) = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)&v20);
  v12 = PenInterface::Initialize(this);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      22LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v12,
      (int)Src);
  if ( v10 )
    operator delete[](v10);
  return this;
}
