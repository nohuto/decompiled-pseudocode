/*
 * XREFs of ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80
 * Callers:
 *     ?ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18003D1AC (-ProcessConditionalToken@ExpressionAnimationParser@Composition@UI@Windows@@AEAAJPEAV-$unordered_.c)
 *     ??0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z @ 0x18003D484 (--0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z.c)
 *     ?Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@PEAVExpressionAnimation@234@PEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAVExpressionAnimationBuilder@234@@Z @ 0x18003D560 (-Parse@ExpressionAnimationParser@Composition@UI@Windows@@SAXAEBV-$basic_string_view@GU-$char_tra.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8 (-SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160 (-CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ??_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18005F3A0 (--_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FC0C (--0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ @ 0x180093214 (--1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ @ 0x180093214 (--1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::Reset(
        Windows::UI::Composition::ExpressionAnimationBuilder *this)
{
  unsigned int v2; // edi
  unsigned int i; // edi
  void *v4; // rdi
  void *v5; // rdi
  HSTRING *v6; // rsi
  HSTRING *j; // rdi
  HSTRING *v8; // rsi
  HSTRING *k; // rdi
  void *v10; // rdi
  void *v11; // rdi
  int v12; // edi
  _QWORD *v14; // rsi
  HSTRING v15; // rcx
  HSTRING v16; // rcx
  HANDLE v17; // rax
  HANDLE v18; // rax
  HANDLE v19; // rax
  HANDLE ProcessHeap; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned int v23; // ecx
  Windows::UI::Composition::ExpressionAnimationBuilder *v24; // rbp
  unsigned int m; // r9d
  __int64 v26; // rcx

  v2 = 0;
  for ( *(_QWORD *)this = 0LL; v2 < *((_DWORD *)this + 10); ++v2 )
    operator delete(*(void **)(*((_QWORD *)this + 2) + 8LL * v2), 4uLL);
  for ( i = 0; i < *((_DWORD *)this + 62); ++i )
  {
    v14 = *(_QWORD **)(*((_QWORD *)this + 28) + 8LL * i);
    if ( v14 )
    {
      v15 = (HSTRING)v14[1];
      if ( v15 )
      {
        WindowsDeleteString(v15);
        v14[1] = 0LL;
      }
      v16 = (HSTRING)v14[2];
      if ( v16 )
      {
        WindowsDeleteString(v16);
        v14[2] = 0LL;
      }
      operator delete(v14, 0x20uLL);
    }
  }
  v4 = (void *)*((_QWORD *)this + 10);
  *((_DWORD *)this + 26) = 0;
  if ( v4 != *((void **)this + 11) )
  {
    if ( v4 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *((_QWORD *)this + 10) = *((_QWORD *)this + 11);
    *((_DWORD *)this + 25) = *((_DWORD *)this + 24);
  }
  v5 = (void *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 36) = 0;
  if ( v5 != *((void **)this + 16) )
  {
    if ( v5 )
    {
      v18 = GetProcessHeap();
      HeapFree(v18, 0, v5);
    }
    *((_QWORD *)this + 15) = *((_QWORD *)this + 16);
    *((_DWORD *)this + 35) = *((_DWORD *)this + 34);
  }
  v6 = (HSTRING *)*((_QWORD *)this + 23);
  for ( j = (HSTRING *)*((_QWORD *)this + 22); j != v6; ++j )
  {
    WindowsDeleteString(*j);
    *j = 0LL;
  }
  *((_QWORD *)this + 23) = *((_QWORD *)this + 22);
  v8 = (HSTRING *)*((_QWORD *)this + 26);
  for ( k = (HSTRING *)*((_QWORD *)this + 25); k != v8; ++k )
  {
    WindowsDeleteString(*k);
    *k = 0LL;
  }
  *((_QWORD *)this + 26) = *((_QWORD *)this + 25);
  v10 = (void *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 10) = 0;
  if ( v10 != *((void **)this + 3) )
  {
    if ( v10 )
    {
      v19 = GetProcessHeap();
      HeapFree(v19, 0, v10);
    }
    *((_QWORD *)this + 2) = *((_QWORD *)this + 3);
    *((_DWORD *)this + 9) = *((_DWORD *)this + 8);
  }
  v11 = (void *)*((_QWORD *)this + 28);
  *((_DWORD *)this + 62) = 0;
  if ( v11 != *((void **)this + 29) )
  {
    if ( v11 )
    {
      v17 = GetProcessHeap();
      HeapFree(v17, 0, v11);
    }
    *((_QWORD *)this + 28) = *((_QWORD *)this + 29);
    *((_DWORD *)this + 61) = *((_DWORD *)this + 60);
  }
  v12 = *((_DWORD *)this + 154) - 1;
  *((_DWORD *)this + 146) = 0;
  if ( v12 >= 0 )
  {
    v21 = 8LL * v12;
    do
    {
      v22 = *((_QWORD *)this + 74);
      v23 = *((_DWORD *)this + 154);
      v24 = *(Windows::UI::Composition::ExpressionAnimationBuilder **)(v22 + v21);
      if ( v12 >= v23 )
      {
        DoStackCaptureDirect(-2147024809, 0x19Cu);
      }
      else
      {
        for ( m = v12; m < v23 - 1; v23 = *((_DWORD *)this + 154) )
        {
          v26 = m++;
          *(_QWORD *)(v22 + 8 * v26) = *(_QWORD *)(v22 + 8LL * m);
        }
        *((_DWORD *)this + 154) = v23 - 1;
      }
      if ( v24 )
      {
        Windows::UI::Composition::ExpressionAnimationBuilder::~ExpressionAnimationBuilder(v24);
        operator delete(v24);
      }
      v21 -= 8LL;
      --v12;
    }
    while ( v12 >= 0 );
  }
  return 0LL;
}
