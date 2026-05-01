/*
 * XREFs of sub_180013F04 @ 0x180013F04
 * Callers:
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000BDC4 @ 0x18000BDC4 (sub_18000BDC4.c)
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 *     sub_180013914 @ 0x180013914 (sub_180013914.c)
 *     sub_180013980 @ 0x180013980 (sub_180013980.c)
 *     sub_180013B70 @ 0x180013B70 (sub_180013B70.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180013F04(__int64 a1, int a2, _QWORD *a3, int *a4)
{
  __int64 v4; // rdi
  _DWORD *v9; // r14
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  BOOL v13; // r15d
  BOOL v14; // esi
  int v15; // edx
  __int64 v16; // r8
  char v17; // cl
  char v18; // al
  char v19; // r9
  unsigned int v20; // edx
  void *v21; // rcx
  _BYTE JobInformation[16]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C8h]

  v4 = a1 + 64;
  sub_18001F1C4(a1 + 64);
  v9 = (_DWORD *)(a1 + 104);
  v10 = *(_DWORD *)(a1 + 104) & 7;
  *a4 = v10;
  v11 = *(_DWORD *)(a1 + 104);
  if ( (v11 & 8) != 0 )
  {
    v12 = -1073700861;
LABEL_20:
    *(_DWORD *)(v4 + 8) = 0;
    RtlReleaseSRWLockExclusive(v4);
    goto LABEL_40;
  }
  if ( v10 == a2 && (((*a3 ^ *(_QWORD *)(a1 + 112)) & 0x1C0LL) != 0 || ((*a3 ^ *(_QWORD *)(a1 + 112)) & 0x200LL) != 0) )
  {
    v12 = -1073741811;
    goto LABEL_20;
  }
  *v9 = v11 | 8;
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 < 2 )
  {
    v15 = 0;
    v14 = 0;
    v13 = 1;
  }
  else
  {
    v13 = sub_18000BDC4();
    v14 = v13 && sub_180013914(a1) == 0;
    v15 = sub_180013B70(a1);
  }
  v16 = *a3 >> 6;
  if ( (v16 & 7) == 1 )
  {
    if ( v14 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( ((*a3 >> 6) & 7) == 2 )
  {
LABEL_18:
    if ( !v15 )
    {
      v17 = 0;
      goto LABEL_22;
    }
LABEL_19:
    v12 = -1058275328;
    sub_18001F1C4(v4);
    *v9 &= ~8u;
    goto LABEL_20;
  }
  v17 = 0;
  if ( v15 )
  {
LABEL_23:
    v17 = 1;
    goto LABEL_24;
  }
LABEL_22:
  if ( v14 )
    goto LABEL_23;
LABEL_24:
  v18 = v17 | 2;
  if ( (v16 & 7) == 0 )
    v18 = v17;
  v19 = v18;
  if ( a2 >= 2 && v13 && !v14 )
    v19 = v18 | 4;
  if ( *a4 >= a2 )
  {
    if ( *a4 > a2 )
      sub_180013640(a1, *a4, a2);
  }
  else
  {
    sub_180013980(a1, *a4, a2, v19);
  }
  NtQueryInformationJobObject(*(HANDLE *)(a1 + 48), JobObjectExtendedLimitInformation, JobInformation, 0x90u, 0LL);
  if ( (((unsigned __int8)(v24 >> 13) ^ (unsigned __int8)(*a3 >> 10)) & 1) != 0 )
  {
    if ( (*a3 & 0x400LL) != 0 )
      v20 = v24 | 0x2000;
    else
      v20 = v24 & 0xFFFFDFFF;
    v21 = *(void **)(a1 + 48);
    v24 = v20;
    NtSetInformationJobObject(v21, JobObjectExtendedLimitInformation, JobInformation, 0x90u);
  }
  sub_18001F1C4(v4);
  *v9 = a2 & 7 | *v9 & 0xFFFFFFF0;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)a3;
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  v12 = 0;
LABEL_40:
  RtlWakeAddressAll(a1 + 104);
  return v12;
}
