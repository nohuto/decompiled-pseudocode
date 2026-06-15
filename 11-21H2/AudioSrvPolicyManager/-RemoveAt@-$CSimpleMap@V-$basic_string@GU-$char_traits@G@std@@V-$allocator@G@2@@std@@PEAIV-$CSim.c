/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x18001A8A4
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003432 (_invalid_parameter_noinfo.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt(
        int *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  size_t v5; // r8
  __int64 v6; // rax
  size_t v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax

  if ( a1[4] <= 0 )
    return 0LL;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*(char **)v2, 2 * v3 + 2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 7LL;
  *(_WORD *)v2 = 0;
  v4 = a1[4];
  if ( (_DWORD)v4 != 1 )
  {
    v5 = 32LL * ((int)v4 - 1);
    if ( v5 )
    {
      if ( !*(_QWORD *)a1 || *(_QWORD *)a1 == -32LL )
        goto LABEL_12;
      if ( 32 * v4 < v5 )
      {
LABEL_24:
        *(_DWORD *)_o__errno(v4) = 34;
LABEL_25:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(*(void **)a1, (const void *)(*(_QWORD *)a1 + 32LL), v5);
      v4 = (unsigned int)a1[4];
    }
    v6 = *((_QWORD *)a1 + 1);
    v7 = 8LL * ((int)v4 - 1);
    if ( !v7 )
      goto LABEL_16;
    if ( v6 && v6 != -8 )
    {
      if ( 8LL * (int)v4 >= v7 )
      {
        memmove_0(*((void **)a1 + 1), (const void *)(v6 + 8), v7);
        LODWORD(v4) = a1[4];
        goto LABEL_16;
      }
      goto LABEL_24;
    }
LABEL_12:
    *(_DWORD *)_o__errno(v4) = 22;
    goto LABEL_25;
  }
LABEL_16:
  v8 = _o__recalloc(*(_QWORD *)a1, (int)v4 - 1, 32LL);
  if ( v8 || (v9 = a1[4], v9 == 1) )
  {
    v9 = a1[4];
    *(_QWORD *)a1 = v8;
  }
  v10 = _o__recalloc(*((_QWORD *)a1 + 1), v9 - 1, 8LL);
  if ( v10 || (v11 = a1[4], v11 == 1) )
  {
    v11 = a1[4];
    *((_QWORD *)a1 + 1) = v10;
  }
  result = 1LL;
  a1[4] = v11 - 1;
  return result;
}
