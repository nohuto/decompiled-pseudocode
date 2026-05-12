/*
 * XREFs of sub_1C0018AEC @ 0x1C0018AEC
 * Callers:
 *     sub_1C0018A38 @ 0x1C0018A38 (sub_1C0018A38.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0018AEC(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v2)(__int64 *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  unsigned int (__fastcall *v5)(__int64); // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *i; // rsi
  __int64 **v10; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax

  v2 = *(__int64 (__fastcall **)(__int64 *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v5 = *(unsigned int (__fastcall **)(__int64))(a1 + 40);
  v7 = v2(a2);
  v8 = *(_QWORD *)(a1 + 16) + 16LL * (v5(v7) % *(_DWORD *)(a1 + 4));
  for ( i = *(__int64 **)v8; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v8 )
    {
      ++*(_DWORD *)a1;
      v10 = *(__int64 ***)(v8 + 8);
      if ( *v10 != (__int64 *)v8 )
        __fastfail(3u);
      *a2 = v8;
      a2[1] = (__int64)v10;
      *v10 = a2;
      *(_QWORD *)(v8 + 8) = a2;
      return 0LL;
    }
    v12 = v2(a2);
    v13 = v2(i);
    v14 = v4(v13, v12);
    if ( !v14 )
      break;
    if ( v14 < 0 )
    {
      *a2 = (__int64)i;
      a2[1] = i[1];
      i[1] = (__int64)a2;
      *(_QWORD *)a2[1] = a2;
      ++*(_DWORD *)a1;
      return 0LL;
    }
  }
  return 3221226026LL;
}
