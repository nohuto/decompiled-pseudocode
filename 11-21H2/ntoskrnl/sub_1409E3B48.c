/*
 * XREFs of sub_1409E3B48 @ 0x1409E3B48
 * Callers:
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062FC2C @ 0x14062FC2C (sub_14062FC2C.c)
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E3B48(unsigned __int16 a1, __int64 a2, char *a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // r12d
  unsigned int v7; // esi
  bool v8; // zf
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // r8
  int v12; // ebx
  _WORD *v13; // r14
  int v14; // eax
  _WORD *Pool2; // rbx
  unsigned __int16 v16; // r14
  char *v17; // rsi
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  unsigned int i; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v23; // [rsp+34h] [rbp-CCh]
  int v24; // [rsp+38h] [rbp-C8h]
  char *v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h]
  __int16 v27; // [rsp+4Ch] [rbp-B4h]
  __int16 v28; // [rsp+4Eh] [rbp-B2h]
  char *v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  char **v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  _BYTE P[272]; // [rsp+A0h] [rbp-60h] BYREF

  v29 = a3;
  v5 = *(_DWORD *)(a4 + 192);
  v6 = 0;
  v30 = a2;
  v7 = *(_DWORD *)(qword_140D05008 + 4248);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  v23 = a1;
  i = 0;
  v28 = 0;
  v24 = v5;
  if ( !v8 )
  {
    v10 = 1;
    do
    {
      v7 &= v7 - 1;
      v11 = 32LL * (unsigned int)v9 + qword_140D05008 + 4284;
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 16) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = (_WORD *)((char *)&unk_140C15EC0 + 20 * v9);
          if ( *v13 )
          {
            while ( 1 )
            {
              v14 = sub_14063A59C(v5, *(_DWORD *)&v13[2 * v12 + 2]);
              v5 = v24;
              if ( v14 )
                break;
              if ( ++v12 >= (unsigned int)(unsigned __int16)*v13 )
                goto LABEL_10;
            }
            v6 |= 1 << v9;
          }
        }
      }
LABEL_10:
      v8 = !_BitScanForward((unsigned int *)&v9, v7);
    }
    while ( !v8 );
    if ( v6 )
    {
      Pool2 = P;
      v16 = v23;
      v17 = v29;
      v26 = v30;
      v27 = *(unsigned __int8 *)(a4 + 40);
      v31 = &v25;
      v25 = v29;
      v32[0] = 14LL;
      if ( v23 == 4385 )
      {
        v18 = 272;
        for ( i = 272; ; v18 = i )
        {
          v19 = sub_1407103B0(v17, (__int64)Pool2, v18, &i);
          if ( v19 != -1073741820 )
            break;
          if ( Pool2 != (_WORD *)P )
            ExFreePoolWithTag(Pool2, 0);
          Pool2 = (_WORD *)ExAllocatePool2(256LL, i, 1953985605LL);
          if ( !Pool2 )
            goto LABEL_23;
        }
        if ( !v19 )
        {
          v20 = 0x2000;
          if ( *Pool2 < 0x2000u )
            v20 = (unsigned __int16)*Pool2;
          v10 = 2;
          v32[1] = *((_QWORD *)Pool2 + 1);
          v33 = v20;
          v34 = 0;
        }
      }
LABEL_23:
      v21 = 2LL * v10;
      v32[v21 - 1] = &qword_14000EF90;
      v32[v21] = 2LL;
      sub_14062FC2C((__int64)&v31, v10 + 1, v6, v16, 0x10501902u);
      if ( Pool2 )
      {
        if ( Pool2 != (_WORD *)P )
          ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
