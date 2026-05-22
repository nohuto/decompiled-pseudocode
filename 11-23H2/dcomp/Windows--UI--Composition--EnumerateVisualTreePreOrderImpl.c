/*
 * XREFs of Windows::UI::Composition::EnumerateVisualTreePreOrderImpl @ 0x180101040
 * Callers:
 *     ?EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z @ 0x180100ED0 (-EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVis.c)
 *     ?EnumerateVisualTreePreOrder_Locked@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z @ 0x1801012C0 (-EnumerateVisualTreePreOrder_Locked@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAVVisual@Composition@UI@Windows@@I@1@QEAU21@$$QEAU21@@Z @ 0x180100964 (--$_Emplace_reallocate@U-$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@-$vector@U-$pair@PEAVV.c)
 *     ??1?$vector@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVVisual@Composition@UI@Windows@@I@std@@@2@@std@@QEAA@XZ @ 0x180100B34 (--1-$vector@U-$pair@PEAVVisual@Composition@UI@Windows@@I@std@@V-$allocator@U-$pair@PEAVVisual@Co.c)
 *     Windows::UI::Composition::CallOnVisual @ 0x180100C10 (Windows--UI--Composition--CallOnVisual.c)
 */

__int64 __fastcall Windows::UI::Composition::EnumerateVisualTreePreOrderImpl(
        Microsoft::WRL2::NestableRuntimeClass *a1,
        Microsoft::WRL2::NestableRuntimeClass *a2,
        __int64 a3)
{
  unsigned int v6; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // r12
  char *v11; // rsi
  char *v12; // r15
  __m128i *v13; // rdi
  __m128i *v14; // r14
  __m128i *v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int32 v18; // eax
  unsigned int v19; // r13d
  Microsoft::WRL2::NestableRuntimeClass *v20; // rsi
  int v21; // eax
  int v22; // esi
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+30h] [rbp-39h]
  __m128i v25; // [rsp+38h] [rbp-31h] BYREF
  __int128 v26; // [rsp+48h] [rbp-21h] BYREF
  char *v27; // [rsp+58h] [rbp-11h] BYREF
  char *v28; // [rsp+60h] [rbp-9h]
  char *v29; // [rsp+68h] [rbp-1h]
  __m128i *v30; // [rsp+70h] [rbp+7h] BYREF
  __m128i *v31; // [rsp+78h] [rbp+Fh]
  __m128i *v32; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+E0h] [rbp+77h]
  unsigned int v36; // [rsp+E8h] [rbp+7Fh]

  v35 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  DWORD2(v26) = 0;
  *(_QWORD *)&v26 = a1;
  std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Emplace_reallocate<std::pair<Windows::UI::Composition::Visual *,unsigned int>>(
    (__int64)&v27,
    0LL,
    &v26);
  v6 = 0;
  if ( a2 )
  {
    v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)a2 + 18);
    while ( v7 && v7 != a1 )
    {
      v7 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v7 + 19);
      ++v6;
    }
  }
  LOBYTE(v34) = 0;
  v8 = Windows::UI::Composition::CallOnVisual(a3, a2, a1, v6, (HSTRING)&v34);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiondiagnosticsinterop.cpp",
      (const char *)(unsigned int)v8);
LABEL_29:
    std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::~vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>((__int64)&v27);
    return v9;
  }
  v10 = v34;
  v11 = v27;
  if ( (_BYTE)v34 )
  {
    v12 = v28;
    v13 = 0LL;
    v14 = 0LL;
    v30 = 0LL;
    v15 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    do
    {
LABEL_10:
      if ( v11 == v12 )
      {
        if ( v13 )
          std::_Deallocate<16,0>(v13, ((char *)v15 - (char *)v13) & 0xFFFFFFFFFFFFFFF0uLL);
        goto LABEL_32;
      }
      v12 -= 16;
      v16 = 0;
      v28 = v12;
      v36 = 0;
      v24 = *(Microsoft::WRL2::NestableRuntimeClass **)v12;
      v17 = *(_QWORD *)(*(_QWORD *)v12 + 144LL);
      if ( v17 )
      {
        do
        {
          v18 = v16;
          v25.m128i_i64[0] = v17;
          ++v16;
          v25.m128i_i32[2] = v18;
          v36 = v16;
          if ( v14 == v15 )
          {
            std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Emplace_reallocate<std::pair<Windows::UI::Composition::Visual *,unsigned int>>(
              (__int64)&v30,
              v14->m128i_i8,
              &v25);
            v16 = v36;
            v15 = v32;
            v14 = v31;
          }
          else
          {
            *v14++ = v25;
            v31 = v14;
          }
          v17 = *(_QWORD *)(v17 + 152);
        }
        while ( v17 );
        v13 = v30;
      }
    }
    while ( !v10 );
    v19 = v36;
    while ( 1 )
    {
      if ( v13 == v14 )
      {
LABEL_25:
        v11 = v27;
        goto LABEL_10;
      }
      v31 = --v14;
      v20 = (Microsoft::WRL2::NestableRuntimeClass *)v14->m128i_i64[0];
      DWORD2(v26) = _mm_cvtsi128_si32(_mm_srli_si128(*v14, 8));
      *(_QWORD *)&v26 = v20;
      if ( v12 == v29 )
      {
        std::vector<std::pair<Windows::UI::Composition::Visual *,unsigned int>>::_Emplace_reallocate<std::pair<Windows::UI::Composition::Visual *,unsigned int>>(
          (__int64)&v27,
          v12,
          &v26);
        v12 = v28;
      }
      else
      {
        *(_OWORD *)v12 = v26;
        v12 += 16;
        v28 = v12;
      }
      v21 = Windows::UI::Composition::CallOnVisual(v35, v24, v20, v19, (HSTRING)&v34);
      v22 = v21;
      if ( v21 < 0 )
        break;
      v10 = v34;
      if ( !(_BYTE)v34 )
        goto LABEL_25;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiondiagnosticsinterop.cpp",
      (const char *)(unsigned int)v21);
    if ( v13 )
      std::_Deallocate<16,0>(v13, ((char *)v15 - (char *)v13) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = v22;
    goto LABEL_29;
  }
LABEL_32:
  if ( v11 )
    std::_Deallocate<16,0>(v11, (v29 - v11) & 0xFFFFFFFFFFFFFFF0uLL);
  return 0LL;
}
