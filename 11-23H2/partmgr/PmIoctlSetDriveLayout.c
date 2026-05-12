/*
 * XREFs of PmIoctlSetDriveLayout @ 0x1C0025F9C
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 */

__int64 __fastcall PmIoctlSetDriveLayout(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r13
  unsigned int v4; // r9d
  int v5; // edi
  unsigned int *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // ebp
  unsigned int v11; // eax
  _DWORD *Pool2; // rax
  int *v13; // rsi
  unsigned int v14; // r8d
  _DWORD *v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // r14
  unsigned int v20; // eax
  int *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  struct _DEVICE_EXTENSION *v26; // [rsp+60h] [rbp+8h]

  v2 = a2[23];
  v26 = *(struct _DEVICE_EXTENSION **)(a1 + 64);
  v4 = *(_DWORD *)(v2 + 16);
  if ( v4 < 8 )
    return (unsigned int)-1073741820;
  v6 = (unsigned int *)a2[3];
  v7 = 0xFFFFFFFFLL;
  v8 = *v6;
  if ( (unsigned __int64)(32 * v8) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v9 = 32 * v8 + 8;
  v10 = -1;
  if ( v9 >= 8 )
    v10 = 32 * v8 + 8;
  v5 = (unsigned int)(32 * v8) >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v9 >= 8 )
  {
    if ( v4 < v10 )
      return (unsigned int)-1073741820;
    if ( (unsigned __int64)(144 * v8) > 0xFFFFFFFF )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      v11 = 144 * v8 + 48;
      if ( v11 >= 0x30 )
        v7 = v11;
      v5 = (unsigned int)(144 * v8) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( v11 >= 0x30 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(66LL, v7, 1414557008LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          v14 = *v6;
          *Pool2 = 0;
          Pool2[1] = v14;
          Pool2[2] = v6[1];
          if ( v14 )
          {
            v15 = v6 + 7;
            v16 = v14;
            v17 = Pool2 + 16;
            do
            {
              v18 = *(_QWORD *)(v15 - 5);
              *((_DWORD *)v17 - 4) = 0;
              *(v17 - 1) = v18;
              *v17 = *(_QWORD *)(v15 - 3);
              v17 += 18;
              LODWORD(v18) = *v15;
              v15 += 8;
              *((_DWORD *)v17 - 34) = v18;
              *((_BYTE *)v17 - 132) = *((_BYTE *)v15 - 25);
              *((_BYTE *)v17 - 128) = *((_BYTE *)v15 - 28);
              *((_BYTE *)v17 - 127) = *((_BYTE *)v15 - 27);
              *((_BYTE *)v17 - 126) = *((_BYTE *)v15 - 26);
              *((_DWORD *)v17 - 31) = *(v15 - 9);
              --v16;
            }
            while ( v16 );
          }
          v19 = v6 + 7;
          KeWaitForSingleObject((char *)v26 + 56, Executive, 0, 0, 0LL);
          v5 = PmSetDriveLayoutEx(v26, v13);
          KeReleaseMutex((PRKMUTEX)v26 + 1, 0);
          if ( v5 >= 0 )
          {
            v20 = v13[1];
            if ( v20 )
            {
              v21 = v13 + 18;
              v22 = v20;
              do
              {
                v23 = *v21;
                v21 += 36;
                *v19 = v23;
                v19 += 8;
                --v22;
              }
              while ( v22 );
            }
            v24 = *(unsigned int *)(v2 + 8);
            if ( (unsigned int)v24 >= v10 )
              v24 = v10;
            a2[7] = v24;
          }
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v5;
}
