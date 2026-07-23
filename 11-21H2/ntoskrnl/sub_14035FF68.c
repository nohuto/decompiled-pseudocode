/*
 * XREFs of sub_14035FF68 @ 0x14035FF68
 * Callers:
 *     sub_1407DB510 @ 0x1407DB510 (sub_1407DB510.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14036044C @ 0x14036044C (sub_14036044C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407DAB94 @ 0x1407DAB94 (sub_1407DAB94.c)
 */

__int64 __fastcall sub_14035FF68(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  _QWORD v23[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h]
  PVOID v26; // [rsp+48h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-B8h]
  int v28; // [rsp+54h] [rbp-B4h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+70h] [rbp-98h]
  unsigned __int16 v33; // [rsp+74h] [rbp-94h]
  _WORD v34[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v35; // [rsp+830h] [rbp+728h]

  *(_OWORD *)&v23[1] = 0LL;
  if ( dword_140C4EB78 >= (unsigned int)dword_140C4EB7C )
    return 3221225659LL;
  v5 = *(unsigned int *)(a1 + 1088);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 1128);
  v35 = 0LL;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 + 1088) ^ v7;
    v24 = v5;
    LODWORD(v26) = v5;
    v9 = *(_DWORD *)(a1 + 1524);
    v25 = v8 & 0x1FFFFFFFFFFFFFFFLL;
    v10 = 14LL;
    HIDWORD(v26) = v9;
  }
  else
  {
    v31 = v5;
    v12 = &v23[1];
    v28 = v5;
    HIDWORD(v24) = 0;
    if ( a2 )
      v12 = a2;
    v32 = 0;
    v13 = (*(_QWORD *)(a1 + 1088) ^ v7) & 0x1FFFFFFFFFFFFFFFLL;
    v34[0] = 0;
    v14 = *(_DWORD *)(a1 + 1524);
    v29 = v13;
    v27 = v14;
    v15 = sub_1407DAB94(a1, v12);
    v17 = *v16;
    v18 = *((_QWORD *)v16 + 1);
    v19 = v17;
    v30 = v15;
    if ( (unsigned int)v17 > 0x7C0 )
      v19 = 1984;
    v33 = v19 >> 1;
    memmove(v34, (const void *)(v17 + v18 - v19), v19);
    v34[v33] = 0;
    v20 = sub_140287F30(a1);
    v21 = 0;
    if ( v20 != -1 )
      v21 = v20;
    LODWORD(v24) = v21;
    v22 = sub_140287F30(a1);
    v10 = 1LL;
    if ( v22 != -1 )
      v6 = v22;
    v25 = v6;
    v26 = qword_140D06940;
  }
  return sub_14036044C(
           v10,
           dword_140C5451C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v24);
}
