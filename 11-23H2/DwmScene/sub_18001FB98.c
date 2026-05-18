/*
 * XREFs of sub_18001FB98 @ 0x18001FB98
 * Callers:
 *     sub_180020220 @ 0x180020220 (sub_180020220.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18001FCA8 @ 0x18001FCA8 (sub_18001FCA8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FB98(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = sub_18001C190();
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Utils::PerformanceLogger>::`vftable';
    v12[0] = *a4;
    v12[1] = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v13[0] = *a3;
    v13[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v11[0] = *a2;
    v11[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18001FCA8(v8 + 16, v11, v13, v12);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  a1[1] = v9;
  return a1;
}
