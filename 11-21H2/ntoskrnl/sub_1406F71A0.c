/*
 * XREFs of sub_1406F71A0 @ 0x1406F71A0
 * Callers:
 *     sub_1406F6CA4 @ 0x1406F6CA4 (sub_1406F6CA4.c)
 *     sub_1409F1110 @ 0x1409F1110 (sub_1409F1110.c)
 * Callees:
 *     sub_140280EF8 @ 0x140280EF8 (sub_140280EF8.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14030EBA0 @ 0x14030EBA0 (sub_14030EBA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 */

PVOID __fastcall sub_1406F71A0(ULONG_PTR BugCheckParameter1, char a2, __int64 a3, __int64 a4)
{
  int v7; // ecx
  int v8; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // r15d
  PVOID v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  PVOID v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 *v16; // rbx
  _QWORD *i; // rdi
  _QWORD **v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // r8d
  int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-68h]
  _OWORD v38[3]; // [rsp+28h] [rbp-60h] BYREF

  v7 = a2 & 1;
  memset(v38, 0, 32);
  v8 = v7 | 2;
  if ( (a2 & 2) == 0 )
    v8 = v7;
  v38[2] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = v8 | 4;
  if ( (a2 & 4) == 0 )
    v10 = v8;
  v11 = 0LL;
  if ( *((_QWORD *)CurrentThread + 23) == BugCheckParameter1 )
  {
    v37 = 0;
  }
  else
  {
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v38, a4);
    v37 = 1;
  }
  sub_14030EB30((__int64)CurrentThread, BugCheckParameter1);
  v12 = *(_QWORD *)(BugCheckParameter1 + 2024);
  if ( v12 )
  {
    v13 = v12 + 1;
    if ( v13 <= 0x555555555555555LL )
    {
      v14 = sub_1402828F0(256, 48 * v13, 0x3031704Du);
      v11 = v14;
      if ( v14 )
      {
        v15 = *(_QWORD **)(BugCheckParameter1 + 2008);
        v16 = (unsigned __int64 *)v14;
        i = 0LL;
        while ( v15 )
        {
          i = v15;
          v15 = (_QWORD *)*v15;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *v16 = 0LL;
              goto LABEL_38;
            }
            v18 = (_QWORD **)i[1];
            v19 = (__int64)i;
            v20 = i;
            if ( v18 )
            {
              v21 = *v18;
              for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
                i = v21;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v20 )
                  break;
                v20 = i;
              }
            }
            sub_14030EBA0((__int64)CurrentThread, v19);
            if ( (unsigned int)sub_14030EB80(v19) || v24 == 1 )
              goto LABEL_15;
            if ( (v22 & 0x200000) == 0 )
              break;
            if ( v10 >= 4 )
            {
              *v16 = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
              v16[1] = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
                      - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
                      + 1) << 12;
              v29 = *(unsigned int *)(v19 + 52);
              LODWORD(v29) = v29 & 0x7FFFFFFF;
              if ( (v29 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) < 0x7FFFFFFFDLL )
                v30 = (v29 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) << 12;
              else
                v30 = 0LL;
              v16[3] = v30;
              *((_DWORD *)v16 + 4) = *(_DWORD *)(BugCheckParameter1 + 1088);
              *((_DWORD *)v16 + 5) = 0x2000;
              v31 = v24 - 3;
              if ( v31 )
              {
                if ( v31 == 1 )
                {
                  *((_DWORD *)v16 + 5) = 8396800;
                  v33 = 8396800;
                }
                else
                {
                  v32 = *(_DWORD *)(v19 + 48);
                  v33 = 0x2000;
                  if ( (v32 & 0x200000) != 0 && ((v32 & 0x800000) != 0 || (v32 & 0x180000u) >= 0x100000) )
                  {
                    *((_DWORD *)v16 + 5) = 536879104;
                    v33 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v19 + 48) & 0x6200000) == 0x4200000 )
              {
                v33 = 0x2000;
              }
              else
              {
                *((_DWORD *)v16 + 5) = 4202496;
                v33 = 4202496;
              }
              if ( (*(_DWORD *)(v19 + 48) & 0x600000) == 0x600000 )
                *((_DWORD *)v16 + 5) = v33 | 0x200000;
              v34 = *v16 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_59;
            }
LABEL_15:
            sub_140280EF8((__int64)CurrentThread, v19);
          }
          if ( v24 != 2 || (v22 & 0xF80) != 0x380 || (v10 & 1) == 0 )
          {
            if ( (v10 & 2) != 0 )
            {
              sub_14096CB14(v23, v16);
              v34 = *v16 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_59:
              *v16 = v34;
              goto LABEL_33;
            }
            goto LABEL_15;
          }
          v25 = **(_QWORD **)(v19 + 72);
          *v16 = sub_140281750(v25);
          v16[1] = (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12;
          v16[2] = *(_QWORD *)(*(_QWORD *)v25 + 32LL);
          v16[3] = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32))
                  - (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32))
                  + 1) << 12;
          *((_DWORD *)v16 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v19 + 64) & 0x8000000) != 0 )
          {
            v27 = v16[1] & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v26 = v16[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v25 + 15LL) & 0xF0));
            v16[1] = v26;
            v27 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v25 + 15LL) << 9)) & 0x1C00;
          }
          v16[1] = v27;
          if ( (v10 & 2) != 0 )
          {
            v35 = HIBYTE(*(_DWORD *)(v19 + 64)) & 1 | v16[1] & 0xFFFFFFFFFFFFFFFEuLL;
            v16[1] = v35;
            v16[1] = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v19 + 48) >> 6)) & 0x3E;
            v36 = *(unsigned int *)(v19 + 52);
            LODWORD(v36) = v36 & 0x7FFFFFFF;
            v16[4] = (v36 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) << 12;
          }
LABEL_33:
          sub_140280EF8((__int64)CurrentThread, v19);
          v16 += 6;
        }
      }
    }
  }
LABEL_38:
  sub_14030EA00((__int64)CurrentThread, BugCheckParameter1);
  if ( v37 )
    sub_1402D0930((__int64)v38, 0LL);
  return v11;
}
