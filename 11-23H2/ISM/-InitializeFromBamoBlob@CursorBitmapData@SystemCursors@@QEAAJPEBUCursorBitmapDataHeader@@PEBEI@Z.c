/*
 * XREFs of ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x1801760F4
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x180104E90 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180176014 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall SystemCursors::CursorBitmapData::InitializeFromBamoBlob(
        SystemCursors::CursorBitmapData *this,
        const struct CursorBitmapDataHeader *a2,
        const unsigned __int8 *a3,
        const char *a4)
{
  __int64 v5; // r11
  unsigned int v6; // r10d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  size_t v9; // rsi
  int v10; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r14
  const unsigned __int8 *v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  size_t v18; // rax
  size_t v19; // rbx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)this = *(_BYTE *)a2;
  *((_DWORD *)this + 1) = *(_DWORD *)((char *)a2 + 1);
  v5 = *(unsigned int *)((char *)a2 + 5);
  *((_DWORD *)this + 2) = v5;
  v6 = *(_DWORD *)((char *)a2 + 9);
  *((_DWORD *)this + 3) = v6;
  *((_DWORD *)this + 4) = *(_DWORD *)((char *)a2 + 13);
  *((_DWORD *)this + 5) = *(_DWORD *)((char *)a2 + 17);
  v7 = v5 * v6;
  if ( v7 > 0xFFFFFFFF )
  {
    v20 = 52LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 4LL * (unsigned int)v7;
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = *(_DWORD *)((char *)a2 + 25);
      if ( (_DWORD)v9 != v10 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
      v12 = *(unsigned int *)((char *)a2 + 21);
      if ( (unsigned int)v12 >= (unsigned int)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          a4);
      v13 = v12 + v10;
      if ( v13 < (unsigned int)v12 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          (const char *)0x80070216LL,
          v21);
      if ( v13 > (unsigned int)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3D,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
          a4);
      v14 = *((_QWORD *)this + 4);
      v15 = &a3[v12];
      v16 = *((_QWORD *)this + 3);
      v17 = (v14 - v16) >> 2;
      if ( v8 < v17 )
      {
        v18 = v9 + v16;
LABEL_16:
        *((_QWORD *)this + 4) = v18;
        goto LABEL_17;
      }
      if ( v8 > v17 )
      {
        if ( v8 <= (*((_QWORD *)this + 5) - v16) >> 2 )
        {
          v19 = 4 * (v8 - v17);
          memset_0(*((void **)this + 4), 0, v19);
          v18 = v19 + v14;
          goto LABEL_16;
        }
        std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 3, v8);
      }
LABEL_17:
      memmove_0(*((void **)this + 3), v15, v9);
      return 0LL;
    }
    v20 = 54LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorreaders.cpp",
    (const char *)0x80070216LL);
  return 2147942934LL;
}
