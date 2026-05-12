/*
 * XREFs of StorBuildNVMeSerialNumber @ 0x1C00742C0
 * Callers:
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C00747F0 (StorProcessNVMeEnumeratorFillInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidHexFromUshort @ 0x1C006071C (RaidHexFromUshort.c)
 *     StorSerialNumberFromNvmeId @ 0x1C00743D0 (StorSerialNumberFromNvmeId.c)
 */

__int64 __fastcall StorBuildNVMeSerialNumber(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r11
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // r10
  unsigned int v15; // r11d
  __int64 v16; // r10

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 5912LL);
  v7 = *(_QWORD *)(v3 + 3464);
  v8 = (_QWORD *)(v7 + 104);
  v9 = (_QWORD *)(v7 + 120);
  v10 = *(_QWORD *)(v7 + 104);
  if ( !v10 )
    v10 = v8[1];
  if ( v10 )
  {
    v11 = 40;
    v12 = 16LL;
LABEL_7:
    v13 = StorSerialNumberFromNvmeId(v8, v12, a3, v11, 0LL);
    goto LABEL_9;
  }
  if ( *v9 )
  {
    v11 = 20;
    v8 = v9;
    v12 = 8LL;
    goto LABEL_7;
  }
  v11 = 30;
  *(_OWORD *)a3 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v6 + 20);
  *(_BYTE *)(a3 + 20) = 95;
  RaidHexFromUshort((unsigned __int8)*(_WORD *)(a1 + 6), (char *)(a3 + 21), 4u);
  RaidHexFromUshort(*(_WORD *)(a1 + 4), (char *)(v14 + 25), v15);
  *(_BYTE *)(v16 + 29) = 46;
LABEL_9:
  if ( v13 >= 0 )
    return v11;
  return v4;
}
