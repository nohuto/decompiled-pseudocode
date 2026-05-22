/*
 * XREFs of ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x18006D1B4
 * Callers:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x18006D118 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x18006D398 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 * Callees:
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180069808 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x18006985C (--$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@detail.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x18006C12C (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x18006D154 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 */

char __fastcall tson::output_archive::write_name(tson::output_archive *this, char a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r14
  tson::write_buffer *v6; // rcx
  tson::write_buffer *v7; // rcx
  tson::write_buffer *v8; // rcx
  _BYTE *v10; // rbx
  tson::write_buffer *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)this + 24);
  v5 = v4;
  if ( *v4 == 2 )
  {
    *v4 = 3;
    v6 = (tson::write_buffer *)*((_QWORD *)this + 18);
    v12 = 3;
    tson::write_buffer::push_back<enum tson::details::archive_marker>(v6, &v12);
    tson::write_buffer::push_back(*((void ***)this + 18), (char *)this + 10, 2uLL);
    *((_WORD *)this + 5) = 0;
  }
  else if ( !*v4 )
  {
    *v4 = 1;
    v7 = (tson::write_buffer *)*((_QWORD *)this + 18);
    v12 = 1;
    tson::write_buffer::push_back<enum tson::details::archive_marker>(v7, &v12);
  }
  *((_QWORD *)this + 2) = 0LL;
  if ( *v5 != 3 )
  {
    if ( a2 )
    {
      v8 = (tson::write_buffer *)*((_QWORD *)this + 18);
      *(_QWORD *)this = 0LL;
      v12 = 6;
      tson::write_buffer::push_back<enum tson::details::archive_marker>(v8, &v12);
      return 0;
    }
    v10 = (char *)this + 8;
    if ( !*(_QWORD *)this )
    {
      *v10 = 1;
      *(_QWORD *)this = "-";
    }
    v11 = (tson::write_buffer *)*((_QWORD *)this + 18);
    v12 = 5;
    *((_QWORD *)this + 2) = *((_QWORD *)v11 + 259) - *((_QWORD *)v11 + 258);
    tson::write_buffer::push_back<enum tson::details::archive_marker>(v11, &v12);
    tson::write_buffer::push_back<unsigned char>(*((tson::write_buffer **)this + 18), (_BYTE *)this + 8);
    tson::write_buffer::push_back(*((void ***)this + 18), *(const void **)this, (unsigned __int8)*v10);
    *(_QWORD *)this = 0LL;
  }
  return 1;
}
