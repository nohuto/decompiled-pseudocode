/*
 * XREFs of sub_1407F9820 @ 0x1407F9820
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407F9820(_DWORD *a1, unsigned int a2, int *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  SIZE_T v8; // rdx
  char *PoolWithTag; // rax
  char *v10; // rbx
  char *v11; // rdx
  char *v12; // r9
  unsigned int v13; // eax
  char *v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // r11d
  unsigned int v17; // r14d
  unsigned int v18; // r10d
  int v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  char *v22; // [rsp+28h] [rbp-60h]
  _DWORD *v23; // [rsp+30h] [rbp-58h]
  _QWORD v24[10]; // [rsp+38h] [rbp-50h] BYREF

  v21 = 0;
  v23 = a1 + 2;
  v20 = 8;
  *a1 = 0;
  v6 = qword_140C157C8;
  v7 = qword_140C157B0;
  v8 = 80 * qword_140C157C8 + 80 * qword_140C157B0;
  if ( v8 < 80 * qword_140C157C8 )
    return 3221225626LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6F666E49u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v24[0] = PoolWithTag;
  v24[1] = qword_140C157C8;
  v24[2] = &PoolWithTag[80 * qword_140C157C8];
  v24[3] = v7;
  KeGenericCallDpc((__int64)sub_140383780, (__int64)v24);
  v11 = v10;
  v22 = v10;
  v12 = &v10[80 * v7 + 80 * v6];
  while ( v11 < v12 )
  {
    if ( !*(_DWORD *)v11 )
      goto LABEL_14;
    ++*a1;
    v13 = v20 + 40;
    v20 = v13;
    if ( v13 < 0x28 )
    {
      v21 = -1073741675;
      break;
    }
    if ( a2 < v13 )
    {
      v21 = -1073741820;
LABEL_14:
      v14 = v22;
      goto LABEL_15;
    }
    *v23 = *(_DWORD *)v22;
    v14 = v22;
    v15 = *((_DWORD *)v22 + 10);
    v23[1] = v15;
    v16 = *((_DWORD *)v22 + 12);
    v23[2] = v16;
    *((_QWORD *)v23 + 2) = *((_QWORD *)v22 + 4);
    v17 = *((_DWORD *)v22 + 4);
    v23[6] = v17;
    v18 = *((_DWORD *)v22 + 6);
    v23[7] = v18;
    *((_QWORD *)v23 + 4) = *((_QWORD *)v22 + 1);
    if ( v15 < v16 )
      v23[1] = v16;
    if ( v17 < v18 )
      v23[6] = v18;
    v23 += 10;
LABEL_15:
    v11 = v14 + 80;
    v22 = v11;
  }
  ExFreePoolWithTag(v10, 0);
  if ( a3 )
    *a3 = v20;
  return v21;
}
