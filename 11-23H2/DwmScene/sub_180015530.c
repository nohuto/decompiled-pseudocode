/*
 * XREFs of sub_180015530 @ 0x180015530
 * Callers:
 *     sub_180015C10 @ 0x180015C10 (sub_180015C10.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180017970 @ 0x180017970 (sub_180017970.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_180015530(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001C190(24LL);
  v6 = 1LL;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::RenderDeviceGeneric>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( !v7 || !*(_DWORD *)(v7 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v8 = a1[1];
      v9 = 0LL;
      v5 = 0LL;
      if ( v8 )
      {
        v9 = a2;
        v5 = a1[1];
        _InterlockedAdd((volatile signed __int32 *)(v8 + 12), 1u);
      }
      *(_QWORD *)(a2 + 8) = v9;
      v10 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v5;
      if ( v10 )
        sub_180010574(v10);
      if ( v8 )
        sub_180010530(v8);
    }
  }
  v12 = 0LL;
  sub_180017970(&v12, v5, v6);
  return a1;
}
