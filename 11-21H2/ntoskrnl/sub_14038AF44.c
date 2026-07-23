/*
 * XREFs of sub_14038AF44 @ 0x14038AF44
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
 *     sub_14038B12C @ 0x14038B12C (sub_14038B12C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14038AF44(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  void *v3; // rax
  void *v4; // rsi
  __int64 v5; // r14
  unsigned __int64 *Pool2; // rax
  const WCHAR *v7; // r15
  unsigned __int64 v8[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  __int64 v12; // [rsp+78h] [rbp-90h]
  _DWORD v13[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v15; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  int v17; // [rsp+A4h] [rbp-64h]
  void *v18; // [rsp+A8h] [rbp-60h]
  int v19; // [rsp+B0h] [rbp-58h]
  int v20; // [rsp+B4h] [rbp-54h]
  _BYTE v21[96]; // [rsp+B8h] [rbp-50h] BYREF

  v8[0] = 0LL;
  v2 = 0LL;
  v3 = sub_14036B86C(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 0x67446F50u);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)v3 + 39) + 40LL);
    if ( v5 )
    {
      sub_14036AAF4(*(_QWORD *)(a1 + 24), 0LL, v8);
      Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v8[0], 1346721364LL);
      v2 = Pool2;
      if ( Pool2 )
      {
        if ( (int)sub_14036AAF4(*(_QWORD *)(a1 + 24), Pool2, v8) >= 0 )
        {
          v7 = (const WCHAR *)((char *)v2 + v2[2]);
          if ( ((unsigned __int8)sub_14038B12C(a1 + 40, v21) || dword_140C0C670)
            && (unsigned int)dword_140C03A00 > 5
            && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
          {
            v13[1] = 0;
            v10 = v13;
            v12 = *(_QWORD *)(v5 + 136);
            v13[0] = *(unsigned __int16 *)(v5 + 128);
            v11 = 2LL;
            sub_1402A2094((__int64)v14, v7);
            v17 = 0;
            v20 = 0;
            v18 = &unk_140C22340;
            v15 = v21;
            v16 = 84;
            v19 = 21;
            sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002F6B1, 0LL, 0LL, 7u, &v9);
          }
        }
      }
    }
    ObfDereferenceObjectWithTag(v4, 0x67446F50u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x50455654u);
  }
}
