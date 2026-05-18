/*
 * XREFs of sub_180057760 @ 0x180057760
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_180056DBC @ 0x180056DBC (sub_180056DBC.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_180057760(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  _QWORD *v7; // rax
  bool v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  struct _Mtx_internal_imp_t *v18; // [rsp+70h] [rbp+8h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  while ( v5 != v6 )
  {
    v7 = sub_18003890C(v5, &v16);
    v8 = sub_180015678(v7, a2);
    if ( v17 )
      sub_180010530(v17);
    if ( v8 )
      break;
    v5 += 16LL;
  }
  if ( v5 == *(_QWORD *)(a1 + 72) )
  {
    v15 = 0LL;
    v9 = a2[1];
    v10 = 0LL;
    v11 = 0LL;
    if ( v9 )
    {
      v10 = *a2;
      *(_QWORD *)&v15 = *a2;
      *((_QWORD *)&v15 + 1) = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
      v11 = v9;
      v4 = v18;
    }
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 == *(_QWORD *)(a1 + 80) )
    {
      sub_180056DBC((_QWORD *)(a1 + 64), (char *)v12, &v15);
      v13 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
    }
    else
    {
      *(_QWORD *)v12 = v10;
      *(_QWORD *)(v12 + 8) = v11;
      v13 = 0LL;
      *(_QWORD *)(a1 + 72) += 16LL;
    }
    if ( v13 )
      sub_180010574(v13);
  }
  return Mtx_unlock(v4);
}
