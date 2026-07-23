/*
 * XREFs of sub_140947450 @ 0x140947450
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D3C18 @ 0x1402D3C18 (sub_1402D3C18.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_1407D78A0 @ 0x1407D78A0 (sub_1407D78A0.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_14094FEE4 @ 0x14094FEE4 (sub_14094FEE4.c)
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     sub_1409509D8 @ 0x1409509D8 (sub_1409509D8.c)
 *     sub_140950DA4 @ 0x140950DA4 (sub_140950DA4.c)
 *     sub_14095A67C @ 0x14095A67C (sub_14095A67C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140947450(PVOID P)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int **v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  int v13; // edx

  v1 = 0;
  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    v1 = sub_14095A67C(*((_QWORD *)P + 7));
  }
  v3 = *((_QWORD *)P + 12);
  if ( v3 )
  {
    sub_14042A5E0(*(_QWORD *)(v3 + 8), 1LL);
    sub_14042A5E0(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL), v4);
  }
  sub_14077572C(1);
  v5 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = *((_QWORD *)P + 7);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
  else
    v8 = 0LL;
  v9 = (unsigned int **)*((_QWORD *)P + 8);
  if ( v9 )
  {
    if ( *((_BYTE *)P + 88) )
    {
      sub_14094FEE4();
      v9 = (unsigned int **)*((_QWORD *)P + 8);
    }
    sub_14080E8D0(v9, 4u, 0, 1);
    sub_140950DA4(*((_QWORD *)P + 8), 0LL);
    sub_140767600(*((_QWORD **)P + 8));
    *(_QWORD *)(v8 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  sub_140775698(1);
  v10 = (_QWORD *)*((_QWORD *)P + 6);
  if ( v10 )
  {
    v11 = v10[13];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      ExDeleteTimer(*(_QWORD *)(v12 + 56), 1, 1, 0LL);
      *(_QWORD *)(v12 + 56) = 0LL;
      if ( *(int *)(v12 + 96) > 0 )
        KeWaitForSingleObject((PVOID)(v12 + 104), Executive, 0, 0, 0LL);
      ExFreePoolWithTag((PVOID)v12, 0x54645750u);
      v13 = *(_DWORD *)(v11 + 16);
      *(_QWORD *)(v11 + 8) = 0LL;
      sub_14074ED04(0LL, v13);
      if ( *(_BYTE *)(v11 + 32) )
        sub_140950084(v11, 0LL);
      sub_1402D3C18((void *)v11);
      v10[13] = 0LL;
    }
    sub_1407D78A0(v10, v1);
  }
  if ( *((_BYTE *)P + 89) )
    sub_1409509D8(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
