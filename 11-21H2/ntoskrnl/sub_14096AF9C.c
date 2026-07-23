/*
 * XREFs of sub_14096AF9C @ 0x14096AF9C
 * Callers:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_14024EA68 @ 0x14024EA68 (sub_14024EA68.c)
 *     sub_140419138 @ 0x140419138 (sub_140419138.c)
 *     sub_14058A0E0 @ 0x14058A0E0 (sub_14058A0E0.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall sub_14096AF9C(char *P, __int64 a2)
{
  __int64 *v2; // r15
  int v3; // eax
  unsigned __int64 v5; // r14
  _DWORD *v6; // rdi
  char *v7; // r12
  _DWORD *v8; // rbx
  __int64 v9; // r13
  int v10; // r8d
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rcx
  bool v14; // zf
  ULONG_PTR v15; // r14
  unsigned int v16; // edi
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  char *v20; // [rsp+30h] [rbp-58h]
  unsigned __int64 v21; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+98h] [rbp+10h]
  int v24; // [rsp+A0h] [rbp+18h]

  v2 = (__int64 *)(P + 48);
  v3 = *(_DWORD *)(a2 + 8);
  v5 = (unsigned __int64)*((unsigned int *)P + 10) >> 12;
  v6 = P;
  v21 = v5;
  v7 = &P[8 * v5 + 48];
  v20 = v7;
  if ( (v3 & 0x60) == 0 || *(_QWORD *)(a2 + 32) < 0x200uLL )
  {
    sub_14058A0E0((__int64)P);
    v3 = *(_DWORD *)(a2 + 8);
  }
  v8 = 0LL;
  v9 = -1LL;
  v24 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1LL;
  v23 = (v3 & 0x80000) != 0 ? 16 : 0x200000;
  v14 = v2 == (__int64 *)v7;
  if ( v2 <= (__int64 *)v7 )
  {
    v15 = -1LL;
    v16 = (v3 & 0x80000) != 0 ? 16 : 0x200000;
    do
    {
      if ( v14 || (v9 = *v2, *v2 != v13) )
      {
        if ( v11 )
        {
          if ( v10 < 0 || (v24 = sub_140969850(v15, v11, v16), v10 = v24, v24 < 0) )
          {
            v17 = 48 * v15 - 0x220000000000LL;
            v18 = v11;
            do
            {
              sub_14024EA68(v17, 1, -8LL, *(unsigned __int8 *)(v17 + 34) >> 6, 2);
              v17 += 48LL;
              --v18;
            }
            while ( v18 );
            v16 = v23;
            v7 = v20;
            sub_140213FA8(v15, v11);
            v10 = v24;
            v12 += v11;
          }
        }
        v15 = v9;
        v11 = 1LL;
      }
      else
      {
        ++v11;
      }
      ++v2;
      v13 = v9 + 1;
      v14 = v2 == (__int64 *)v7;
    }
    while ( v2 <= (__int64 *)v7 );
    v6 = P;
    v5 = v21;
  }
  _InterlockedExchangeAdd64(&qword_140C53530, -(__int64)v5);
  if ( !v12 )
  {
    v8 = v6;
    if ( !v5 )
      return v8;
LABEL_23:
    sub_140419138();
    return v6;
  }
  if ( v12 != v5 )
  {
    v6[10] += -4096 * v12;
    goto LABEL_23;
  }
  ExFreePoolWithTag(v6, 0);
  return v8;
}
