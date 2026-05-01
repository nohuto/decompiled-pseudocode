/*
 * XREFs of ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x180013960
 * Callers:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x180013820 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x180013878 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800138B4 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 * Callees:
 *     ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x180013B2C (--$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@detail.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180013BC4 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x1801C73EA (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18046D6FC (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

char __fastcall tson::output_archive::write_name(tson::output_archive *this, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi
  int v6; // eax
  tson::write_buffer *v7; // rbx
  tson::write_buffer *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  size_t v12; // rsi
  const void *v13; // r14
  void *v14; // rcx
  size_t v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v5 = 4 * v2;
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
    v5 = 4LL;
  }
  v6 = *(_DWORD *)((char *)this + v5 + 24);
  if ( v6 == 2 )
  {
    *(_DWORD *)((char *)this + v5 + 24) = 3;
    v17 = *((_QWORD *)this + 18);
    v18 = 3;
    tson::write_buffer::push_back<enum tson::details::archive_marker>(v17, &v18);
    tson::write_buffer::push_back(*((tson::write_buffer **)this + 18), (char *)this + 10, 2uLL);
    *((_WORD *)this + 5) = 0;
  }
  else if ( !v6 )
  {
    *(_DWORD *)((char *)this + v5 + 24) = 1;
    v16 = *((_QWORD *)this + 18);
    v18 = 1;
    tson::write_buffer::push_back<enum tson::details::archive_marker>(v16, &v18);
  }
  *((_QWORD *)this + 2) = 0LL;
  if ( *(_DWORD *)((char *)this + v5 + 24) == 3 )
    return 1;
  if ( !a2 )
  {
    if ( !*(_QWORD *)this )
    {
      *((_BYTE *)this + 8) = 1;
      *(_QWORD *)this = "-";
    }
    v9 = (tson::write_buffer *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 2) = *((_QWORD *)v9 + 259) - *((_QWORD *)v9 + 258);
    if ( *((_QWORD *)v9 + 259) < *((_QWORD *)v9 + 260) || tson::write_buffer::reserve(v9, 1uLL) )
      *(_BYTE *)(*((_QWORD *)v9 + 259))++ = 5;
    v10 = *((_QWORD *)this + 18);
    if ( *(_QWORD *)(v10 + 2072) < *(_QWORD *)(v10 + 2080)
      || tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v10 + 2072))++ = *((_BYTE *)this + 8);
    }
    v11 = *((_QWORD *)this + 18);
    v12 = *((unsigned __int8 *)this + 8);
    v13 = *(const void **)this;
    if ( *(_QWORD *)(v11 + 2080) - *(_QWORD *)(v11 + 2072) < v12
      && !tson::write_buffer::reserve(*((tson::write_buffer **)this + 18), *((unsigned __int8 *)this + 8)) )
    {
      goto LABEL_24;
    }
    v14 = *(void **)(v11 + 2072);
    v15 = *(_QWORD *)(v11 + 2080) - (_QWORD)v14;
    if ( v12 )
    {
      if ( !v14 )
        goto LABEL_36;
      if ( v13 && v15 >= v12 )
      {
        memcpy_0(v14, v13, v12);
        goto LABEL_23;
      }
      memset_0(v14, 0, *(_QWORD *)(v11 + 2080) - (_QWORD)v14);
      if ( v13 )
      {
        if ( v15 >= v12 )
          goto LABEL_23;
        *(_DWORD *)_o__errno() = 34;
      }
      else
      {
LABEL_36:
        *(_DWORD *)_o__errno() = 22;
      }
      invalid_parameter_noinfo();
    }
LABEL_23:
    *(_QWORD *)(v11 + 2072) += v12;
LABEL_24:
    *(_QWORD *)this = 0LL;
    return 1;
  }
  *(_QWORD *)this = 0LL;
  v7 = (tson::write_buffer *)*((_QWORD *)this + 18);
  if ( *((_QWORD *)v7 + 259) < *((_QWORD *)v7 + 260) || tson::write_buffer::reserve(v7, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v7 + 259))++ = 6;
  return 0;
}
