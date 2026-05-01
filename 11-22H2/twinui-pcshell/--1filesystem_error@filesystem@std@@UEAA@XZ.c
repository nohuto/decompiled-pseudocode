/*
 * XREFs of ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x1803D4AAC
 * Callers:
 *     ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x1803D52A0 (--_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::filesystem::filesystem_error::~filesystem_error(std::filesystem::filesystem_error *this)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 16);
  if ( v1 >= 0x10 )
  {
    v3 = (void *)*((_QWORD *)this + 13);
    v4 = v1 + 1;
    v5 = v3;
    if ( v1 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v5, &v4);
      v3 = v5;
    }
    operator delete(v3);
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 15LL;
  *((_BYTE *)this + 104) = 0;
  std::wstring::_Tidy_deallocate((__int64)this + 72);
  std::wstring::_Tidy_deallocate((__int64)this + 40);
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
