/*
 * XREFs of sub_140A12380 @ 0x140A12380
 * Callers:
 *     sub_14075E4A8 @ 0x14075E4A8 (sub_14075E4A8.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A12380(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    v2 = 0LL;
    if ( v1 )
    {
      do
      {
        v4 = 0LL;
        if ( v2 < v1 )
        {
          v5 = *(_QWORD *)(a1 + 8) * v2;
          if ( !is_mul_ok(*(_QWORD *)(a1 + 8), v2) || (v6 = *(_QWORD *)(a1 + 40), v4 = v6 + v5, v6 + v5 < v6) )
            v4 = 0LL;
        }
        if ( (unsigned __int16)(*(_WORD *)v4 - 24617) <= 1u || (v7 = v1, *(_WORD *)v4 == 24619) )
        {
          v8 = *(void **)(v4 + 8);
          v7 = v1;
          if ( v8 )
          {
            ExFreePoolWithTag(v8, 0x74705041u);
            v7 = *(_QWORD *)(a1 + 16);
          }
        }
        ++v2;
        v1 = v7;
      }
      while ( v2 < v7 );
    }
    v9 = *(void **)(a1 + 40);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72615452u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
