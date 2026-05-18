/*
 * XREFs of sub_1800DF794 @ 0x1800DF794
 * Callers:
 *     sub_180043CE0 @ 0x180043CE0 (sub_180043CE0.c)
 *     sub_18004AFE0 @ 0x18004AFE0 (sub_18004AFE0.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 *     sub_180081460 @ 0x180081460 (sub_180081460.c)
 *     sub_1800976D4 @ 0x1800976D4 (sub_1800976D4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800A55D4 @ 0x1800A55D4 (sub_1800A55D4.c)
 *     sub_1800DF688 @ 0x1800DF688 (sub_1800DF688.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DF794(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx

  v2 = sub_18001C190();
  v4 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_1800DF688(v2 + 16);
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4 + 16;
  a1[1] = v4;
  sub_1800A55D4(v4 + 32, 2LL, v3);
  return a1;
}
