/*
 * XREFs of sub_1406A18C0 @ 0x1406A18C0
 * Callers:
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067F480 @ 0x14067F480 (sub_14067F480.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C5730 @ 0x1407C5730 (sub_1407C5730.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1406A18C0(_QWORD *a1, unsigned int a2, unsigned int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // rax
  ULONG_PTR v15; // rcx
  int v16; // esi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r13
  __int64 v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h] BYREF
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v31[3]; // [rsp+58h] [rbp-70h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  v9 = a2;
  sub_1407C97FC(&v29);
  sub_1407C97FC(&v28);
  sub_140AB4550(v31);
  sub_140AB4370();
  v10 = a1[1];
  if ( *(_WORD *)(v10 + 66) )
  {
    v11 = sub_1407F6698(a1, (unsigned int)v9, a3, a4, a5, a6);
    goto LABEL_18;
  }
  sub_140AB42D0(a1[1]);
  v11 = sub_140AB43C0(a1, 0LL);
  if ( v11 >= 0 )
  {
    if ( !a1[7] && !a1[8] )
      goto LABEL_5;
    v11 = sub_14067F480(a1, &v30);
    if ( v11 >= 0 )
    {
      v27 = v30;
      v11 = sub_140AB43C0(a1, v30);
      if ( v11 >= 0 )
      {
        if ( v27 )
        {
          v12 = 280LL;
          if ( v27 == *(_QWORD *)(v10 + 288) )
          {
LABEL_6:
            if ( (unsigned int)v9 >= *(_DWORD *)(v12 + v10) )
            {
              v11 = -2147483622;
            }
            else
            {
              v13 = *(_QWORD *)(v10 + 32);
              if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
                v14 = sub_1406BF400(v13, *(unsigned int *)(v12 + v10 + 4));
              else
                v14 = sub_1407C9820(v13);
              v15 = *(_QWORD *)(v10 + 32);
              v16 = *(_DWORD *)(v14 + 4 * v9);
              v17 = v14;
              if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
                v18 = sub_1406BF400(v15, *(unsigned int *)(v14 + 4 * v9));
              else
                v18 = sub_1407C9820(v15);
              v19 = v18;
              v11 = sub_1407C5730(v10, v16, v18, a3, a4, a5, a6);
              if ( v19 )
              {
                v20 = *(_QWORD *)(v10 + 32);
                if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                  sub_1406BF450(v20, &v28);
                else
                  sub_1407C97C0(v20, &v28);
              }
              if ( v17 )
              {
                v21 = *(_QWORD *)(v10 + 32);
                if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
                  sub_1406BF450(v21, &v29);
                else
                  sub_1407C97C0(v21, &v29);
              }
            }
            goto LABEL_17;
          }
        }
LABEL_5:
        v12 = 96LL;
        goto LABEL_6;
      }
    }
  }
LABEL_17:
  sub_140AB4300(v10);
LABEL_18:
  sub_140AB4260(v23, v22, v24, v25);
  sub_140AB4580(v31);
  return (unsigned int)v11;
}
