/*
 * XREFs of sub_14065A44C @ 0x14065A44C
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 * Callees:
 *     sub_140200008 @ 0x140200008 (sub_140200008.c)
 *     sub_1402001A8 @ 0x1402001A8 (sub_1402001A8.c)
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A784 @ 0x14065A784 (sub_14065A784.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14065AA54 @ 0x14065AA54 (sub_14065AA54.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065C91C @ 0x14065C91C (sub_14065C91C.c)
 *     sub_14065C990 @ 0x14065C990 (sub_14065C990.c)
 *     sub_14069EEC0 @ 0x14069EEC0 (sub_14069EEC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_14069F324 @ 0x14069F324 (sub_14069F324.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 *     sub_140910F5C @ 0x140910F5C (sub_140910F5C.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_14065A44C(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // si
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // r15
  ULONG_PTR v9; // rdi
  int v10; // ebx
  __int64 v11; // r14
  int v12; // r9d
  int v13; // ecx
  __int64 v14; // rbx
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+20h] [rbp-A9h]
  int *v31; // [rsp+28h] [rbp-A1h]
  char v32; // [rsp+30h] [rbp-99h]
  int v34; // [rsp+34h] [rbp-95h] BYREF
  int v35; // [rsp+38h] [rbp-91h]
  __int128 v36; // [rsp+40h] [rbp-89h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-79h]
  __int64 v38; // [rsp+60h] [rbp-69h]
  __int64 v39; // [rsp+68h] [rbp-61h]
  _WORD v40[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v41; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v38 = a2;
  v35 = a3;
  v39 = a1;
  Uuid = 0LL;
  v41 = 0LL;
  memset(v40, 0, 0x4AuLL);
  v36 = 0LL;
  WORD1(v36) = -1;
  *(_OWORD *)Privileges = 0LL;
  sub_14069F2B4(v40);
  v34 = -1;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = sub_1407435A8(&Uuid);
  if ( v10 >= 0 )
  {
    v10 = sub_1407435A8(&v41);
    if ( v10 >= 0 )
    {
      v9 = sub_14065C990(&Uuid, &v41);
      if ( !v9 )
      {
        v10 = -1073741670;
        goto LABEL_17;
      }
      sub_140AB4370();
      v11 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      v10 = sub_1407C05F4(&v36, v11);
      if ( v10 < 0 )
        goto LABEL_17;
      sub_140721B68(&v36);
      v6 = 1;
      if ( *(_QWORD *)(v11 + 32) == qword_140D3CA28 )
      {
        v10 = -1073741790;
        goto LABEL_17;
      }
      sub_14065C91C(v11);
      v32 = 1;
      v10 = sub_140AB43C0(v39, 0LL);
      if ( v10 >= 0 )
      {
        v10 = sub_14069F324(v40, (unsigned __int16)(*(_WORD *)(v11 + 66) + 1));
        if ( v10 >= 0 )
        {
          sub_1402001A8((__int64)&v36);
          sub_14069EEC0(v40, &v36, 0LL);
          LOBYTE(v12) = a4;
          v10 = sub_14065B560(0, 0, (unsigned int)v40, v12, 131097, 3);
          if ( v10 < 0 )
          {
LABEL_36:
            sub_140200008((__int64)&v36);
            goto LABEL_17;
          }
          v8 = *(_QWORD *)(v11 + 32);
          if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1544) )
          {
            if ( *(_WORD *)(v11 + 66) )
            {
              sub_14091CEA0(25LL);
              v10 = -1073741822;
              goto LABEL_36;
            }
            v7 = sub_140347810((struct _EX_RUNDOWN_REF *)(v8 + 1640));
            if ( !v7 )
            {
              v10 = -1073741444;
              goto LABEL_36;
            }
            sub_140200008((__int64)&v36);
            sub_140721BAC(&v36);
            v6 = 0;
            sub_140AB4260(v27, v26, v28, v29, v30, v31);
            v5 = 0;
            v10 = sub_14090DF50(v8);
            if ( v10 >= 0 )
              sub_140910F5C();
          }
          else
          {
            v13 = v35;
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v35;
            *(_DWORD *)(v9 + 220) = v13;
            v31 = &v34;
            LODWORD(v30) = 0;
            v10 = sub_14065C008(v40, v9, 0xFFFFFFFFLL, 1LL);
            if ( v10 < 0 )
              goto LABEL_36;
            sub_14065AA54();
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v34;
            v14 = sub_14069F1CC(v40);
            *(_QWORD *)v14 = v9;
            *(_DWORD *)(v14 + 8) = v15;
            v16 = (*(_BYTE *)(v9 + 140) & 1) != 0 ? sub_1406BF400(v9, v15) : sub_1407C9820(v9);
            *(_QWORD *)(v14 + 16) = v16;
            v10 = sub_14065AAAC(0LL, v40);
            if ( v10 < 0 )
              goto LABEL_36;
            v10 = sub_14065B6A0(0LL, v40);
            if ( v10 < 0 )
              goto LABEL_36;
            sub_140200008((__int64)&v36);
            sub_14069F150(v40);
            sub_14069F2B4(v40);
            sub_140721BAC(&v36);
            v6 = 0;
            sub_140AB4260(v18, v17, v19, v20, v30, &v34);
            *(_QWORD *)(v9 + 1560) = v38;
            v5 = 0;
            v10 = sub_14065A848(v9);
            if ( v10 >= 0 )
              v10 = 0;
          }
        }
      }
    }
  }
LABEL_17:
  sub_14069F150(v40);
  if ( v6 )
    sub_140721BAC(&v36);
  if ( v5 )
    sub_140AB4260(v22, v21, v23, v24, v30, v31);
  if ( v7 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(v8 + 1640));
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1560) = 0LL;
    sub_14065A7E0((PVOID)v9);
  }
  if ( v32 )
    sub_14065A784((unsigned int)v10);
  return (unsigned int)v10;
}
