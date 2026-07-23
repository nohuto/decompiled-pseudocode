/*
 * XREFs of sub_14038ACD0 @ 0x14038ACD0
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
 *     sub_14038B12C @ 0x14038B12C (sub_14038B12C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void *__fastcall sub_14038ACD0(__int64 a1)
{
  void *result; // rax
  void *v3; // rbx
  __int64 v4; // rsi
  const WCHAR *v5; // r9
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v7; // [rsp+58h] [rbp-B0h]
  __int64 v8; // [rsp+60h] [rbp-A8h]
  __int64 v9; // [rsp+68h] [rbp-A0h]
  _DWORD v10[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v11[16]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v12; // [rsp+88h] [rbp-80h]
  int v13; // [rsp+90h] [rbp-78h]
  int v14; // [rsp+94h] [rbp-74h]
  void *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A4h] [rbp-64h]
  _BYTE v18[96]; // [rsp+A8h] [rbp-60h] BYREF

  result = sub_14036B86C(*(_QWORD *)(a1 + 48), 0x67446F50u);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(*((_QWORD *)result + 39) + 40LL);
    if ( v4 && ((unsigned __int8)sub_14038B12C(a1 + 504, v18) || dword_140C0C670) && (unsigned int)dword_140C03A00 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
      {
        v10[1] = 0;
        v7 = v10;
        v9 = *(_QWORD *)(v4 + 136);
        v10[0] = *(unsigned __int16 *)(v4 + 128);
        v8 = 2LL;
        sub_1402A2094((__int64)v11, v5);
        v14 = 0;
        v17 = 0;
        v15 = &unk_140C22340;
        v12 = v18;
        v13 = 84;
        v16 = 21;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)word_14002F46A, 0LL, 0LL, 7u, &v6);
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v3, 0x67446F50u);
  }
  return result;
}
