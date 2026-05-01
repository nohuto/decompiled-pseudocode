/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18001B114
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x18004D8C9 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize_reallocate_std--_Value_init_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, void *a2, unsigned __int64 a3)
{
  void *v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( a3 >= 0x1000 )
  {
    v4 = *((_QWORD *)a2 - 1);
    a3 += 39LL;
    if ( (unsigned __int64)a2 - v4 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v4, a2);
      __debugbreak();
      JUMPOUT(0x18001B158LL);
    }
    v3 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v3, a3);
}
