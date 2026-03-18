/*
 * XREFs of ??1?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAA@XZ @ 0x1C00DB1C8
 * Callers:
 *     ?Destroy@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00DB530 (-Destroy@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9DD8 (-Destroy@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<909312,3552>::~CTypeIsolation<909312,3552>(__int64 a1)
{
  struct _PAGED_LOOKASIDE_LIST *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v2 = *(struct _PAGED_LOOKASIDE_LIST **)(a1 + 24);
  if ( v2 )
  {
    ExDeletePagedLookasideList(v2);
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  while ( 1 )
  {
    v4 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    NSInstrumentation::CSectionEntry<909312,3552>::Destroy(v4);
  }
}
