/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4
 * Callers:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18001092C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180024DE0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180027BD4 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x18002AF04 (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0JI@@std@@YA_K_K@Z @ 0x18002AF30 (--$_Get_size_of_n@$0JI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?allocate@?$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_K@Z @ 0x1800705E8 (-allocate@-$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_.c)
 *     ?allocate@?$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@Z @ 0x180085D68 (-allocate@-$allocator@UVector3@Math@Utils@Spectre@@@std@@QEAAPEAUVector3@Math@Utils@Spectre@@_K@.c)
 * Callees:
 *     ?_Raise@exception@stdext@@QEBAXXZ @ 0x180011A5C (-_Raise@exception@stdext@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD v0[3]; // [rsp+20h] [rbp-18h] BYREF

  v0[1] = "bad array new length";
  v0[0] = &stdext::bad_array_new_length::`vftable';
  stdext::exception::_Raise((stdext::exception *)v0);
}
