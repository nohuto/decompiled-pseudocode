/*
 * XREFs of sub_180035ED4 @ 0x180035ED4
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 */

__int64 __fastcall sub_180035ED4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // r11
  _QWORD *v6; // r8
  char *v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r11
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char *v13; // rbx
  _QWORD v15[3]; // [rsp+20h] [rbp-30h] BYREF
  char *v16; // [rsp+38h] [rbp-18h] BYREF
  char **v17; // [rsp+40h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v3 = 0LL;
  v15[0] = v2;
  v4 = a2[1];
  a2[1] = 0LL;
  v5 = *(_QWORD **)(a1 + 168);
  v15[1] = v4;
  v15[2] = a1 + 168;
  v16 = 0LL;
  v17 = &v16;
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    do
    {
      if ( sub_180016240(v6 + 2, v15) )
      {
        --*(_QWORD *)(v9 + 8);
        v11 = *(_QWORD *)v7;
        *(_QWORD *)v7 = 0LL;
        v12 = (_QWORD *)*((_QWORD *)v7 + 1);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *v17 = v7;
        v17 = (char **)v7;
      }
      v6 = v8;
    }
    while ( v8 != v10 );
    v3 = v16;
  }
  if ( v3 )
  {
    do
    {
      v13 = *(char **)v3;
      sub_180010910((__int64)(v3 + 16));
      sub_180010884(v3, 0x20uLL);
      v3 = v13;
    }
    while ( v13 );
  }
  return sub_180010910((__int64)v15);
}
