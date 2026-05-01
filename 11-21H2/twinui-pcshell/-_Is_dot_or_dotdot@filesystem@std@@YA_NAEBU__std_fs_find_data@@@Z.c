/*
 * XREFs of ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x18058754C
 * Callers:
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180587418 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x18058757C (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::filesystem::_Is_dot_or_dotdot(std::filesystem *this, const struct __std_fs_find_data *a2)
{
  if ( *((_WORD *)this + 22) != 46 )
    return 0;
  if ( !*((_WORD *)this + 23) )
    return 1;
  return *((_WORD *)this + 23) == 46 && *((_WORD *)this + 24) == 0;
}
