/*
 * XREFs of sub_18005F568 @ 0x18005F568
 * Callers:
 *     sub_18005F884 @ 0x18005F884 (sub_18005F884.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18005F7EC @ 0x18005F7EC (sub_18005F7EC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005F568(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx
  __int64 v11[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = sub_18001C190();
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::IShaderExtension>::`vftable';
    v4 = sub_180010DD0(v11, (__int64)"<NullExtension>");
    sub_18005F7EC(v3 + 16, v4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 16;
  a1[1] = v3;
  if ( v3 != -16 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v6 = a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = v3 + 16;
        v8 = a1[1];
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      }
      *(_QWORD *)(v3 + 24) = v7;
      v9 = *(volatile signed __int32 **)(v3 + 32);
      *(_QWORD *)(v3 + 32) = v8;
      if ( v9 )
        sub_180010574(v9);
      if ( v6 )
        sub_180010530(v6);
    }
  }
  return a1;
}
