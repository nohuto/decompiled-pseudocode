/*
 * XREFs of ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x18023058C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180231974 (--$serialize@Vinput_archive@tson@@@_tip_AppPrelaunch@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1802246C4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x180461788 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180693FC0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 */

tson::read_buffer **__fastcall tson::load_nothrow<int,std::allocator<int>>(__int64 a1, __int64 a2)
{
  tson::read_buffer **result; // rax
  __int64 v5; // r14
  _DWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  size_t v8; // rbx
  _DWORD *v9; // r14
  _DWORD *i; // rbx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  result = (tson::read_buffer **)tson::input_archive::operator()<tson::size_tag &>(a1, &v12);
  try
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_DWORD **)a2;
    v7 = (v5 - *(_QWORD *)a2) >> 2;
    if ( v12 >= v7 )
    {
      if ( v12 <= v7 )
        goto LABEL_9;
      if ( v12 > (__int64)(*(_QWORD *)(a2 + 16) - (_QWORD)v6) >> 2 )
      {
        result = (tson::read_buffer **)std::vector<int>::_Resize_reallocate<std::_Value_init_tag>(a2, v12);
        goto LABEL_9;
      }
      v8 = 4 * (v12 - v7);
      memset_0(*(void **)(a2 + 8), 0, v8);
      result = (tson::read_buffer **)(v8 + v5);
    }
    else
    {
      result = (tson::read_buffer **)&v6[v12];
    }
    *(_QWORD *)(a2 + 8) = result;
LABEL_9:
    v9 = *(_DWORD **)(a2 + 8);
    for ( i = *(_DWORD **)a2; i != v9; ++i )
      result = tson::input_archive::operator()<int &>((tson::read_buffer **)a1, i);
  }
  catch ( ... )
  {
    result = (tson::read_buffer **)a1;
    if ( *(int *)(a1 + 8) >= 0 )
      *(_DWORD *)(a1 + 8) = -2147024882;
  }
  return result;
}
