/*
 * XREFs of ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088090
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086084 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 */

__int64 __fastcall RmpGameModeAcquireCpuSetAllocation(
        struct _RM_CPU_SET_MANAGER ***a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_CPU_SET_ALLOCATION *v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+158h] [rbp+58h]
  unsigned int v20; // [rsp+15Ch] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+160h] [rbp+60h] BYREF
  struct _RM_CPU_SET_ALLOCATION **v22; // [rsp+180h] [rbp+80h]
  int v23; // [rsp+188h] [rbp+88h]
  int v24; // [rsp+18Ch] [rbp+8Ch]
  int *v25; // [rsp+190h] [rbp+90h]
  int v26; // [rsp+198h] [rbp+98h]
  int v27; // [rsp+19Ch] [rbp+9Ch]
  int *v28; // [rsp+1A0h] [rbp+A0h]
  int v29; // [rsp+1A8h] [rbp+A8h]
  int v30; // [rsp+1ACh] [rbp+ACh]
  __int64 *v31; // [rsp+1B0h] [rbp+B0h]
  int v32; // [rsp+1B8h] [rbp+B8h]
  int v33; // [rsp+1BCh] [rbp+BCh]

  v2 = *((_DWORD *)a2 + 29);
  if ( v2 )
  {
    memset_0(&v17, 0, 0x10CuLL);
    v6 = *((_QWORD *)a2 + 15);
    v16 = v2;
    if ( v6 )
    {
      v19 |= 1u;
      v18 = v6;
    }
    v7 = *((_DWORD *)a2 + 35);
    v20 = v20 & 0xFFFFFFFD | ((v7 & 0x20 | 0x50) >> 4);
    if ( (v7 & 0x80u) != 0 )
      v17 |= 2u;
    RmpAcquireGlobalLock();
    v5 = RmpCpuSetManagerAcquireCpuSets(a1[5], (struct _RM_CPU_SET_REQUEST_INFORMATION *)&v16, (v7 >> 6) & 1, &v14);
    if ( v5 >= 0 )
    {
      v5 = 0;
      a1[15] = (struct _RM_CPU_SET_MANAGER **)v14;
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    v5 = 255;
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v10 = *((_QWORD *)a2 + 15);
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v15 = v10;
    v12 = *((_DWORD *)a2 + 29);
    v13 = *((_DWORD *)a2 + 27);
    v31 = &v15;
    v28 = &v12;
    v25 = &v13;
    v22 = &v14;
    v29 = v9;
    v26 = v9;
    v23 = v9;
    LODWORD(v14) = v5;
    v32 = 8;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1800C4F21, 0LL, 0LL, 6u, &v21);
  }
  return (unsigned int)v5;
}
