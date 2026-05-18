/*
 * XREFs of sub_1800FA4C4 @ 0x1800FA4C4
 * Callers:
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_180051410 @ 0x180051410 (sub_180051410.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 *     sub_18008E750 @ 0x18008E750 (sub_18008E750.c)
 *     sub_1800A7D00 @ 0x1800A7D00 (sub_1800A7D00.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_1800B7F04 @ 0x1800B7F04 (sub_1800B7F04.c)
 *     sub_1800FA384 @ 0x1800FA384 (sub_1800FA384.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FA4C4(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  volatile __int32 *v5; // rax
  __int32 v6; // edx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = sub_18001D684();
  v3 = v2;
  v8 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_1800FA384(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  LODWORD(v8) = 2;
  sub_1800B7F04((unsigned int *)&v8);
  v5 = (volatile __int32 *)sub_18001DE70(v4 + 16);
  _InterlockedExchange(v5, v6);
  return a1;
}
