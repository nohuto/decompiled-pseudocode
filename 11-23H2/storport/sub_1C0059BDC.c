/*
 * XREFs of sub_1C0059BDC @ 0x1C0059BDC
 * Callers:
 *     sub_1C005AE70 @ 0x1C005AE70 (sub_1C005AE70.c)
 *     sub_1C005B4C0 @ 0x1C005B4C0 (sub_1C005B4C0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C005AED8 @ 0x1C005AED8 (sub_1C005AED8.c)
 */

__int64 __fastcall sub_1C0059BDC(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ebp

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v3 != 1094997074 )
    return 3221225485LL;
  if ( !v3 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v3 + 5624);
  if ( v5 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    v6 = sub_1C0007CF4(64LL, 64LL, 1347314002LL, a1);
    if ( v6 )
    {
      v8 = sub_1C005AED8(*(PDEVICE_OBJECT *)(v3 + 32));
      if ( v8 < 0
        || (LOBYTE(v7) = 1, v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v6 + 32))(*(_QWORD *)(v6 + 8), v7), v8 < 0) )
      {
        ExFreePoolWithTag((PVOID)v6, 0x504E6152u);
        v6 = 0LL;
      }
      else
      {
        *a2 = v6;
      }
      *(_QWORD *)(v3 + 5624) = v6;
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
