/*
 * XREFs of sub_180091564 @ 0x180091564
 * Callers:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180091EC8 @ 0x180091EC8 (sub_180091EC8.c)
 */

_QWORD *__fastcall sub_180091564(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C190();
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = a2;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
  }
  v6 = 0LL;
  *a1 = a2;
  a1[1] = v4;
  sub_180091EC8(&v6);
  return a1;
}
