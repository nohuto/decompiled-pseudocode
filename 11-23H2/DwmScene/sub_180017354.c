/*
 * XREFs of sub_180017354 @ 0x180017354
 * Callers:
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180016CC8 @ 0x180016CC8 (sub_180016CC8.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180017354(
        _QWORD *a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  volatile signed __int32 *v18; // rcx

  v11 = sub_18001C190(1736LL);
  v12 = v11;
  if ( v11 )
  {
    *(_OWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 8) = 1;
    *(_DWORD *)(v11 + 12) = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj2<RenderOutputDwm>::`vftable';
    sub_180016CC8(v11 + 16, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v12 + 16;
  *a1 = v12 + 16;
  a1[1] = v12;
  if ( v12 != -16 )
  {
    v14 = *(_QWORD *)(v12 + 88);
    if ( !v14 || !*(_DWORD *)(v14 + 8) )
    {
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v15 = a1[1];
      v16 = 0LL;
      v17 = 0LL;
      if ( v15 )
      {
        v16 = v13;
        v17 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
      }
      *(_QWORD *)(v13 + 64) = v16;
      v18 = *(volatile signed __int32 **)(v13 + 72);
      *(_QWORD *)(v13 + 72) = v17;
      if ( v18 )
        sub_180010574(v18);
      if ( v15 )
        sub_180010530(v15);
    }
  }
  return a1;
}
