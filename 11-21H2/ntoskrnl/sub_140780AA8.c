/*
 * XREFs of sub_140780AA8 @ 0x140780AA8
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     ExGetPreviousMode @ 0x1402DFD50 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406C22CC @ 0x1406C22CC (sub_1406C22CC.c)
 *     sub_140780CC8 @ 0x140780CC8 (sub_140780CC8.c)
 *     sub_140780D00 @ 0x140780D00 (sub_140780D00.c)
 *     sub_140782720 @ 0x140782720 (sub_140782720.c)
 */

__int64 __fastcall sub_140780AA8(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  __int64 v5; // rcx
  int v6; // ebx
  __int64 *v7; // r15
  KPROCESSOR_MODE v8; // si
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rcx
  char *v15; // rdx
  bool v16; // zf
  ULONG v17; // [rsp+28h] [rbp-79h]
  int v18; // [rsp+38h] [rbp-69h] BYREF
  int v19; // [rsp+3Ch] [rbp-65h] BYREF
  int *v20; // [rsp+40h] [rbp-61h] BYREF
  unsigned int *v21; // [rsp+48h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h]
  GUID ActivityId; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  _QWORD *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h] BYREF
  int *v29; // [rsp+A8h] [rbp+7h]
  _QWORD v30[3]; // [rsp+B0h] [rbp+Fh] BYREF

  v22 = a1;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  PreviousMode = ExGetPreviousMode();
  v6 = *(_DWORD *)(a1 + 8);
  v7 = &qword_140001AF8;
  v21 = 0LL;
  v8 = PreviousMode;
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_29;
  v9 = *(_DWORD *)(v3 + 8);
  if ( v9 > 8 )
    goto LABEL_4;
  v5 = 283LL;
  if ( !_bittest((const int *)&v5, v9) )
    goto LABEL_4;
  if ( (unsigned int)dword_140C038A0 > 5 )
  {
    v14 = (__int64 *)(v2 + 16);
    v19 = *(_DWORD *)(v3 + 8);
    v26 = 4LL;
    v25 = (__int64 *)&v19;
    if ( !*(_QWORD *)(v2 + 24) )
      v14 = &qword_140001AF8;
    v28 = 2LL;
    v27 = v30;
    v29 = (int *)v14[1];
    v30[0] = *(unsigned __int16 *)v14;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A7B3, &ActivityId, 0LL, 5u, v24);
  }
  if ( (*(_DWORD *)(v2 + 36) & 0x20000000) == 0 )
  {
    v12 = *(_DWORD *)(v3 + 8);
    if ( v12 != 3 && v12 != 8 )
    {
LABEL_4:
      if ( v6 >= 0 )
        goto LABEL_5;
      goto LABEL_29;
    }
  }
  LOBYTE(v5) = v8;
  v6 = sub_140782720(v5, *(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 24), &v20);
  if ( v6 < 0 )
    goto LABEL_29;
  LOBYTE(v5) = v8;
  v6 = sub_140780D00(v5, v20, *(unsigned int *)(v3 + 24), v3 + 16);
  if ( v6 < 0
    || (LOBYTE(v5) = v8, v6 = sub_140782720(v5, *(_QWORD *)(v3 + 32), 4LL, &v21), v6 < 0)
    || (LOBYTE(v5) = v8, v6 = sub_140780D00(v5, v21, 4LL, v3 + 32), v6 < 0)
    || (v18 = sub_1406C22CC(
                *(_DWORD *)(v3 + 8),
                v20,
                *(_DWORD *)(v3 + 24),
                v21,
                (const void **)(v2 + 16),
                *(_DWORD *)(v2 + 36)),
        v6 = v18,
        v18 < 0)
    && v18 != -2147483643
    && v18 != -1073741789 )
  {
LABEL_29:
    if ( v6 != -1073740541 && (unsigned int)dword_140C038A0 > 2 )
    {
      if ( *(_QWORD *)(v2 + 24) )
        v7 = (__int64 *)(v2 + 16);
      v18 = v6;
      v25 = &v28;
      v15 = byte_14002A7F1;
      v27 = (_QWORD *)v7[1];
      LODWORD(v28) = *(unsigned __int16 *)v7;
      v29 = &v18;
      v17 = 5;
LABEL_34:
      v26 = 2LL;
      HIDWORD(v28) = 0;
      v30[0] = 4LL;
      sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)v15, &ActivityId, 0LL, v17, v24);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  LOBYTE(v5) = v8;
  v13 = sub_140780D00(v5, *(_QWORD *)(v3 + 16), *(unsigned int *)(v3 + 24), &v20);
  if ( v13 < 0 || (LOBYTE(v5) = v8, v13 = sub_140780D00(v5, *(_QWORD *)(v3 + 32), 4LL, &v21), v13 < 0) )
  {
    v6 = v13;
    goto LABEL_29;
  }
  *(_DWORD *)(v22 + 24) = v18;
  v6 = -1073740541;
  if ( (unsigned int)dword_140C038A0 > 5 )
  {
    v16 = *(_QWORD *)(v2 + 24) == 0LL;
    v30[2] = 4LL;
    v15 = &byte_14002A86F;
    if ( !v16 )
      v7 = (__int64 *)(v2 + 16);
    v25 = &v28;
    v27 = (_QWORD *)v7[1];
    LODWORD(v28) = *(unsigned __int16 *)v7;
    v19 = *(_DWORD *)(v3 + 8);
    v29 = &v19;
    v30[1] = &v18;
    v17 = 6;
    goto LABEL_34;
  }
LABEL_5:
  LOBYTE(v5) = v8;
  sub_140780CC8(v5, &v20);
  LOBYTE(v10) = v8;
  sub_140780CC8(v10, &v21);
  return (unsigned int)v6;
}
