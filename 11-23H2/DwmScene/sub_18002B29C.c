/*
 * XREFs of sub_18002B29C @ 0x18002B29C
 * Callers:
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180071E2C @ 0x180071E2C (sub_180071E2C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002B29C(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingManager>::`vftable';
    sub_180071E2C(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
