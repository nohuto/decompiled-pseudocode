/*
 * XREFs of sub_1405A40C4 @ 0x1405A40C4
 * Callers:
 *     sub_140573374 @ 0x140573374 (sub_140573374.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140761F70 @ 0x140761F70 (sub_140761F70.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 */

__int64 __fastcall sub_1405A40C4(DWORD64 ControlPc, char a2, char a3)
{
  char v3; // di
  __int64 v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  int v8; // ebx
  char v9; // r15
  char *v10; // rbx
  unsigned int v11; // esi
  DWORD BeginAddress; // edi
  PRUNTIME_FUNCTION v13; // rax
  DWORD v15; // eax
  unsigned __int64 ImageBase; // [rsp+38h] [rbp-C8h] BYREF
  char *v19; // [rsp+40h] [rbp-C0h]
  _BYTE v20[112]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[14]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a2;
  memset(v20, 0, 0x68uLL);
  ImageBase = 0LL;
  v5 = sub_1406F5B50();
  v6 = sub_1402FDA80(ControlPc, 0);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741811;
    goto LABEL_15;
  }
  if ( (unsigned int)sub_14027B080(v6[6]) == 1 )
  {
    v8 = -1073741637;
    goto LABEL_15;
  }
  v9 = 0;
  v10 = sub_14026DFC0(1);
  v19 = v10;
  while ( 1 )
  {
    sub_140761F70(v7, v20);
    v8 = sub_1409682E4(v20, v10);
    if ( v8 < 0 )
      break;
    if ( v9 )
    {
      v11 = *((_DWORD *)v7 + 16);
      BeginAddress = 0;
    }
    else
    {
      if ( !v3 )
      {
        v11 = 1;
        BeginAddress = ControlPc - *((_DWORD *)v7 + 12);
        goto LABEL_19;
      }
      v13 = RtlLookupFunctionEntry(ControlPc, &ImageBase, 0LL);
      if ( !v13 )
        goto LABEL_13;
      BeginAddress = v13->BeginAddress;
      v11 = v13->EndAddress - v13->BeginAddress;
    }
    if ( !v11 )
      goto LABEL_13;
LABEL_19:
    v15 = *((_DWORD *)v7 + 16);
    if ( BeginAddress >= v15 || v15 - BeginAddress < v11 )
    {
LABEL_13:
      v8 = -1073741811;
      break;
    }
    v8 = sub_140581D58((__int64)v20, BeginAddress >> 12, (v11 + BeginAddress - 1) >> 12, 2 * v9 + 1, 0LL);
    if ( v8 < 0 )
      break;
    memset(v21, 0, 0x68uLL);
    LOBYTE(v21[3]) = a3;
    v21[1] = ControlPc;
    v21[2] = __PAIR64__(v11, BeginAddress);
    v8 = sub_140358A20(2u, 84, 0, (__int64)v21);
    if ( v8 != -1073741267 )
      break;
    if ( v9 )
    {
      v8 = -1073741637;
      break;
    }
    sub_14080C400(v20);
    v10 = v19;
    v9 = 1;
    v3 = a2;
  }
  sub_14080C400(v20);
LABEL_15:
  if ( v5 )
    sub_1406F5AF0(v5);
  return (unsigned int)v8;
}
