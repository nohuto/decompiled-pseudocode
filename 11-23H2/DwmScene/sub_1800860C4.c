/*
 * XREFs of sub_1800860C4 @ 0x1800860C4
 * Callers:
 *     sub_1800861C4 @ 0x1800861C4 (sub_1800861C4.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D0C @ 0x180011D0C (sub_180011D0C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_18008BD5C @ 0x18008BD5C (sub_18008BD5C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800860C4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexLayout>::`vftable';
    sub_18008BD5C(v4 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = v5 + 16;
  a2[1] = v5;
  sub_18002A0C4(a1 + 808, (__int64)v9);
  v8 = 0LL;
  v6 = a2[1];
  if ( v6 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  sub_180011D0C((__int64 *)(a1 + 864), &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v8 + 1));
  sub_180010F54((__int64)v9);
  sub_180033280(a1, *a2);
  return a2;
}
