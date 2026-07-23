/*
 * XREFs of sub_14053FB50 @ 0x14053FB50
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067C50C @ 0x14067C50C (sub_14067C50C.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071B4A0 @ 0x14071B4A0 (sub_14071B4A0.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140722534 @ 0x140722534 (sub_140722534.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14087D6D0 @ 0x14087D6D0 (sub_14087D6D0.c)
 *     sub_1408813F4 @ 0x1408813F4 (sub_1408813F4.c)
 *     sub_140881496 @ 0x140881496 (sub_140881496.c)
 *     sub_1409147A4 @ 0x1409147A4 (sub_1409147A4.c)
 *     sub_14091523C @ 0x14091523C (sub_14091523C.c)
 *     sub_1409188CC @ 0x1409188CC (sub_1409188CC.c)
 *     sub_14091C9C8 @ 0x14091C9C8 (sub_14091C9C8.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 __fastcall sub_14053FB50(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 i; // rdx
  int v7; // ebx
  unsigned int v8; // r12d
  int v9; // eax
  char *v10; // r14
  int v11; // ebx
  unsigned int v12; // ecx
  __int64 v13; // rbx
  unsigned int v14; // r15d
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int16 v19; // cx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int BugCheckParameter4; // [rsp+80h] [rbp+48h] BYREF
  int BugCheckParameter4_4; // [rsp+84h] [rbp+4Ch]
  __int64 v26; // [rsp+88h] [rbp+50h] BYREF
  __int64 v27; // [rsp+90h] [rbp+58h] BYREF
  void *v28; // [rsp+98h] [rbp+60h] BYREF

  BugCheckParameter4_4 = HIDWORD(a1);
  v27 = 0LL;
  v26 = 0LL;
  BugCheckParameter4 = -1;
  v28 = 0LL;
  sub_1407C97FC(&v27);
  sub_1407C97FC(&v26);
  v3 = sub_140721CE0(a2, *(unsigned __int16 *)(a2 + 2));
  v4 = *(_QWORD *)(v3 + 72);
  v5 = 0LL;
  for ( i = *(unsigned __int16 *)(v3 + 66); (i & 0x8000u) == 0LL; LOWORD(i) = i - 1 )
  {
    v5 = sub_140721CE0(a2, i);
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
  }
  v7 = *(_DWORD *)(v5 + 40) >> 31;
  if ( *(int *)(v4 + 40) < 0 )
    v7 = 1;
  sub_14067C50C(*(_QWORD *)(v3 + 32));
  v8 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 80) + 24LL) + 76;
  v9 = sub_14079C8A4(*(_QWORD *)(v3 + 32), v8, v7, (unsigned int)&BugCheckParameter4, (__int64)&v28, (__int64)&v27);
  v10 = (char *)v28;
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = BugCheckParameter4;
  }
  else
  {
    memset(v28, 0, v8);
    *(_DWORD *)v10 = 27502;
    v10[12] = sub_1409147A4();
    v10[13] = v10[13] & 0xFC | 1;
    if ( (**(_DWORD **)(v3 + 80) & 1) != 0 )
      *((_WORD *)v10 + 1) = 32;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v4 + 40);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = -1;
    *((_WORD *)v10 + 37) = 0;
    *((_DWORD *)v10 + 13) &= 0xFFF0FFFF;
    v10[55] = 0;
    *((_DWORD *)v10 + 13) &= 0xFF0FFFFF;
    v12 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 80) + 24LL);
    *((_WORD *)v10 + 36) = v12;
    memmove(v10 + 76, (const void *)(*(_QWORD *)(v3 + 80) + 26LL), v12);
    v13 = sub_1409188CC(a2, 0LL);
    sub_14091C9C8(*(_QWORD *)(v3 + 32));
    v14 = BugCheckParameter4;
    v11 = sub_1408813F4(*(_QWORD *)(v3 + 32), BugCheckParameter4, v10, v13);
    sub_140AB4484(*(_QWORD *)(v3 + 32));
    if ( v11 >= 0 )
    {
      v11 = sub_14087D6D0(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0LL);
      if ( v11 >= 0 )
      {
        v11 = sub_140881496(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), v14);
        if ( v11 >= 0 )
        {
          sub_14091523C(v3);
          *(_DWORD *)(v3 + 40) = v14;
          v14 = -1;
          sub_14071B4A0(v15);
          v16 = *(_QWORD *)(v4 + 32);
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            v17 = sub_1406BF400(v16, *(unsigned int *)(v4 + 40));
          else
            v17 = sub_1407C9820(v16);
          v18 = v17;
          sub_140722534(*(_QWORD *)(v4 + 32), v17, *(unsigned int *)(v4 + 40));
          v19 = 2 * *((_WORD *)v10 + 36);
          if ( (v10[2] & 0x20) == 0 )
            v19 = *((_WORD *)v10 + 36);
          if ( (unsigned __int16)*(_DWORD *)(v18 + 52) < (unsigned int)v19 )
            *(_WORD *)(v18 + 52) = v19;
          sub_14091523C(v4);
          v20 = *(_QWORD *)(v4 + 32);
          *(_WORD *)(v4 + 176) = *(_WORD *)(v18 + 52);
          if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
            sub_1406BF450(v20, &v26);
          else
            sub_1407C97C0(v20, &v26);
          LOBYTE(v21) = 1;
          sub_14071B5A0(v4, v21);
          v11 = 0;
        }
      }
    }
  }
  if ( v10 )
  {
    v22 = *(_QWORD *)(v3 + 32);
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      sub_1406BF450(v22, &v27);
    else
      sub_1407C97C0(v22, &v27);
  }
  if ( v14 != -1 )
    sub_1407164DC(*(_QWORD *)(v3 + 32), v14);
  sub_14067C528(*(_QWORD *)(v3 + 32));
  return (unsigned int)v11;
}
