/*
 * XREFs of sub_140A171B8 @ 0x140A171B8
 * Callers:
 *     sub_140A15E88 @ 0x140A15E88 (sub_140A15E88.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 * Callees:
 *     sub_140A17288 @ 0x140A17288 (sub_140A17288.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A171B8(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v3 = *(_QWORD *)(v1 + 32);
      for ( i = 0LL; i < v3; ++i )
      {
        v5 = 0LL;
        if ( i < v3 )
        {
          if ( !is_mul_ok(*(_QWORD *)(v1 + 24), i)
            || (v6 = *(_QWORD *)(v1 + 56), v5 = v6 + *(_QWORD *)(v1 + 24) * i, v5 < v6) )
          {
            v5 = 0LL;
          }
        }
        sub_140A17288(v5);
        v3 = *(_QWORD *)(v1 + 32);
      }
      v7 = *(void **)(v1 + 56);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x72615452u);
      *(_OWORD *)(v1 + 16) = 0LL;
      *(_OWORD *)(v1 + 32) = 0LL;
      *(_OWORD *)(v1 + 48) = 0LL;
      v8 = *(void **)(v1 + 8);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0x74705041u);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
