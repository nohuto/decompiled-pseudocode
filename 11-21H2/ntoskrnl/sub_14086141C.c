/*
 * XREFs of sub_14086141C @ 0x14086141C
 * Callers:
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     sub_14098B4E0 @ 0x14098B4E0 (sub_14098B4E0.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B798 @ 0x14098B798 (sub_14098B798.c)
 *     sub_14098BADC @ 0x14098BADC (sub_14098BADC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14086141C(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // r8
  bool v7; // zf
  BOOL v8; // ecx
  BOOL v9; // eax
  int v10; // ecx
  char v11; // [rsp+30h] [rbp-59h] BYREF
  __int16 v12; // [rsp+34h] [rbp-55h] BYREF
  BOOL v13; // [rsp+38h] [rbp-51h] BYREF
  BOOL v14; // [rsp+3Ch] [rbp-4Dh] BYREF
  BOOL v15; // [rsp+40h] [rbp-49h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  BOOL *v18; // [rsp+60h] [rbp-29h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  char *v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  BOOL *v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  __int64 *v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  __int16 *v26; // [rsp+A0h] [rbp+17h]
  __int64 v27; // [rsp+A8h] [rbp+1Fh]
  __int64 v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+BCh] [rbp+33h]

  v15 = 0;
  v14 = 0;
  v12 = 0;
  v13 = 0;
  v11 = 0;
  v16 = 0LL;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, a2) )
    {
      v4 = sub_14036B86C(*(_QWORD *)(a1 + 48), 0x67446F50u);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(_QWORD *)(*((_QWORD *)v4 + 39) + 40LL);
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 128) == 0LL;
          v12 = *(_WORD *)(v6 + 128) >> 1;
          v8 = !v7;
          v16 = a1;
          v7 = *(_QWORD *)(a1 + 136) == 0LL;
          v14 = v8;
          v9 = !v7;
          *(_QWORD *)&UserData.Size = 4LL;
          v7 = *(_BYTE *)(a1 + 65) == 0;
          v13 = v9;
          v19 = 4LL;
          v15 = !v7;
          v11 = *(_BYTE *)(a1 + 66);
          UserData.Ptr = (ULONGLONG)&v13;
          v18 = &v14;
          v20 = &v11;
          v22 = &v15;
          v24 = &v16;
          v26 = &v12;
          v21 = 1LL;
          v23 = 4LL;
          v25 = 8LL;
          v27 = 2LL;
          v10 = *(unsigned __int16 *)(v6 + 128);
          v28 = *(_QWORD *)(v6 + 136);
          v29 = v10;
          v30 = 0;
          EtwWrite(RegHandle, a2, 0LL, 7u, &UserData);
        }
        ObfDereferenceObjectWithTag(v5, 0x67446F50u);
      }
    }
  }
}
