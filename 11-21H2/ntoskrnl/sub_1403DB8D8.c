/*
 * XREFs of sub_1403DB8D8 @ 0x1403DB8D8
 * Callers:
 *     sub_140568D20 @ 0x140568D20 (sub_140568D20.c)
 *     sub_14085FE00 @ 0x14085FE00 (sub_14085FE00.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056D9C0 @ 0x14056D9C0 (sub_14056D9C0.c)
 */

int __fastcall sub_1403DB8D8(_DWORD *a1, __int64 a2, __int64 a3)
{
  const char *v4; // rax
  int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned int v11; // edi
  const CHAR **v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+54h] [rbp-ACh]
  int v22; // [rsp+64h] [rbp-9Ch]
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  __int64 *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  const char *v40; // [rsp+E0h] [rbp-20h]
  _QWORD v41[4]; // [rsp+E8h] [rbp-18h] BYREF

  v23 = 0LL;
  LODWORD(v4) = dword_140D068FC;
  if ( dword_140D068FC )
  {
    if ( *a1 > 5u )
    {
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      LODWORD(v17) = dword_140D068FC;
      v25 = &v17;
      LODWORD(v18) = dword_140D06ACC;
      v28 = (int *)&v18;
      LODWORD(v19) = dword_140D06A24;
      v31 = &v19;
      v16 = dword_140D06C30;
      v34 = &v16;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      sub_14020A9C4((__int64)a1, (unsigned __int8 *)&dword_14002C75C, 0LL, 0LL, 6u, v24);
    }
    v5 = 0;
    v21 = 0LL;
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 24);
    v7 = *(unsigned __int16 *)(v6 + 138);
    v20 = *(unsigned __int16 *)(v6 + 138);
    v8 = qword_140D31700[v7];
    v22 = 0;
    *(_QWORD *)((char *)&v21 + 4) = v8;
    HIDWORD(v21) = *(_DWORD *)(v8 + 16);
    while ( !(unsigned int)sub_14056D9C0(&v20, &v23, a3) )
      ++v5;
    if ( v5 != 1 )
      __int2c();
    v9 = dword_140D05350;
    v40 = "KHeteroCpuPolicyAll";
    v10 = 0;
    v41[0] = "KHeteroCpuPolicyLarge";
    v41[1] = "KHeteroCpuPolicyLargeOrIdle";
    v41[2] = "KHeteroCpuPolicySmall";
    v4 = "KHeteroCpuPolicySmallOrIdle";
    for ( v41[3] = "KHeteroCpuPolicySmallOrIdle"; v10 < v9; ++v10 )
    {
      v11 = 1;
      v12 = (const CHAR **)v41;
      do
      {
        LODWORD(v4) = v10 + v11 * *(unsigned __int8 *)(v6 + 185);
        if ( *a1 > 5u )
        {
          sub_1403699D0((__int64)&v25, *v12);
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v39 = 0;
          v28 = &v16;
          v19 = *(_QWORD *)(v14 + 8 * v13);
          v31 = &v19;
          v18 = *(_QWORD *)(v14 + 8 * v13 + 8);
          v34 = (int *)&v18;
          v17 = *(_QWORD *)(v14 + 8 * v13 + 16);
          v16 = v10;
          v37 = &v17;
          v29 = 4;
          v32 = 8;
          v35 = 8;
          v38 = 8;
          LODWORD(v4) = sub_14020A9C4((__int64)a1, (unsigned __int8 *)&word_14002C6D6, 0LL, 0LL, 7u, v24);
        }
        ++v11;
        ++v12;
      }
      while ( v11 < 5 );
    }
  }
  return (int)v4;
}
