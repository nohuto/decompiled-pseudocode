/*
 * XREFs of sub_180096570 @ 0x180096570
 * Callers:
 *     sub_180096750 @ 0x180096750 (sub_180096750.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180062D34 @ 0x180062D34 (sub_180062D34.c)
 *     sub_18009660C @ 0x18009660C (sub_18009660C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180096570(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::Aimer>::`vftable';
    v6 = sub_18001246C(v8, a2);
    sub_18009660C(v5 + 16, v6);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_180062D34(a1, v5 + 16, v5);
  return a1;
}
