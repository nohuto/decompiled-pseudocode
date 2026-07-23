/*
 * XREFs of sub_14095E874 @ 0x14095E874
 * Callers:
 *     sub_14095E754 @ 0x14095E754 (sub_14095E754.c)
 * Callees:
 *     sub_14076651C @ 0x14076651C (sub_14076651C.c)
 *     sub_140950424 @ 0x140950424 (sub_140950424.c)
 *     sub_140950614 @ 0x140950614 (sub_140950614.c)
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 *     sub_14095E6D4 @ 0x14095E6D4 (sub_14095E6D4.c)
 *     sub_14095E7EC @ 0x14095E7EC (sub_14095E7EC.c)
 */

__int64 __fastcall sub_14095E874(int a1, __int64 a2, __int64 a3, unsigned int a4, PVOID **a5, _DWORD *a6)
{
  __int64 v6; // r15
  _DWORD *v8; // r14
  int v11; // eax
  int v12; // edi
  __int64 v13; // rax
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  _QWORD *v17[2]; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp-10h]
  bool v19; // [rsp+64h] [rbp-Ch]
  bool v20; // [rsp+65h] [rbp-Bh]
  char v21; // [rsp+66h] [rbp-Ah]
  char v22; // [rsp+67h] [rbp-9h]
  struct _DEVICE_OBJECT *v23; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a2 + 152);
  v8 = a6;
  v23 = 0LL;
  v11 = sub_14076651C(v6, a3, 0, 1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), (ULONG_PTR)a6, (__int64)(a6 + 2));
  v21 = 0;
  v22 = 0;
  v20 = (a1 & 0xFFFFFFFB) == 0;
  v12 = v11;
  if ( v6 )
    v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v13 = 0LL;
  v18 = 0;
  v16 = v13 + 40;
  v17[1] = v17;
  v17[0] = v17;
  v15 = 0LL;
  v19 = (NtGlobalFlag & 0x4000) != 0;
  if ( v12 < 0 )
  {
    if ( *v8 == 6 )
      sub_140950424(a5, a4, (__int64)&v15);
  }
  else
  {
    v12 = sub_14095E6D4(a5, a4, &v23);
    if ( v12 < 0 )
    {
      sub_14095E7EC(a4, a5, v23, (__int64)&v15, (__int64)v8);
      sub_14076651C(v6, a3, 1, 1, 0, 0, 0LL, 0LL);
      v12 = -2147483608;
    }
  }
  if ( v20 )
  {
    sub_140950744(v16, v17);
    sub_140950614(v17);
  }
  return (unsigned int)v12;
}
