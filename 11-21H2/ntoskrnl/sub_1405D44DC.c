/*
 * XREFs of sub_1405D44DC @ 0x1405D44DC
 * Callers:
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void *__fastcall sub_1405D44DC(int a1, __int64 a2)
{
  void *result; // rax
  void *v5; // rbx
  __int64 v6; // r9
  const WCHAR *v7; // rdx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  _BYTE v17[16]; // [rsp+88h] [rbp+37h] BYREF

  result = sub_14036B86C(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL) && (unsigned int)dword_140C03A00 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
      {
        v13 = 0;
        v16 = 0;
        v11 = &v8;
        v9 = *(_DWORD *)(a2 + 128);
        v12 = 4;
        v15 = 4;
        v7 = *(const WCHAR **)(v6 + 136);
        v14 = &v9;
        v8 = a1;
        sub_1402A2094((__int64)v17, v7);
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_14002F57C, 0LL, 0LL, 5u, &v10);
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
  return result;
}
