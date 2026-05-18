/*
 * XREFs of sub_18001F098 @ 0x18001F098
 * Callers:
 *     sub_18002D850 @ 0x18002D850 (sub_18002D850.c)
 * Callees:
 *     sub_18001E534 @ 0x18001E534 (sub_18001E534.c)
 *     sub_18001E6C8 @ 0x18001E6C8 (sub_18001E6C8.c)
 *     sub_1800DBC68 @ 0x1800DBC68 (sub_1800DBC68.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001F098(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, __int64); // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = qword_1801D33B0;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<wchar_t>::id);
  v3 = sub_18001E6C8(a1, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::ctype<wchar_t>::_Getcat(&v7, a1) == -1 )
      {
        o_abort();
        __debugbreak();
      }
      v4 = v7;
      sub_1800DBC68(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = v7;
      qword_1801D33B0 = v7;
      v8 = 0LL;
      sub_18001E534(&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
