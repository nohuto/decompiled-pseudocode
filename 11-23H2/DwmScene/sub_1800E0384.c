/*
 * XREFs of sub_1800E0384 @ 0x1800E0384
 * Callers:
 *     sub_1800DF688 @ 0x1800DF688 (sub_1800DF688.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800DFEFC @ 0x1800DFEFC (sub_1800DFEFC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E0384(_QWORD *a1)
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
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_1800DFEFC(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  return a1;
}
