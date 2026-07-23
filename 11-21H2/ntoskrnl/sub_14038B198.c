/*
 * XREFs of sub_14038B198 @ 0x14038B198
 * Callers:
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_1405D06F0 @ 0x1405D06F0 (sub_1405D06F0.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14038B364 @ 0x14038B364 (sub_14038B364.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void *__fastcall sub_14038B198(__int64 a1)
{
  __int64 v2; // rcx
  void *result; // rax
  void *v4; // rbx
  __int64 v5; // rsi
  char v6; // al
  const WCHAR *v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int8 v10[4]; // [rsp+38h] [rbp-79h] BYREF
  int v11; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v12; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-69h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp-49h]
  int v15; // [rsp+70h] [rbp-41h]
  int v16; // [rsp+74h] [rbp-3Dh]
  __int64 v17; // [rsp+78h] [rbp-39h]
  _DWORD v18[2]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v19[16]; // [rsp+88h] [rbp-29h] BYREF
  int *v20; // [rsp+98h] [rbp-19h]
  int v21; // [rsp+A0h] [rbp-11h]
  int v22; // [rsp+A4h] [rbp-Dh]
  unsigned __int8 *v23; // [rsp+A8h] [rbp-9h]
  int v24; // [rsp+B0h] [rbp-1h]
  int v25; // [rsp+B4h] [rbp+3h]
  _BYTE *v26; // [rsp+B8h] [rbp+7h]
  int v27; // [rsp+C0h] [rbp+Fh]
  int v28; // [rsp+C4h] [rbp+13h]
  __int64 *v29; // [rsp+C8h] [rbp+17h]
  int v30; // [rsp+D0h] [rbp+1Fh]
  int v31; // [rsp+D4h] [rbp+23h]
  _BYTE v32[40]; // [rsp+D8h] [rbp+27h] BYREF

  v11 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  v10[0] = 0;
  result = sub_14036B86C(v2, 0x67446F50u);
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v5 )
    {
      v6 = sub_14038B364(a1 + 504, &v11, v10, v32);
      if ( v11 )
      {
        if ( (v6 || dword_140C0C670) && (unsigned int)dword_140C03A00 > 5 )
        {
          if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
          {
            v16 = 0;
            v18[1] = 0;
            v14 = v18;
            v17 = *(_QWORD *)(v5 + 136);
            v18[0] = *(unsigned __int16 *)(v5 + 128);
            v15 = 2;
            sub_1402A2094((__int64)v19, v7);
            v22 = 0;
            v25 = 0;
            v28 = 0;
            v31 = 0;
            v20 = &v11;
            *(_WORD *)v10 = v10[0];
            v27 = 4 * v10[0];
            v23 = v10;
            v29 = &v12;
            v26 = v32;
            v11 = v8;
            v21 = 4;
            v24 = v9;
            v12 = 0x1000000LL;
            v30 = 8;
            sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002F63D, 0LL, 0LL, 9u, &v13);
          }
        }
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v4, 0x67446F50u);
  }
  return result;
}
