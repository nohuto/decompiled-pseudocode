/*
 * XREFs of sub_180047A20 @ 0x180047A20
 * Callers:
 *     sub_18004730C @ 0x18004730C (sub_18004730C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180047A20(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx

  v4 = sub_18001C190();
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::VertexBuffer>::`vftable';
    sub_1800894D0(v4 + 16, *a2);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 16;
  *a1 = v5 + 16;
  a1[1] = v5;
  if ( v5 != -16 )
  {
    v7 = *(_QWORD *)(v5 + 120);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v8 = a1[1];
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 )
      {
        v9 = v6;
        v10 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
      }
      *(_QWORD *)(v6 + 96) = v9;
      v11 = *(volatile signed __int32 **)(v6 + 104);
      *(_QWORD *)(v6 + 104) = v10;
      if ( v11 )
        sub_180010574(v11);
      if ( v8 )
        sub_180010530(v8);
    }
  }
  return a1;
}
