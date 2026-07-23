/*
 * XREFs of sub_140A61D50 @ 0x140A61D50
 * Callers:
 *     sub_140A5AC18 @ 0x140A5AC18 (sub_140A5AC18.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A61D50(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  char v6; // al
  _QWORD *v7; // rax
  unsigned int v8; // r14d
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm1
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  int v19; // [rsp+30h] [rbp-50h]
  int v20; // [rsp+34h] [rbp-4Ch]
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  _OWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 1064LL, 1466720584LL);
  if ( !Pool2 )
  {
LABEL_21:
    v4 = -1073741670;
    goto LABEL_22;
  }
  *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
  v24 = *(_QWORD *)(a1 + 56);
  v25 = *(unsigned int *)(a1 + 44);
  memset(v23, 0, sizeof(v23));
  Src[0] = 1733060695;
  Src[1] = 1;
  v18 = 80LL;
  v20 = -2147483615;
  v19 = 1280201291;
  v21 = 2;
  v22 = 48;
  sub_14024F6E4(v23, 32LL, (__int64)"Error_Status_block_register");
  WheaLogInternalEvent(Src);
  if ( !*(_QWORD *)(Pool2 + 40) )
    goto LABEL_14;
  v6 = *(_BYTE *)(a1 + 95);
  if ( v6 == 3 )
  {
    if ( *(_BYTE *)(a1 + 93) == 32 )
      *(_DWORD *)(Pool2 + 72) = 4;
  }
  else if ( v6 == 4 && *(_BYTE *)(a1 + 93) == 64 )
  {
    *(_DWORD *)(Pool2 + 72) = 8;
  }
  v7 = (_QWORD *)ExAllocatePool2(64LL, 8LL, 1466720584LL);
  *(_QWORD *)(Pool2 + 64) = v7;
  if ( !v7
    || (*v7 = *(_QWORD *)(a1 + 96),
        v8 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
        v9 = (_DWORD *)ExAllocatePool2(64LL, v8, 1466720584LL),
        (*(_QWORD *)(Pool2 + 24) = v9) == 0LL) )
  {
LABEL_14:
    v13 = *(void **)(Pool2 + 40);
    if ( v13 )
      MmUnmapVideoDisplay(v13, 8uLL);
    v14 = *(void **)(Pool2 + 64);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x576C6148u);
    v15 = *(void **)(Pool2 + 24);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x576C6148u);
    ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
    Pool2 = 0LL;
    goto LABEL_21;
  }
  *v9 = 1095059543;
  v10 = 7LL;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v8;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
  *(_OWORD *)(*(_QWORD *)(Pool2 + 24) + 32LL) = xmmword_140025DF8;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
  v11 = Pool2 + 88;
  do
  {
    *(_OWORD *)v11 = *(_OWORD *)a1;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v11 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v11 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v11 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v11 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v11 + 96) = *(_OWORD *)(a1 + 96);
    v11 += 128LL;
    v12 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *(_OWORD *)(v11 - 16) = v12;
    --v10;
  }
  while ( v10 );
  *(_OWORD *)v11 = *(_OWORD *)a1;
  *(_OWORD *)(v11 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(v11 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(v11 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(v11 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(v11 + 72) = *(_DWORD *)(a1 + 72);
LABEL_22:
  *a2 = Pool2;
  return v4;
}
