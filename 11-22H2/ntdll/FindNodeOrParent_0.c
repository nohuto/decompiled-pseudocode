/*
 * XREFs of FindNodeOrParent_0 @ 0x18006AF7C
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x18006AD90 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x18006ADD0 (RtlInsertElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x180102DE0 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( v8 )
      break;
    v9 = *(_QWORD *)(v6 + 8);
    if ( !v9 )
    {
      v7 = 2;
      goto LABEL_10;
    }
LABEL_6:
    v6 = v9;
  }
  if ( v8 != 1 )
    goto LABEL_10;
  v9 = *(_QWORD *)(v6 + 16);
  if ( v9 )
    goto LABEL_6;
  v7 = 3;
LABEL_10:
  *a3 = v6;
  return v7;
}
