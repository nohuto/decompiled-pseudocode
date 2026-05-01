/*
 * XREFs of ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x1800BE5CC
 * Callers:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800BE544 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180416C60 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::stringbuf::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::streambuf::pptr() )
      v2 = std::streambuf::epptr(a1);
    else
      v2 = std::streambuf::egptr(a1);
    v3 = v2 - std::streambuf::eback(a1);
    v6 = v3;
    v4 = (void *)std::streambuf::eback(a1);
    v7 = v4;
    if ( v3 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v3 = v6;
      v4 = v7;
    }
    operator delete(v4, v3);
  }
  std::streambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::streambuf::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
