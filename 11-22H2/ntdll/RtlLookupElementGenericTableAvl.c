/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1800634A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlLookupElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = v7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          v8 = 1;
          goto LABEL_10;
        }
        v7 = *(_QWORD *)(i + 16);
        if ( !v7 )
        {
          v8 = 3;
          goto LABEL_10;
        }
      }
      else
      {
        v7 = *(_QWORD *)(i + 8);
        if ( !v7 )
        {
          v8 = 2;
          goto LABEL_10;
        }
      }
    }
  }
  i = v10;
  v8 = 0;
LABEL_10:
  if ( v8 == 1 )
    return i + 32;
  return v2;
}
