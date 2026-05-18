/*
 * XREFs of sub_1800206F8 @ 0x1800206F8
 * Callers:
 *     sub_18002FC20 @ 0x18002FC20 (sub_18002FC20.c)
 * Callees:
 *     sub_1800F5AB8 @ 0x1800F5AB8 (sub_1800F5AB8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800206F8(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  v11 = qword_1801F74B8;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<wchar_t>::id);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 >= *(_QWORD *)(v3 + 24) )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v2);
    if ( v4 )
      goto LABEL_13;
  }
  if ( !*(_BYTE *)(v3 + 36) )
    goto LABEL_8;
  v5 = std::locale::_Getgloballocale();
  if ( v2 < *(_QWORD *)(v5 + 24) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v2);
LABEL_8:
    if ( v4 )
      goto LABEL_13;
  }
  v4 = v11;
  if ( !v11 )
  {
    if ( std::ctype<wchar_t>::_Getcat(&v11, a1) == -1 )
    {
      o_abort(v7, v6);
      __debugbreak();
    }
    v8 = v11;
    sub_1800F5AB8(v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v4 = v11;
    qword_1801F74B8 = v11;
  }
LABEL_13:
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v4;
}
