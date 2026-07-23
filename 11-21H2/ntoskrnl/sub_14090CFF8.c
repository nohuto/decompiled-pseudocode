/*
 * XREFs of sub_14090CFF8 @ 0x14090CFF8
 * Callers:
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14065A848 @ 0x14065A848 (sub_14065A848.c)
 *     sub_14065C990 @ 0x14065C990 (sub_14065C990.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_14071B284 @ 0x14071B284 (sub_14071B284.c)
 *     sub_1407435A8 @ 0x1407435A8 (sub_1407435A8.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091CEA0 @ 0x14091CEA0 (sub_14091CEA0.c)
 *     sub_14091EE14 @ 0x14091EE14 (sub_14091EE14.c)
 *     sub_14091FCD8 @ 0x14091FCD8 (sub_14091FCD8.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4464 @ 0x140AB4464 (sub_140AB4464.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 *     sub_140AB4A4C @ 0x140AB4A4C (sub_140AB4A4C.c)
 */

__int64 __fastcall sub_14090CFF8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rsi
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // r14
  unsigned int v16; // r13d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR v30; // [rsp+28h] [rbp-81h]
  unsigned int BugCheckParameter4; // [rsp+44h] [rbp-65h]
  ULONG_PTR BugCheckParameter4_4; // [rsp+48h] [rbp-61h] BYREF
  __int64 v33; // [rsp+50h] [rbp-59h] BYREF
  ULONG_PTR v34; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-49h]
  unsigned __int64 v36; // [rsp+68h] [rbp-41h]
  __int64 v37; // [rsp+70h] [rbp-39h] BYREF
  UUID v38; // [rsp+78h] [rbp-31h] BYREF
  UUID Uuid; // [rsp+88h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-11h] BYREF
  __int64 *v41; // [rsp+B8h] [rbp+Fh]
  __int64 v42; // [rsp+C0h] [rbp+17h]

  LODWORD(v34) = 0;
  v5 = 0LL;
  v37 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  v33 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a2 + 8);
  BugCheckParameter4_4 = 0xFFFFFFFFLL;
  Uuid = 0LL;
  v35 = v6;
  v38 = 0LL;
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *(_DWORD *)(v6 + 40);
  v36 = v7;
  BugCheckParameter4 = *(_DWORD *)(v7 + 40);
  v11 = sub_1407435A8(&Uuid);
  if ( v11 >= 0 )
  {
    v11 = sub_1407435A8(&v38);
    if ( v11 >= 0 )
    {
      if ( v9 != qword_140D3CA28 && v8 != qword_140D3CA28 )
      {
        if ( v9 == v8 )
          return (unsigned int)-1073741811;
        sub_140AB4370(v13, v12, v14);
        sub_1407C300C(v35, v36);
        if ( *(_WORD *)(v35 + 66) || *(_WORD *)(v36 + 66) )
        {
          sub_14091CEA0(19LL);
          v11 = -1073741822;
          goto LABEL_56;
        }
        if ( (unsigned __int8)sub_140AB45A0(a1, 0LL) || (unsigned __int8)sub_140AB45A0(a2, 0LL) )
        {
          v11 = -1073741444;
          goto LABEL_56;
        }
        if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104)
          || (*(_DWORD *)(v9 + 160) & 2) != 0 && *(_DWORD *)(v9 + 104) )
        {
          v11 = -1073741811;
          goto LABEL_56;
        }
        v5 = sub_14065C990((__int64)&Uuid, (__int64)&v38);
        if ( !v5 )
        {
          v11 = -1073741670;
          goto LABEL_56;
        }
        v11 = sub_14071B284((volatile signed __int32 *)v9, (volatile signed __int32 *)v8, 0);
        if ( v11 < 0 )
        {
LABEL_56:
          sub_1407C2FB4(v35, v36);
          sub_140AB4260(v26, v25, v27, v28);
          if ( !v5 )
            return (unsigned int)v11;
LABEL_57:
          sub_14065A7E0(v5);
          return (unsigned int)v11;
        }
        v15 = 6;
        sub_140AB4464(v8);
        v11 = sub_140AB4A4C(v8, 3);
        sub_140AB4484(v8);
        if ( v11 >= 0 )
        {
          sub_140AB4464(v9);
          v11 = sub_140AB4A4C(v9, 3);
          sub_140AB4484(v9);
          if ( v11 >= 0 )
          {
            sub_140AB41FC(v5);
            v15 = 7;
            v11 = sub_1406D3BF0(v8, v10, v5, 0xFFFFFFFF, 6, v30, 0, (unsigned int *)&v34);
            if ( v11 >= 0 )
            {
              v16 = v34;
              v17 = v34;
              *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) = v34;
              v11 = sub_14091EE14(v8, v10, v5, v17, 2, 0);
              if ( v11 >= 0 )
              {
                sub_140AB41E0(v8);
                v15 = 5;
                if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                  v18 = sub_1406BF400(v9, BugCheckParameter4, &BugCheckParameter4_4);
                else
                  v18 = sub_1407C9820(v9, BugCheckParameter4, (unsigned int *)&BugCheckParameter4_4);
                if ( v18 )
                {
                  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
                    v19 = sub_1406BF400(v5, v16, &v33);
                  else
                    v19 = sub_1407C9820(v5, v16, (unsigned int *)&v33);
                  v20 = v19;
                  if ( v19 )
                  {
                    v11 = sub_14091FCD8(v9, v16, v19);
                    if ( v11 >= 0 )
                    {
                      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                        sub_1406BF450(v9, &BugCheckParameter4_4);
                      else
                        sub_1407C97C0(v9, (unsigned int *)&BugCheckParameter4_4);
                      if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
                        sub_1406BF450(v5, &v33);
                      else
                        sub_1407C97C0(v5, (unsigned int *)&v33);
                      v11 = sub_14091EE14(v9, BugCheckParameter4, v5, v16, 2, 2);
                      if ( v11 >= 0 )
                      {
                        sub_140AB41E0(v9);
                        sub_140AB41E0(v5);
                        sub_1407C2FB4(v35, v36);
                        sub_140AB4260(v22, v21, v23, v24);
                        *(_QWORD *)(v5 + 1560) = v37;
                        v11 = sub_14065A848(v5);
                        *(_QWORD *)(v5 + 1560) = 0LL;
                        goto LABEL_57;
                      }
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v11 = -1073741670;
                  }
                  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                    sub_1406BF450(v9, &BugCheckParameter4_4);
                  else
                    sub_1407C97C0(v9, (unsigned int *)&BugCheckParameter4_4);
                  if ( v20 )
                  {
                    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
                      sub_1406BF450(v5, &v33);
                    else
                      sub_1407C97C0(v5, (unsigned int *)&v33);
                  }
                }
                else
                {
                  v11 = -1073741670;
                }
              }
            }
          }
        }
LABEL_28:
        sub_140AB41E0(v9);
        if ( (v15 & 2) != 0 )
          sub_140AB41E0(v8);
        if ( (v15 & 1) != 0 )
          sub_140AB41E0(v5);
        goto LABEL_56;
      }
      if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
      {
        v37 = 0x1000000LL;
        v41 = &v37;
        v42 = 8LL;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)word_140028CA2, 0LL, 0LL, 3u, &v40);
      }
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v11;
}
