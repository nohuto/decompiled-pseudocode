/*
 * XREFs of sub_140262938 @ 0x140262938
 * Callers:
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 * Callees:
 *     sub_140238028 @ 0x140238028 (sub_140238028.c)
 *     sub_1402611C4 @ 0x1402611C4 (sub_1402611C4.c)
 *     sub_140262BBC @ 0x140262BBC (sub_140262BBC.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_140262938(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  PVOID PoolWithTag; // rax
  _RTL_BITMAP *v15; // rcx
  PVOID v16; // rdx
  __int64 v17; // rsi
  int v18; // eax
  NTSTATUS result; // eax
  _DWORD v20[2]; // [rsp+20h] [rbp-49h] BYREF
  int v21; // [rsp+28h] [rbp-41h] BYREF
  int v22; // [rsp+2Ch] [rbp-3Dh]
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-39h]
  __int64 (__fastcall *v24)(); // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v25)(); // [rsp+40h] [rbp-29h]
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-21h]
  _OWORD SystemInformation[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v28; // [rsp+80h] [rbp+17h]

  v28 = 0LL;
  v7 = *a3;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v7;
  v11 = a1 + 5736;
  *(_QWORD *)(a2 + 824) = v10;
  v12 = *(_QWORD *)(a1 + 4016);
  *(_QWORD *)(a2 + 1920) = v11;
  *(_QWORD *)(a2 + 896) = v12;
  *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 1016) = a1 + 4064;
  *(_QWORD *)(a2 + 1784) = *(_QWORD *)(a1 + 4208);
  *(_QWORD *)(a2 + 1912) = a1 + 5744;
  *(_WORD *)(a2 + 992) = *(_WORD *)(a1 + 4032);
  *(_QWORD *)(a2 + 936) = a2 + 24;
  *(_QWORD *)(a2 + 944) = a2 + 88;
  v13 = *(_DWORD *)(a2 + 776);
  *(_QWORD *)(a2 + 928) = v12;
  if ( (v13 & 0x40000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    v15 = (_RTL_BITMAP *)(a2 + 840);
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = PoolWithTag;
    v13 = *(_DWORD *)(a2 + 776);
  }
  else
  {
    v15 = (_RTL_BITMAP *)(a2 + 840);
  }
  if ( (v13 & 0x40000) != 0 )
    RtlSetAllBits(v15);
  v16 = ExAllocatePoolWithTag(
          NonPagedPoolNx,
          4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
          0x74536D73u);
  if ( !v16 )
    return -1073741670;
  *(_DWORD *)(a2 + 1072) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1080) = v16;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1072));
  LODWORD(v17) = 16;
  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 24LL) )
  {
    v20[0] = 16;
    v20[1] = 4;
    sub_140238028(a2 + 192);
    sub_1402611C4(a2 + 192, (__int64)v20);
  }
  v18 = *a3;
  v22 = 0;
  if ( (v18 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL);
    if ( result < 0 )
      return result;
    if ( *(_QWORD *)&SystemInformation[0] >> 21 >= 0x10uLL )
    {
      v17 = *(_QWORD *)&SystemInformation[0] >> 21;
      if ( *(_QWORD *)&SystemInformation[0] >> 21 > 0xFFFFFFFFuLL )
        LODWORD(v17) = -1;
    }
    v21 = v17;
    v22 = 4;
  }
  else
  {
    v21 = -1;
  }
  v23 = sub_1405FA590;
  v24 = sub_1405FA770;
  v25 = sub_1405FA660;
  v26 = sub_1405FA610;
  result = sub_140262BBC(a2 + 1376, &v21);
  if ( result >= 0 )
  {
    result = sub_140262BBC(a2 + 1512, &v21);
    if ( result >= 0 )
    {
      result = sub_140262BBC(a2 + 1648, &v21);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
