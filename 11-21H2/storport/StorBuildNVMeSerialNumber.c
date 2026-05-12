/*
 * XREFs of StorBuildNVMeSerialNumber @ 0x1C0065824
 * Callers:
 *     StorProcessNVMeEnumeratorFillInfo @ 0x1C0065D10 (StorProcessNVMeEnumeratorFillInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidHexFromUshort @ 0x1C0053DAC (RaidHexFromUshort.c)
 *     StorSerialNumberFromNvmeId @ 0x1C0065938 (StorSerialNumberFromNvmeId.c)
 */

__int64 __fastcall StorBuildNVMeSerialNumber(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int8 v12; // r9
  int v13; // r11d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r10

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 5848LL);
  v7 = *(_QWORD *)(v5 + 3416);
  v8 = (_QWORD *)(v7 + 104);
  v9 = (_QWORD *)(v7 + 120);
  v10 = *(_QWORD *)(v7 + 104);
  if ( !v10 )
    v10 = v8[1];
  if ( v10 )
  {
    v11 = 40LL;
LABEL_7:
    LOBYTE(v5) = v10 != 0;
    v13 = StorSerialNumberFromNvmeId(v8, v5, a2, v11, 0LL);
    goto LABEL_9;
  }
  if ( *v9 )
  {
    v11 = 20LL;
    v8 = v9;
    goto LABEL_7;
  }
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 20);
  *(_BYTE *)(a2 + 20) = 95;
  RaidHexFromUshort((unsigned __int8)*(_WORD *)(a1 + 6), (char *)(a2 + 21), 4u);
  RaidHexFromUshort(*(_WORD *)(v14 + 4), (char *)(v15 + 25), 4u);
  *(_BYTE *)(v16 + 29) = 46;
  v12 = 30;
LABEL_9:
  if ( v13 >= 0 )
    return v12;
  return v2;
}
