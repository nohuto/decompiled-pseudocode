/*
 * XREFs of DoScreenSave @ 0x1C0034BE8
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0033DE0 @ 0x1C0033DE0 (sub_1C0033DE0.c)
 *     sub_1C0034684 @ 0x1C0034684 (sub_1C0034684.c)
 *     sub_1C0035C10 @ 0x1C0035C10 (sub_1C0035C10.c)
 *     sub_1C005AFD4 @ 0x1C005AFD4 (sub_1C005AFD4.c)
 *     sub_1C005C584 @ 0x1C005C584 (sub_1C005C584.c)
 *     sub_1C0066128 @ 0x1C0066128 (sub_1C0066128.c)
 *     sub_1C0066298 @ 0x1C0066298 (sub_1C0066298.c)
 *     sub_1C006672C @ 0x1C006672C (sub_1C006672C.c)
 *     sub_1C0066784 @ 0x1C0066784 (sub_1C0066784.c)
 *     sub_1C0066B08 @ 0x1C0066B08 (sub_1C0066B08.c)
 *     sub_1C00A9538 @ 0x1C00A9538 (sub_1C00A9538.c)
 *     sub_1C00A96CC @ 0x1C00A96CC (sub_1C00A96CC.c)
 */

__int64 __fastcall DoScreenSave(__int64 a1)
{
  __int64 v1; // r13
  int v2; // r14d
  unsigned int v4; // r14d
  int v5; // r15d
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // r8
  unsigned int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // esi
  _WORD *v21; // rdx
  _WORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v27; // [rsp+40h] [rbp-C8h]
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  char v38[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  char v41[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]

  v1 = 0LL;
  v2 = *(_DWORD *)(a1 + 484) + 7;
  v30 = 0;
  v4 = (v2 & 0xFFFFFFF8) + 1104;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 442) == 1 )
  {
    v5 = (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v4 += v5;
  }
  v7 = sub_1C0066784(a1);
  if ( v7 >= 0 )
  {
    v9 = sub_1C0066B08(a1, &v30);
    v10 = *(_DWORD *)(a1 + 908);
    if ( v9 > v10 )
    {
      if ( (byte_1C0093A06 & 0x40) != 0 )
        sub_1C0033DE0(
          v6,
          &stru_1C0088F58,
          v8,
          *(_DWORD *)(a1 + 56),
          *(const wchar_t **)(a1 + 4664),
          *(const wchar_t **)(a1 + 4656),
          *(_BYTE *)(a1 + 4307),
          v27,
          v30,
          v28,
          v10,
          v9,
          0,
          0);
      v9 = *(_DWORD *)(a1 + 908);
    }
    v11 = 0;
    if ( !v9 )
      goto LABEL_28;
    do
    {
      v7 = sub_1C0066298(
             *(_DWORD *)(a1 + 896) + 320 * v11,
             *(_DWORD *)(a1 + 548),
             v4,
             *(_QWORD *)(a1 + 8),
             *(_BYTE *)(a1 + 4306),
             v5);
      if ( v7 < 0 )
        break;
      v6 = *(_QWORD *)(a1 + 896);
      ++v11;
      v12 = *(_DWORD *)(v6 + v1 + 136);
      *(_DWORD *)(v6 + v1 + 32) = v12;
      *(_DWORD *)(v6 + v1 + 28) = v12;
      v1 += 320LL;
    }
    while ( v11 < v9 );
    if ( v11 )
    {
      if ( v11 != v9 && (byte_1C0093A06 & 0x40) != 0 )
        sub_1C0033DE0(
          v6,
          &stru_1C0088A40,
          v8,
          *(_DWORD *)(a1 + 56),
          *(const wchar_t **)(a1 + 4664),
          *(const wchar_t **)(a1 + 4656),
          *(_BYTE *)(a1 + 4307),
          v27,
          v30,
          v28,
          *(_DWORD *)(a1 + 908),
          v9,
          v11,
          v7);
      v13 = v30 - 1;
      *(_DWORD *)(a1 + 904) = v11;
      v14 = (v11 + v13 - (v11 + v13) % v11) % v11;
      *(_DWORD *)(a1 + 912) = (v11 + v13 - (v11 + v13) % v11) / v11;
      if ( v11 > 1 )
      {
        sub_1C0035C10(a1, 0LL);
        if ( *(_QWORD *)(a1 + 4896) )
          sub_1C006672C(a1);
      }
      if ( !*(_BYTE *)(a1 + 4306)
        || (unsigned __int8)sub_1C00A96CC(a1 + 760, v14)
        || (v7 = sub_1C00A9538(v15, *(_QWORD *)(a1 + 32), a1 + 344), v7 >= 0) )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *(_DWORD *)(a1 + 392);
        if ( v17 > *(_DWORD *)(v16 + 152) )
          *(_DWORD *)(v16 + 152) = v17;
        v7 = sub_1C005C584((PUNICODE_STRING)(a1 + 40));
        if ( v7 >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 568);
          *(_DWORD *)(a1 + 5692) = -1;
          if ( *(_DWORD *)(v19 + 4) == 5 && (int)sub_1C005AFD4(*(_QWORD *)(a1 + 32), a1 + 5692) < 0 )
            *(_DWORD *)(a1 + 5692) = -2;
          sub_1C0034684(a1, v18);
          *(_BYTE *)(a1 + 316) = 0;
          *(_DWORD *)(a1 + 304) = 1;
          *(_QWORD *)(a1 + 308) = 1LL;
          goto LABEL_33;
        }
      }
    }
    else
    {
LABEL_28:
      if ( v7 >= 0 )
        goto LABEL_33;
    }
  }
  if ( *(_DWORD *)(a1 + 904) )
  {
    v20 = 0;
    do
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 4306);
      sub_1C0066128(*(_QWORD *)(a1 + 896) + 320LL * v20++, *(_QWORD *)(a1 + 8), v8);
    }
    while ( v20 < *(_DWORD *)(a1 + 904) );
    *(_DWORD *)(a1 + 904) = 0;
  }
LABEL_33:
  if ( (unsigned int)dword_1C00930C8 > 5 && sub_1C001ABEC(v6, 0x400000000000LL) )
  {
    v21 = *(_WORD **)(a1 + 4656);
    v34 = a1 + 5000;
    v30 = *(_DWORD *)(a1 + 56);
    v36 = &v30;
    v35 = 16LL;
    v37 = 4LL;
    sub_1C001AA4C((__int64)v38, v21);
    v22 = *(_WORD **)(a1 + 4664);
    LOBYTE(v29) = *(_BYTE *)(a1 + 4212);
    v39 = &v29;
    v40 = 1LL;
    sub_1C001AA4C((__int64)v41, v22);
    v23 = *(unsigned int *)(a1 + 548);
    v42 = &v31;
    v31 = v23;
    v44 = &v32;
    v43 = 4LL;
    v32 = v7;
    v45 = 4LL;
    sub_1C001D420(v23, (unsigned __int8 *)dword_1C0084A40, v24, v25, 9u, &v33);
  }
  return (unsigned int)v7;
}
