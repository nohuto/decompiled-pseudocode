/*
 * XREFs of ?PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468E0
 * Callers:
 *     ?PopulateReferenceListForDebugProperties@ExpressionAnimation@Composition@UI@Windows@@UEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468C0 (-PopulateReferenceListForDebugProperties@ExpressionAnimation@Composition@UI@Windows@@UEAAXAEAV-$.c)
 *     ?PopulateReferenceListForDebugProperties@KeyFrameAnimation@Composition@UI@Windows@@MEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x180080270 (-PopulateReferenceListForDebugProperties@KeyFrameAnimation@Composition@UI@Windows@@MEAAXAEAV-$ve.c)
 *     ?PopulateReferenceListForDebugProperties@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x180161E10 (-PopulateReferenceListForDebugProperties@ConditionalExpressionAnimation@Composition@UI@Windows@@.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$construct@UObjectPropertyStringTuple@@AEAIAEAIPEAUHSTRING__@@PEAU2@@?$_Default_allocator_traits@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@SAXAEAV?$allocator@UObjectPropertyStringTuple@@@1@QEAUObjectPropertyStringTuple@@AEAI2$$QEAPEAUHSTRING__@@3@Z @ 0x180003570 (--$construct@UObjectPropertyStringTuple@@AEAIAEAIPEAUHSTRING__@@PEAU2@@-$_Default_allocator_trai.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAPEAUObjectPropertyStringTuple@@QEAU1@0PEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046C94 (--$_Uninitialized_move@PEAUObjectPropertyStringTuple@@V-$allocator@UObjectPropertyStringTuple@@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

void **__fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PopulateReferenceListForDebugProperties(
        __int64 a1,
        unsigned __int64 *a2)
{
  void **result; // rax
  __int64 i; // rbx
  unsigned __int64 v6; // r10
  HSTRING v7; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  HSTRING v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  SIZE_T v16; // r12
  HANDLE ProcessHeap; // rax
  unsigned __int64 v18; // rbp
  int v19; // edx
  _DWORD *v20; // rcx
  HSTRING *v21; // rdi
  HSTRING *v22; // r15
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  _QWORD *v27; // rdi
  _QWORD *j; // r15
  _QWORD *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  LPVOID v32; // rax
  HSTRING string; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h] BYREF
  char *v37; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp+18h] BYREF
  _DWORD *v39; // [rsp+A8h] [rbp+20h]

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    v6 = a2[2];
    v7 = *(HSTRING *)(*(_QWORD *)(a1 + 200) + 8 * i);
    v8 = *(_QWORD *)(a1 + 176);
    v37 = (char *)v7;
    string = *(HSTRING *)(v8 + 8 * i);
    v38 = (unsigned __int64)string;
    v9 = *(_QWORD *)(a1 + 120) + 24 * i;
    v10 = (HSTRING)(*(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(v9 + 20));
    v11 = a2[1];
    v39 = v10;
    v34 = v11;
    if ( v11 == v6 )
    {
      v12 = v11 - *a2;
      v13 = v12 / 24;
      if ( v12 / 24 == 0xAAAAAAAAAAAAAAALL )
        std::_Dwm_Xlength_error((const char *)v12);
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 - *a2) >> 3);
      v35 = v13 + 1;
      if ( v14 > 0xAAAAAAAAAAAAAAALL - (v14 >> 1) )
        goto LABEL_28;
      v15 = v13 + 1;
      if ( (v14 >> 1) + v14 >= v13 + 1 )
        v15 = (v14 >> 1) + v14;
      if ( v15 > 0xAAAAAAAAAAAAAAALL )
LABEL_28:
        std::_Throw_bad_array_new_length();
      v16 = 24 * v15;
      if ( 24 * v15 >= 0x1000 )
      {
        if ( v16 + 39 < v16 )
          goto LABEL_28;
        v32 = operator new(v16 + 39);
        if ( !v32 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          __debugbreak();
LABEL_36:
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        v18 = ((unsigned __int64)v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v18 - 8) = v32;
      }
      else if ( v16 )
      {
        ProcessHeap = GetProcessHeap();
        v18 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v16);
        if ( !v18 )
          goto LABEL_36;
      }
      else
      {
        v18 = 0LL;
      }
      v19 = *(_DWORD *)v9;
      v20 = (_DWORD *)(v18 + 24 * v13);
      v21 = (HSTRING *)(v20 + 2);
      v37 = (char *)v20;
      v22 = (HSTRING *)(v20 + 4);
      *v20 = *v39;
      v20[1] = v19;
      *((_QWORD *)v20 + 1) = 0LL;
      *((_QWORD *)v20 + 2) = 0LL;
      WindowsDeleteString(0LL);
      *v21 = 0LL;
      WindowsDuplicateString(string, v21);
      if ( !v7 || v7 != *v22 )
      {
        WindowsDeleteString(*v22);
        *v22 = 0LL;
        WindowsDuplicateString(v7, v22);
      }
      v23 = (_QWORD *)a2[1];
      v24 = (_QWORD *)*a2;
      if ( (_QWORD *)v34 == v23 )
      {
        if ( v24 != v23 )
        {
          v25 = v18 + 16;
          do
          {
            *(_QWORD *)(v25 - 16) = *v24;
            v25 += 24LL;
            *(_QWORD *)(v25 - 32) = v24[1];
            v26 = v24[2];
            v24[1] = 0LL;
            *(_QWORD *)(v25 - 24) = v26;
            v24[2] = 0LL;
            v24 += 3;
          }
          while ( v24 != v23 );
        }
      }
      else
      {
        std::_Uninitialized_move<ObjectPropertyStringTuple *>(v24, v34, v18);
        std::_Uninitialized_move<ObjectPropertyStringTuple *>(v34, a2[1], v37 + 24);
      }
      v27 = (_QWORD *)*a2;
      if ( *a2 )
      {
        for ( j = (_QWORD *)a2[1]; v27 != j; v27 += 3 )
        {
          WindowsDeleteString((HSTRING)v27[2]);
          v27[2] = 0LL;
          WindowsDeleteString((HSTRING)v27[1]);
          v27[1] = 0LL;
        }
        v29 = (_QWORD *)*a2;
        v30 = a2[2] - *a2;
        v37 = (char *)*a2;
        v31 = 8 * (v30 >> 3);
        v38 = v31;
        if ( v31 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned((void **)&v37, &v38);
          v29 = v37;
          v31 = v38;
        }
        operator delete(v29, v31);
      }
      *a2 = v18;
      result = (void **)(v16 + v18);
      a2[1] = v18 + 24 * v35;
      a2[2] = v16 + v18;
    }
    else
    {
      result = (void **)std::_Default_allocator_traits<std::allocator<ObjectPropertyStringTuple>>::construct<ObjectPropertyStringTuple,unsigned int &,unsigned int &,HSTRING__ *,HSTRING__ *>(
                          v10,
                          v11,
                          (int *)v10,
                          (int *)v9,
                          (HSTRING *)&v38,
                          (HSTRING)&v37);
      a2[1] += 24LL;
    }
  }
  return result;
}
