/*
 * XREFs of sub_1406ED528 @ 0x1406ED528
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 *     sub_1406ED344 @ 0x1406ED344 (sub_1406ED344.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     sub_140260C4C @ 0x140260C4C (sub_140260C4C.c)
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_140261CF8 @ 0x140261CF8 (sub_140261CF8.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 *     sub_1406ED450 @ 0x1406ED450 (sub_1406ED450.c)
 *     sub_1406ED88C @ 0x1406ED88C (sub_1406ED88C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406ED528(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // ebx
  _DWORD *v11; // r14
  int v12; // ecx
  PVOID v13; // rax
  __int64 v14; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v18; // [rsp+20h] [rbp-138h]
  int v19; // [rsp+28h] [rbp-130h]
  int v20; // [rsp+2Ch] [rbp-12Ch]
  PPRIVILEGE_SET v21; // [rsp+30h] [rbp-128h]
  __int64 v22; // [rsp+38h] [rbp-120h]
  PPRIVILEGE_SET Privileges; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-110h] BYREF
  __int64 v25; // [rsp+58h] [rbp-100h]
  int v26; // [rsp+60h] [rbp-F8h]
  int v27; // [rsp+64h] [rbp-F4h]
  __int64 v28[8]; // [rsp+70h] [rbp-E8h] BYREF
  _OWORD v29[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v18 = a1;
  v22 = a1;
  v25 = 0LL;
  v27 = 0;
  v7 = 0LL;
  v21 = 0LL;
  v8 = -1;
  v19 = -1;
  Privileges = 0LL;
  memset(v29, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    v10 = -1073741306;
LABEL_33:
    v14 = v18;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 87) = *(_BYTE *)(v9 + 87);
  }
  v29[0] = *(_OWORD *)a2;
  v29[1] = *(_OWORD *)(a2 + 16);
  v29[2] = *(_OWORD *)(a2 + 32);
  v29[3] = *(_OWORD *)(a2 + 48);
  v29[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v29[5] = *(_QWORD *)(a2 + 80);
  memset(v28, 0, sizeof(v28));
  v10 = sub_1406ED450((unsigned int *)v29, a4, &Privileges, (__int64)v28);
  if ( v10 < 0 )
    goto LABEL_33;
  v11 = (_DWORD *)v28[0];
  v12 = *(_DWORD *)v28[0];
  if ( (*(_DWORD *)v28[0] & 0x400FF) != 0x40000 || (v12 & 0x300) != 0 )
    goto LABEL_36;
  if ( !(_BYTE)v12 && (v12 & 0x160000) != 0x40000 && !SeSinglePrivilegeCheck(stru_140D3CA80, a4) )
  {
    v10 = -1073741790;
    goto LABEL_33;
  }
  if ( (*v11 & 0x400FF) == 0x40000 && v11[2] > 0x20000u )
  {
LABEL_36:
    v10 = -1073741637;
    goto LABEL_33;
  }
  v13 = sub_140260C2C(0x1A50uLL, 0x74536D73u);
  v7 = (__int64)v13;
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_33;
  }
  sub_140260C4C((__int64)v13);
  v10 = sub_140261354(v11[2], 4 - (unsigned int)((*v11 & 0x10000) != 0));
  if ( v10 < 0 )
    goto LABEL_33;
  v28[4] = (__int64)&unk_140D31A00;
  v28[5] = (__int64)qword_140D32198;
  v28[6] = (__int64)Handle;
  *v11 |= 0x8000u;
  v10 = sub_140261CF8(v7, v28);
  if ( v10 < 0 )
    goto LABEL_33;
  v25 = 0LL;
  v27 = 0;
  v24[0] = (char *)v29 + 8;
  v24[1] = *(_QWORD *)(v7 + 6200);
  v26 = DWORD2(v29[1]);
  if ( (v29[0] & 0x200) != 0 )
    v25 = *((_QWORD *)KeGetCurrentThread() + 23);
  v10 = sub_1406ED88C(v18, v7, v24, v7 + 6016);
  if ( v10 < 0 )
    goto LABEL_33;
  v19 = *(_DWORD *)(v7 + 6016);
  v8 = v19;
  _InterlockedOr(v17, 0);
  byte_140D321A8 = 5;
  v7 = 0LL;
  v21 = 0LL;
  v20 = 1;
  v10 = 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( (v29[0] & 0x100) != 0 )
    v8 = -1;
  v14 = v18;
LABEL_24:
  if ( v8 != -1 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(v14, v8 & 0x3FF);
    sub_1402AD030(v16 + 1);
  }
  if ( v7 )
  {
    sub_140237230(v7);
    SeFreePrivileges((PPRIVILEGE_SET)v7);
  }
  if ( Privileges )
    SeFreePrivileges(Privileges);
  return (unsigned int)v10;
}
