/*
 * XREFs of sub_1403198A0 @ 0x1403198A0
 * Callers:
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140319F70 @ 0x140319F70 (sub_140319F70.c)
 *     sub_14031A4F0 @ 0x14031A4F0 (sub_14031A4F0.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 */

__int64 __fastcall sub_1403198A0(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  NTSTATUS v9; // eax
  unsigned int v10; // eax
  NTSTATUS v11; // eax
  _BYTE *v12; // rdi
  NTSTATUS v13; // ebx
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD v19[22]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v19, 0, sizeof(v19));
  v9 = sub_140319F70((unsigned int)v19, (_DWORD)a1, a1[8] + a1[11], a1[10], a2 != 0, a3 != 0, 1);
  if ( v9 < 0 )
    RtlRaiseStatus(v9);
  v10 = sub_14031B810(v19);
  v11 = sub_14031A4F0(v19, v10, 3LL);
  v12 = (_BYTE *)v19[16];
  v13 = v11;
  if ( v19[16] )
  {
    v15 = *(unsigned int *)(v19[16] + 52LL);
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    v16 = v19[14] + (v15 | ((unsigned __int64)*(unsigned __int8 *)(v19[16] + 34LL) << 31));
    v17 = v19[15];
    *(_DWORD *)(v19[16] + 52LL) ^= (v16 ^ *(_DWORD *)(v19[16] + 52LL)) & 0x7FFFFFFF;
    v12[34] = v16 >> 31;
    v18 = v17 - v19[14];
    if ( v18 )
      sub_1406FEC50(v19[11], v18);
    sub_14032E700(v12);
  }
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) != 0 )
    return sub_140584F10(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
