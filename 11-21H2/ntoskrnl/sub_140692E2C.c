/*
 * XREFs of sub_140692E2C @ 0x140692E2C
 * Callers:
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1406930B0 @ 0x1406930B0 (sub_1406930B0.c)
 *     sub_1406930F8 @ 0x1406930F8 (sub_1406930F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID *__fastcall sub_140692E2C(__int64 a1)
{
  char v2; // di
  PVOID ***v3; // rbx
  PVOID **v4; // rax
  PVOID v5; // rcx
  PVOID *result; // rax
  __int64 v7; // rax
  PVOID **v8; // rcx
  PVOID *v9; // r8
  PVOID ***v10; // rdx
  PVOID *v11; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-30h] BYREF
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  v2 = 0;
  P = &P;
  sub_1406930F8();
  v3 = (PVOID ***)(a1 + 72);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (PVOID **)v3 )
      break;
    if ( v4[1] != (PVOID *)v3 )
      goto LABEL_17;
    v8 = (PVOID **)*v4;
    if ( (*v4)[1] != v4 )
      goto LABEL_17;
    *v3 = v8;
    v8[1] = (PVOID *)v3;
    v9 = v4[2];
    if ( v9[1] != v4 + 2 )
      goto LABEL_17;
    v10 = (PVOID ***)v4[3];
    if ( *v10 != v4 + 2 )
      goto LABEL_17;
    *v10 = (PVOID **)v9;
    v9[1] = v10;
    if ( v10 == (PVOID ***)v9 )
      v2 = 1;
    v11 = p_P;
    if ( *p_P != &P )
LABEL_17:
      __fastfail(3u);
    v4[1] = p_P;
    *v4 = &P;
    *v11 = v4;
    p_P = (PVOID *)v4;
  }
  sub_1406930B0();
  if ( v2 )
  {
    _InterlockedOr(v12, 0);
    if ( qword_140C49800 )
      ExfUnblockPushLock(&qword_140C49800, 0LL);
  }
  while ( 1 )
  {
    v5 = P;
    result = &P;
    if ( P == &P )
      return result;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v7 + 8) = &P;
    ExFreePoolWithTag(v5, 0x63634D43u);
  }
}
