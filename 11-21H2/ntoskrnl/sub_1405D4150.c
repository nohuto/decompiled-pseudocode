/*
 * XREFs of sub_1405D4150 @ 0x1405D4150
 * Callers:
 *     sub_14038AE58 @ 0x14038AE58 (sub_14038AE58.c)
 *     sub_1405C9980 @ 0x1405C9980 (sub_1405C9980.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14038B364 @ 0x14038B364 (sub_14038B364.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1405D4150(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 *v3; // rbx
  void *v4; // rax
  void *v5; // rsi
  __int64 v6; // r14
  unsigned __int64 *Pool2; // rax
  const WCHAR *v8; // r15
  char v9; // al
  int v10; // r10d
  int v11; // [rsp+38h] [rbp-89h] BYREF
  char v12; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-69h] BYREF
  _DWORD *v16; // [rsp+78h] [rbp-49h]
  int v17; // [rsp+80h] [rbp-41h]
  int v18; // [rsp+84h] [rbp-3Dh]
  __int64 v19; // [rsp+88h] [rbp-39h]
  _DWORD v20[2]; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v21[16]; // [rsp+98h] [rbp-29h] BYREF
  int *v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B4h] [rbp-Dh]
  unsigned __int64 *v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C4h] [rbp+3h]
  __int64 *v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+D0h] [rbp+Fh]
  int v30; // [rsp+D4h] [rbp+13h]
  _DWORD v31[10]; // [rsp+D8h] [rbp+17h] BYREF

  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v3 = 0LL;
  v4 = sub_14036B86C(*(_QWORD *)(v2 + 48), 0x67446F50u);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 39) + 40LL);
    if ( v6 )
    {
      sub_14036AAF4(*(_QWORD *)(a1 + 24), 0LL, &v13);
      Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v13, 1346721364LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( (int)sub_14036AAF4(*(_QWORD *)(a1 + 24), Pool2, &v13) >= 0 )
        {
          v8 = (const WCHAR *)((char *)v3 + v3[2]);
          v9 = sub_14038B364(a1 + 40, &v11, &v12, (__int64)v31);
          if ( v11 )
          {
            if ( (v9 || dword_140C0C670)
              && (unsigned int)dword_140C03A00 > 5
              && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
            {
              v18 = 0;
              v20[1] = 0;
              v16 = v20;
              v19 = *(_QWORD *)(v6 + 136);
              v20[0] = *(unsigned __int16 *)(v6 + 128);
              v17 = 2;
              sub_1402A2094((__int64)v21, v8);
              v24 = 0;
              v27 = 0;
              v30 = 0;
              v22 = &v11;
              LODWORD(v13) = v31[0];
              v25 = &v13;
              v23 = 4;
              v28 = &v14;
              v26 = 4;
              v29 = 8;
              v11 = v10;
              v14 = 0x1000000LL;
              sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)word_14002F5C2, 0LL, 0LL, 8u, &v15);
            }
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x50455654u);
  }
}
