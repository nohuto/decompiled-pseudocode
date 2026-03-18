/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00D4FCC
 * Callers:
 *     SfnOUTSTRING @ 0x1C007FE90 (SfnOUTSTRING.c)
 *     xxxClientExpandStringW @ 0x1C00D4970 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00D4D24 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C02224D0 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C0223EE0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0224480 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     wcsncpycch @ 0x1C00D50E0 (wcsncpycch.c)
 *     MBToWCSEx @ 0x1C014D0F0 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C014E8DC (WCSToMBEx.c)
 *     strncpycch @ 0x1C016E572 (strncpycch.c)
 */

void __fastcall CopyOutputString(volatile void **a1, struct _LARGE_STRING *a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // eax
  volatile void *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax

  v6 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v11 = *(unsigned int *)a1;
      v12 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v11 >= v12 )
        v11 = v12;
      v10 = MBToWCSEx(v6, a1[2], v11, (char *)a2 + 8, a3);
      if ( v10 >= a3 )
        goto LABEL_9;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v10) = 0;
    }
    else
    {
      if ( a3 < *((_DWORD *)a1 + 2) >> 1 )
        LODWORD(v9) = a3;
      else
        v9 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      v10 = wcsncpycch(*((_QWORD *)a2 + 1), a1[2], (unsigned int)v9);
    }
    a3 = v10;
LABEL_9:
    a3 *= 2;
    goto LABEL_10;
  }
  v13 = a1[2];
  if ( a4 )
  {
    v15 = strncpycch(*((_QWORD *)a2 + 1), v13);
    goto LABEL_21;
  }
  v14 = *((_DWORD *)a1 + 2) >> 1;
  if ( *(_DWORD *)a1 < (unsigned int)v14 )
    v14 = *(unsigned int *)a1;
  v15 = WCSToMBEx(0LL, v13, v14, (char *)a2 + 8, a3);
  if ( v15 < a3 )
  {
    *(_BYTE *)(v15 + *((_QWORD *)a2 + 1)) = 0;
LABEL_21:
    a3 = v15;
  }
LABEL_10:
  *(_DWORD *)a2 = a3;
}
