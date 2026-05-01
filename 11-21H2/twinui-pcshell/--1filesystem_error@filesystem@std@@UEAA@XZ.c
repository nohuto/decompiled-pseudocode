/*
 * XREFs of ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18057F2BC
 * Callers:
 *     ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x18057FA30 (--_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::filesystem::filesystem_error::~filesystem_error(
        std::filesystem::filesystem_error *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 16);
  if ( v3 >= 0x10 )
  {
    v5 = (void *)*((_QWORD *)this + 13);
    v6 = v3 + 1;
    v7 = v5;
    if ( v3 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6, a3);
      v5 = v7;
    }
    operator delete(v5);
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 15LL;
  *((_BYTE *)this + 104) = 0;
  std::wstring::_Tidy_deallocate((__int64)this + 72);
  std::wstring::_Tidy_deallocate((__int64)this + 40);
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
