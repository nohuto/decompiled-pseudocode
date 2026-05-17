/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1801041F0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006AF5C (FindNodeOrParent_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RealSuccessor @ 0x1801041A4 (RealSuccessor.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD **a5,
        _DWORD *a6,
        __int64 a7)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v12; // rbx
  _DWORD *v14; // r15
  __int64 (*v15)(); // r12
  int NodeOrParent_0; // eax
  _QWORD *v17; // rcx
  int v18; // eax

  v7 = a5;
  v8 = 0LL;
  v12 = *a5;
  a5 = (_QWORD **)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v14 = a6;
  v15 = MatchAll;
  if ( a2 )
    v15 = a2;
  if ( *a6 == *(_DWORD *)(a1 + 64) )
  {
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    a5 = 0LL;
  }
  NodeOrParent_0 = FindNodeOrParent_0(a1, a7, &a5);
  if ( NodeOrParent_0 != 1 )
  {
    if ( NodeOrParent_0 != 3 )
    {
      v12 = a5;
      goto LABEL_17;
    }
    v17 = a5;
    goto LABEL_16;
  }
  v12 = a5;
LABEL_14:
  if ( !a4 )
    goto LABEL_17;
  v17 = v12;
LABEL_16:
  v12 = RealSuccessor(v17);
LABEL_17:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v18 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v15)(a1, v12 + 4, a3);
    if ( v18 != -1073741198 )
      break;
    v12 = RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  if ( !v18 )
    v8 = v12 + 4;
  *v14 = *(_DWORD *)(a1 + 64);
  return v8;
}
