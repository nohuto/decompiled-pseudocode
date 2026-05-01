/*
 * XREFs of ??$_Emplace_reallocate@AEBULTCMITEM@CLauncherTipContextMenu@@@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAAPEAULTCMITEM@CLauncherTipContextMenu@@QEAU23@AEBU23@@Z @ 0x1801D6FCC
 * Callers:
 *     ?push_back@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@QEAAXAEBULTCMITEM@CLauncherTipContextMenu@@@Z @ 0x1801E80B0 (-push_back@-$vector@ULTCMITEM@CLauncherTipContextMenu@@V-$allocator@ULTCMITEM@CLauncherTipContex.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x18012C96C (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ?_Change_array@?$vector@ULTCMITEM@CLauncherTipContextMenu@@V?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@@std@@AEAAXQEAULTCMITEM@CLauncherTipContextMenu@@_K1@Z @ 0x1801E7D70 (-_Change_array@-$vector@ULTCMITEM@CLauncherTipContextMenu@@V-$allocator@ULTCMITEM@CLauncherTipCo.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

char *__fastcall std::vector<CLauncherTipContextMenu::LTCMITEM>::_Emplace_reallocate<CLauncherTipContextMenu::LTCMITEM const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // rdi
  char *v15; // r14
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  __int64 v20; // rcx
  char *result; // rax
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 12;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  v8 = 0x1555555555555555LL;
  if ( v7 == 0x1555555555555555LL )
    std::vector<Geometry::CRect>::_Xlength();
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0x1555555555555555LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<12>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = v13;
  try
  {
    v15 = &v13[12 * v6];
    *(_QWORD *)v15 = *(_QWORD *)a3;
    *((_DWORD *)v15 + 2) = *(_DWORD *)(a3 + 8);
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v13, v17, a2 - (_BYTE *)*a1);
      v18 = v15 + 12;
      v19 = (_BYTE *)a1[1] - a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    std::vector<CLauncherTipContextMenu::LTCMITEM>::_Change_array(a1, v14, v9, v8);
    result = v15;
  }
  catch ( ... )
  {
    std::allocator<CLauncherTipContextMenu::LTCMITEM>::deallocate(v20, v22, v8);
    throw;
  }
  return result;
}
