/*
 * XREFs of sub_14065D7C4 @ 0x14065D7C4
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1402564B4 @ 0x1402564B4 (sub_1402564B4.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14065DBC8 @ 0x14065DBC8 (sub_14065DBC8.c)
 *     sub_14065DDFC @ 0x14065DDFC (sub_14065DDFC.c)
 *     sub_14065DE48 @ 0x14065DE48 (sub_14065DE48.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140716D50 @ 0x140716D50 (sub_140716D50.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_14071F68C @ 0x14071F68C (sub_14071F68C.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_1407C46A0 @ 0x1407C46A0 (sub_1407C46A0.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14065D7C4(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rsi
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  int v8; // ebx
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  __int64 v11; // rax
  ULONG_PTR v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  _DWORD *v16; // rsi
  unsigned int v17; // r12d
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v23; // rax
  __int64 v24; // r9
  size_t v25; // [rsp+20h] [rbp-69h]
  __int64 v26; // [rsp+20h] [rbp-69h]
  unsigned int v27; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-45h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v30; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v31[2]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v32[2]; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-21h] BYREF
  PVOID v34; // [rsp+70h] [rbp-19h]
  __int64 v35; // [rsp+78h] [rbp-11h] BYREF
  PVOID P; // [rsp+80h] [rbp-9h] BYREF
  __int128 v37; // [rsp+88h] [rbp-1h] BYREF
  __int64 v38; // [rsp+98h] [rbp+Fh]
  __int64 v39; // [rsp+F0h] [rbp+67h] BYREF
  char v40; // [rsp+F8h] [rbp+6Fh]
  char v41; // [rsp+100h] [rbp+77h]
  unsigned int v42; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *(_DWORD **)(a1 + 104);
  v27 = 0;
  v33[1] = 0;
  v32[1] = 0;
  v31[1] = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v33[0] = -1;
  v32[0] = -1;
  v35 = 0xFFFFFFFFLL;
  v31[0] = -1;
  v7 = *(_QWORD *)(v6 + 32);
  LODWORD(BugCheckParameter4) = 0;
  v34 = 0LL;
  P = 0LL;
  v40 = 0;
  v42 = -1;
  v41 = 0;
  LOBYTE(v39) = 0;
  v38 = 0LL;
  v30 = v4;
  v37 = 0LL;
  if ( !v4 )
  {
    v8 = sub_14065DE48(a1, &v30);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = v30;
    sub_14065DDFC(v30, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  v9 = (unsigned int *)Allocate(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  *((_QWORD *)v9 + 1) = 0LL;
  *v9 = -1;
  v9[1] = -1;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v11 = sub_1406BF400(v7, *(unsigned int *)(a1 + 92));
  else
    v11 = sub_1407C9820(v7);
  v12 = v11;
  if ( !v11 )
  {
    v8 = -1073741670;
LABEL_55:
    sub_140346D64(v10, 0x77554D43u);
    return (unsigned int)v8;
  }
  v13 = *(_DWORD *)(v11 + 4);
  v14 = v13 + 0x80000000;
  if ( v13 < 0x80000000 )
    v14 = v13;
  LODWORD(v30) = v14;
  v28 = v14;
  if ( v14 )
  {
    if ( v13 >= 0x80000000 )
    {
      v34 = (PVOID)(v12 + 8);
    }
    else
    {
      if ( !(unsigned __int8)sub_1407C46A0(v7, (__int64)&P, (__int64)&v39, (__int64)&v35) )
      {
        v8 = -1073741670;
        goto LABEL_36;
      }
      v14 = v28;
      v34 = P;
      v41 = v39;
      v40 = 1;
      LODWORD(v30) = v28;
    }
  }
  v8 = sub_14071F300(v7, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
  if ( v8 >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      v15 = sub_1406BF400(v7, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL));
    else
      v15 = sub_1407C9820(v7);
    v39 = v15;
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    P = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    if ( !P )
    {
      v8 = -1073741670;
LABEL_28:
      if ( v39 )
      {
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          sub_1406BF450(v7, v32);
        else
          sub_1407C97C0(v7, v32);
      }
      goto LABEL_31;
    }
    sub_14065DBC8(v12);
    v16 = v4 + 1;
    if ( !(unsigned __int8)sub_14071F68C(
                             v7,
                             (_DWORD)v16,
                             (unsigned int)&v37,
                             0,
                             (__int64)&v27,
                             (__int64)&BugCheckParameter4) )
    {
      v8 = -1073741670;
LABEL_27:
      ExFreePoolWithTag(P, 0);
      goto LABEL_28;
    }
    LODWORD(v25) = v14;
    v8 = sub_14079B758(v7, v25, *(_DWORD *)(a1 + 72), (__int64)&v42);
    if ( v8 >= 0 )
    {
      v17 = BugCheckParameter4;
      if ( (_DWORD)BugCheckParameter4 == -1 )
      {
        v26 = (__int64)v16;
        v18 = v42;
        v19 = sub_14079B920(v7, v26, 1);
        v20 = v38;
        goto LABEL_22;
      }
      v8 = sub_14071F300(v7, (unsigned int)BugCheckParameter4);
      if ( v8 >= 0 )
      {
        if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
          v23 = sub_1406BF400(v7, v17);
        else
          v23 = sub_1407C9820(v7);
        v20 = v23;
        if ( v23 )
        {
          v8 = sub_140716D50(v7);
          if ( v8 < 0 )
          {
            v18 = v42;
LABEL_47:
            if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
              sub_1406BF450(v7, v31);
            else
              sub_1407C97C0(v7, v31);
LABEL_25:
            if ( v18 != -1 )
              sub_14079B22C(v7, v18);
            goto LABEL_27;
          }
          v24 = (__int64)v16;
          v18 = v42;
          v19 = sub_1402564B4(v7, v42, v27, v24);
LABEL_22:
          v8 = v19;
          if ( v19 >= 0 )
          {
            v8 = 0;
            *((_WORD *)v10 + 4) = v37;
            v21 = (unsigned int)v30;
            *v10 = v18;
            v10[3] = v21;
            v10[1] = v17;
            *(_QWORD *)(a1 + 112) = v10;
            v10 = 0LL;
            v18 = -1;
          }
          if ( !v20 )
            goto LABEL_25;
          goto LABEL_47;
        }
        v8 = -1073741670;
      }
    }
    v18 = v42;
    goto LABEL_25;
  }
LABEL_31:
  if ( v40 && v34 )
  {
    if ( v41 )
    {
      ExFreePoolWithTag(v34, 0);
    }
    else if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    {
      sub_1406BF450(v7, &v35);
    }
    else
    {
      sub_1407C97C0(v7, &v35);
    }
  }
LABEL_36:
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, v33);
  else
    sub_1407C97C0(v7, v33);
  if ( v10 )
    goto LABEL_55;
  return (unsigned int)v8;
}
