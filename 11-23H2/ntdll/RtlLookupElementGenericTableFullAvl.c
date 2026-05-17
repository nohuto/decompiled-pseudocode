/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180067A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 i; // rbx
  int v9; // eax
  __int64 v11; // rax

  if ( !*(_DWORD *)(a1 + 44) )
  {
    *a4 = 0;
    return 0LL;
  }
  for ( i = *(_QWORD *)(a1 + 16); ; i = v11 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
    if ( !v9 )
      break;
    if ( v9 != 1 )
    {
      *a3 = i;
      *a4 = 1;
      return *a3 + 32LL;
    }
    v11 = *(_QWORD *)(i + 16);
    if ( !v11 )
    {
      *a3 = i;
      *a4 = 3;
      return 0LL;
    }
LABEL_7:
    ;
  }
  v11 = *(_QWORD *)(i + 8);
  if ( v11 )
    goto LABEL_7;
  *a3 = i;
  *a4 = 2;
  return 0LL;
}
