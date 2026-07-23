/*
 * XREFs of sub_140923ED0 @ 0x140923ED0
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E480 @ 0x14065E480 (sub_14065E480.c)
 *     sub_140681834 @ 0x140681834 (sub_140681834.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140716F80 @ 0x140716F80 (sub_140716F80.c)
 *     sub_1407185B4 @ 0x1407185B4 (sub_1407185B4.c)
 *     sub_14071B250 @ 0x14071B250 (sub_14071B250.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14079BC7C @ 0x14079BC7C (sub_14079BC7C.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     sub_140921078 @ 0x140921078 (sub_140921078.c)
 */

__int64 __fastcall sub_140923ED0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  unsigned int *v7; // rsi
  int v8; // eax
  int v9; // ebx
  ULONG_PTR v10; // r12
  ULONG_PTR v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // rdx
  __int64 v16; // rax
  unsigned int *v17; // r13
  __int64 v18; // r12
  _WORD *v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h] BYREF
  _WORD *v28; // [rsp+50h] [rbp-19h] BYREF
  _LIST_ENTRY ListHead; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v30[5]; // [rsp+68h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int *v32; // [rsp+D8h] [rbp+6Fh] BYREF
  ULONG_PTR v33; // [rsp+E0h] [rbp+77h]
  ULONG_PTR v34; // [rsp+E8h] [rbp+7Fh]

  v26 = 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v27 = 0xFFFFFFFFLL;
  ListHead = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LODWORD(BugCheckParameter4) = -1;
  v30[0] = 0LL;
  v28 = 0LL;
  InitializeListHead(&ListHead);
  v7 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v32 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v8 = sub_14065E480(a1, &v32, v5, v6);
    v7 = v32;
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_39;
  }
  sub_14071B250(*(_QWORD *)(a1 + 48));
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 88);
  v34 = v10;
  sub_14071B250(v11);
  v12 = (*(_BYTE *)(v4 + 140) & 1) == 0;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 88);
  v33 = v14;
  v15 = *(unsigned int *)(*(_QWORD *)(v13 + 72) + 40LL);
  if ( v12 )
    v16 = sub_1407C9820(v4, v15, (unsigned int *)&v26);
  else
    v16 = sub_1406BF400(v4, v15, &v26);
  if ( v16 )
  {
    v9 = sub_14071F300(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1);
    if ( v9 < 0
      || (v9 = sub_14071F300(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1), v9 < 0)
      || (v9 = sub_14071F300(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1), v9 < 0) )
    {
LABEL_26:
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        sub_1406BF450(v4, &v26);
      else
        sub_1407C97C0(v4, (unsigned int *)&v26);
      goto LABEL_35;
    }
    v9 = sub_14079BC7C(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), v4, v3, (int *)&BugCheckParameter4);
    if ( v9 >= 0 )
    {
      v17 = &v7[v3];
      v18 = v3;
      if ( v17[3] != -1 )
        goto LABEL_19;
      LODWORD(v32) = *(_DWORD *)(v4 + 220);
      v9 = sub_14079C8A4(v4, 12, (unsigned int)v3, v17 + 3, (__int64)&v28, (__int64)&v27);
      if ( v9 >= 0 )
      {
        v19 = v28;
        *v28 = (unsigned int)v32 < 5 ? 26220 : 26732;
        v19[1] = 0;
        v7[v3 + 1] = 0;
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          sub_1406BF450(v4, &v27);
        else
          sub_1407C97C0(v4, (unsigned int *)&v27);
LABEL_19:
        v20 = BugCheckParameter4;
        v9 = sub_1407185B4(v4, v17 + 3, BugCheckParameter4);
        if ( v9 >= 0 )
        {
          ++v7[v18 + 1];
          v21 = *(_QWORD *)(a1 + 88);
          v22 = (unsigned __int64)*(unsigned int *)(v21 + 40) >> 31;
          if ( sub_140716F80(v4, &v7[v22 + 3], *(_DWORD *)(v21 + 40)) )
          {
            --v7[v22 + 1];
            v23 = sub_140921078(v4, v20);
            v10 = v34;
            v9 = v23;
            if ( v23 >= 0 )
            {
              v9 = sub_14091D070(v34, 1, (__int64)v30);
              if ( v9 >= 0 )
              {
                v14 = v33;
                v9 = sub_14091D070(v33, 1, (__int64)v30);
                if ( v9 >= 0 )
                {
                  BugCheckParameter4 = 0x800000001LL;
                  sub_1406E93C0(
                    v10,
                    (__int64)sub_1407F4D50,
                    (__int64)sub_14091CE30,
                    (__int64)&ListHead,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  BugCheckParameter4 = 0x800000001LL;
                  sub_1406E93C0(
                    v14,
                    (__int64)sub_1407F4D50,
                    (__int64)sub_14091CE30,
                    (__int64)&ListHead,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  v24 = *(_QWORD *)(a1 + 48);
                  *(_QWORD *)(a1 + 104) = v7;
                  v9 = 0;
                  v7 = 0LL;
                  v14 = 0LL;
                  v10 = 0LL;
                  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v24 + 40);
                  *(_DWORD *)(v24 + 40) = v20;
                  v20 = -1;
                }
                goto LABEL_24;
              }
            }
            goto LABEL_23;
          }
          v9 = -1073741670;
        }
        v10 = v34;
LABEL_23:
        v14 = v33;
        goto LABEL_24;
      }
      v10 = v34;
      v14 = v33;
    }
    v20 = BugCheckParameter4;
LABEL_24:
    if ( v20 != -1 )
      sub_1407164DC(v4, v20, 0);
    goto LABEL_26;
  }
  v9 = -1073741670;
LABEL_35:
  if ( v14 )
    sub_1406FEA54(v14, (__int64)&ListHead, 0);
  if ( v10 )
    sub_1406FEA54(v10, (__int64)&ListHead, 0);
LABEL_39:
  if ( v7 )
    sub_14065E380(v4, v7);
  sub_140681834((__int64)v30);
  sub_140346C60(&ListHead);
  return (unsigned int)v9;
}
