/*
 * XREFs of sub_14029C5B0 @ 0x14029C5B0
 * Callers:
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_140256F38 @ 0x140256F38 (sub_140256F38.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_14029C520 @ 0x14029C520 (sub_14029C520.c)
 *     sub_14029C568 @ 0x14029C568 (sub_14029C568.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     sub_1403A108C @ 0x1403A108C (sub_1403A108C.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     sub_140550260 @ 0x140550260 (sub_140550260.c)
 *     sub_140550900 @ 0x140550900 (sub_140550900.c)
 *     sub_14055A55C @ 0x14055A55C (sub_14055A55C.c)
 *     sub_14055A5BC @ 0x14055A5BC (sub_14055A5BC.c)
 *     sub_14057B748 @ 0x14057B748 (sub_14057B748.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_1405A605C @ 0x1405A605C (sub_1405A605C.c)
 *     sub_1405E2170 @ 0x1405E2170 (sub_1405E2170.c)
 *     sub_1405FD594 @ 0x1405FD594 (sub_1405FD594.c)
 *     sub_140628F90 @ 0x140628F90 (sub_140628F90.c)
 *     sub_140B52090 @ 0x140B52090 (sub_140B52090.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 */

__int64 __fastcall sub_14029C5B0(_DWORD *a1, char a2, int a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  _BYTE *v9; // rbx
  NTSTATUS v10; // edi
  int v11; // edx
  unsigned __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = sub_140319F70((unsigned int)v16, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v7 = sub_14031B810(v16);
  result = sub_14031A4F0(v16, v7, 3LL);
  v9 = (_BYTE *)v16[16];
  v10 = result;
  if ( v16[16] )
  {
    v11 = *(_DWORD *)(v16[16] + 52LL);
    v12 = v16[14] + (v11 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v16[16] + 34LL) << 31));
    v13 = v11 ^ (v12 ^ v11) & 0x7FFFFFFF;
    v14 = v16[15];
    *(_DWORD *)(v16[16] + 52LL) = v13;
    v9[34] = v12 >> 31;
    v15 = v14 - v16[14];
    if ( v15 )
      sub_1406FEC50(v16[11], v15);
    result = sub_14032E700(v9);
  }
  if ( v10 < 0 )
    RtlRaiseStatus(v10);
  return result;
}
