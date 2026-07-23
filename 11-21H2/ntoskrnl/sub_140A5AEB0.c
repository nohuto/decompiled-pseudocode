/*
 * XREFs of sub_140A5AEB0 @ 0x140A5AEB0
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

__int64 __fastcall sub_140A5AEB0(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  unsigned int v6; // r14d
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  void *v12; // rcx
  void *v13; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-4Ch]
  int v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+3Ch] [rbp-44h]
  _OWORD v20[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 1064LL, 1466720584LL);
  if ( !Pool2 )
  {
LABEL_13:
    v4 = -1073741670;
    goto LABEL_7;
  }
  *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(unsigned int *)(a1 + 44);
  memset(v20, 0, sizeof(v20));
  Src[0] = 1733060695;
  Src[1] = 1;
  v15 = 80LL;
  v17 = -2147483615;
  v16 = 1280201291;
  v18 = 2;
  v19 = 48;
  sub_14024F6E4(v20, 32LL, (__int64)"Error_Status_block_register");
  WheaLogInternalEvent(Src);
  if ( !*(_QWORD *)(Pool2 + 40) )
  {
LABEL_10:
    v13 = *(void **)(Pool2 + 24);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x576C6148u);
    ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
    Pool2 = 0LL;
    goto LABEL_13;
  }
  v6 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48);
  v7 = (_DWORD *)ExAllocatePool2(64LL, v6, 1466720584LL);
  *(_QWORD *)(Pool2 + 24) = v7;
  if ( !v7 )
  {
    v12 = *(void **)(Pool2 + 40);
    if ( v12 )
      MmUnmapVideoDisplay(v12, 8uLL);
    goto LABEL_10;
  }
  *v7 = 1095059543;
  v8 = 7LL;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v6;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
  *(_OWORD *)(*(_QWORD *)(Pool2 + 24) + 32LL) = xmmword_140025DF8;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
  *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
  v9 = Pool2 + 88;
  do
  {
    *(_OWORD *)v9 = *(_OWORD *)a1;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v9 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v9 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v9 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v9 + 96) = *(_OWORD *)(a1 + 96);
    v9 += 128LL;
    v10 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *(_OWORD *)(v9 - 16) = v10;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v9 = *(_OWORD *)a1;
  *(_OWORD *)(v9 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(v9 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(v9 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(v9 + 72) = *(_DWORD *)(a1 + 72);
LABEL_7:
  *a2 = Pool2;
  return v4;
}
