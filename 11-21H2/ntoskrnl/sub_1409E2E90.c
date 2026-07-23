/*
 * XREFs of sub_1409E2E90 @ 0x1409E2E90
 * Callers:
 *     sub_1409E3780 @ 0x1409E3780 (sub_1409E3780.c)
 *     sub_1409EA348 @ 0x1409EA348 (sub_1409EA348.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     sub_140882DDC @ 0x140882DDC (sub_140882DDC.c)
 *     sub_1409E31BC @ 0x1409E31BC (sub_1409E31BC.c)
 *     sub_1409E3490 @ 0x1409E3490 (sub_1409E3490.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409E2E90(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // esi
  unsigned int v4; // r12d
  int v5; // r13d
  unsigned int v6; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  SYSTEM_INFORMATION_CLASS *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int *v19; // rax
  unsigned int *v20; // r14
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  SYSTEM_INFORMATION_CLASS v24; // [rsp+28h] [rbp-59h]
  _DWORD *v25; // [rsp+30h] [rbp-51h]
  unsigned __int64 v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-41h] BYREF
  __int64 v28; // [rsp+48h] [rbp-39h]
  unsigned __int64 v29; // [rsp+50h] [rbp-31h]
  _QWORD SystemInformation[8]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v31[4]; // [rsp+98h] [rbp+17h] BYREF

  v29 = a2;
  v28 = a1;
  v31[0] = 81;
  v31[1] = 119;
  v31[2] = 120;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v3 = 0;
  v26 = 0LL;
  v27 = 0LL;
  sub_1409E3490(a1);
  v4 = 4356;
  v5 = -1;
  v6 = 64;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 4356LL, 1953985605LL);
  v8 = Pool2;
  if ( !Pool2 )
    return;
  v9 = (__int64)(Pool2 + 1);
  *Pool2 = 0;
  v25 = Pool2 + 1089;
  v10 = (SYSTEM_INFORMATION_CLASS *)v31;
  do
  {
    v24 = *v10;
    if ( ZwQuerySystemInformation(*v10, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *(_DWORD *)v9 = v5;
    v11 = SystemInformation[0] >> 12;
    *(_QWORD *)(v9 + 4) = SystemInformation[0] >> 12;
    *(_QWORD *)(v9 + 28) = v11;
    *(_QWORD *)(v9 + 12) = v11;
    *(_QWORD *)(v9 + 60) = 0LL;
    *(_QWORD *)(v9 + 20) = v11;
    *(_QWORD *)(v9 + 44) = 0LL;
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 52) = 0LL;
    if ( v24 == SystemPagedPoolInformationEx )
    {
      v12 = v29;
      if ( v29 > v11 )
      {
        *(_QWORD *)(v9 + 12) = v29;
        *(_QWORD *)(v9 + 20) = v12;
      }
    }
    ++*v8;
    v9 += 68LL;
    --v5;
    ++v3;
    ++v10;
  }
  while ( v3 < 3 );
  v13 = (__int64 *)qword_140D06940;
  v14 = v28;
  if ( !qword_140D06940 )
  {
LABEL_30:
    sub_1409E31BC(v14, v8);
    goto LABEL_31;
  }
  v15 = (__int64)v25;
  while ( 1 )
  {
    v16 = *((_DWORD *)v13 + 281);
    if ( (v16 & 0x4000000) != 0
      && ((v16 & 4) == 0 || !*((_DWORD *)v13 + 1) || *((_DWORD *)v13 + 380) || (__int64 *)v13[6] != v13 + 6) )
    {
      break;
    }
LABEL_27:
    if ( v13 == qword_140D06940 )
      v13 = 0LL;
    v13 = sub_1407B6B90(v13);
    if ( !v13 )
      goto LABEL_30;
  }
  if ( v9 != v15 )
  {
LABEL_20:
    *(_DWORD *)v9 = *((_DWORD *)v13 + 272);
    *(_QWORD *)(v9 + 4) = v13[224];
    *(_QWORD *)(v9 + 28) = v13[225];
    *(_QWORD *)(v9 + 12) = v13[201];
    *(_QWORD *)(v9 + 60) = v13[293];
    *(_QWORD *)(v9 + 20) = (unsigned __int64)v13[147] >> 12;
    v21 = *(_QWORD *)(v9 + 12);
    if ( v21 >= *(_QWORD *)(v9 + 20) )
      v21 = *(_QWORD *)(v9 + 20);
    v22 = *(_QWORD *)(v9 + 4);
    *(_QWORD *)(v9 + 12) = v21;
    v23 = *(_QWORD *)(v9 + 28);
    if ( v23 >= v22 )
      v23 = v22;
    *(_QWORD *)(v9 + 36) = 0LL;
    *(_QWORD *)(v9 + 44) = 0LL;
    *(_QWORD *)(v9 + 28) = v23;
    *(_QWORD *)(v9 + 52) = v13[233];
    if ( (int)sub_140882DDC(v13, &v26, &v27) >= 0 )
    {
      *(_QWORD *)(v9 + 36) = v26 >> 12;
      *(_QWORD *)(v9 + 44) = v27 >> 12;
    }
    v9 += 68LL;
    ++*v8;
    goto LABEL_27;
  }
  if ( v6 >= 0x100 )
  {
    sub_1409E31BC(v14, v8);
    *v8 = 0;
    v9 = (__int64)(v8 + 1);
    goto LABEL_20;
  }
  v17 = 68 * v6;
  v18 = v4;
  v6 *= 2;
  v4 += v17;
  v19 = (unsigned int *)ExAllocatePool2(64LL, v4, 1953985605LL);
  v20 = v19;
  if ( v19 )
  {
    memmove(v19, v8, v18);
    ExFreePoolWithTag(v8, 0);
    v8 = v20;
    v9 = (__int64)&v20[17 * *v20 + 1];
    v15 = (__int64)&v20[17 * v6 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(v13, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v8, 0);
}
