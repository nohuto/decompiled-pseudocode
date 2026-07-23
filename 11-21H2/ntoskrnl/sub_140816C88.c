/*
 * XREFs of sub_140816C88 @ 0x140816C88
 * Callers:
 *     IoConnectInterruptEx @ 0x140816FD0 (IoConnectInterruptEx.c)
 * Callees:
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_140817A24 @ 0x140817A24 (sub_140817A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140816C88(
        int a1,
        struct _DEVICE_OBJECT *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  _DWORD *v12; // rsi
  char v13; // r15
  _DWORD *DeviceNode; // rcx
  int MessageRoutingInfo; // edi
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned __int8 v18; // r9
  char v19; // di
  _BYTE *Pool2; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  char v24; // al
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // r12
  __int128 v31; // xmm0
  int v32; // eax
  __int128 v33; // xmm0
  int v34; // [rsp+38h] [rbp-C8h]
  int v35; // [rsp+40h] [rbp-C0h]
  char v36; // [rsp+60h] [rbp-A0h]
  int P; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v40; // [rsp+80h] [rbp-80h]
  _QWORD *v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-60h]
  _OWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[12]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = 0;
  v41 = a3;
  v40 = a2;
  *a3 = 0LL;
  v39 = a4;
  v38 = 0LL;
  v36 = 0;
  v11 = 0;
  v42 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v43 = 0LL;
  memset(v44, 0, 20);
  memset(v45, 0, sizeof(v45));
  if ( !a2 || (DeviceNode = a2->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x20000) != 0 || !a4 )
    return (unsigned int)-1073741811;
  MessageRoutingInfo = sub_140817A24(a2);
  if ( MessageRoutingInfo < 0 )
    goto LABEL_13;
  v16 = 0;
  if ( !MEMORY[0] )
    goto LABEL_12;
  v17 = 16LL;
  do
  {
    v18 = v13;
    if ( (unsigned int)(*(_DWORD *)(v17 - 8) - 1) > 2 )
      goto LABEL_9;
    ++v11;
    if ( a1 == 5 )
    {
      v19 = 1;
      v36 = 1;
    }
    else
    {
      if ( a1 != 3 )
        goto LABEL_9;
      if ( a7 )
      {
        if ( a7 < *(_BYTE *)v17 )
          goto LABEL_12;
        v13 = a7;
LABEL_9:
        v19 = v36;
        goto LABEL_10;
      }
      v19 = v36;
      if ( a6 )
      {
        v13 = *(_BYTE *)v17;
        if ( *(_BYTE *)v17 <= v18 )
          v13 = v18;
      }
      else
      {
        v13 = 0;
      }
    }
LABEL_10:
    ++v16;
    v17 += 88LL;
  }
  while ( v16 < MEMORY[0] );
  if ( v11 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, (unsigned int)(48 * v11 + 8), 1852403529LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v13;
      v22 = 0LL;
      for ( P = 0; (unsigned int)v22 < MEMORY[0]; P = v22 )
      {
        v23 = (_QWORD *)(88 * v22 + 8);
        if ( (unsigned int)(*(_DWORD *)(88 * v22 + 8) - 1) <= 2 )
        {
          if ( v19 )
          {
            v24 = 0;
          }
          else if ( v13 )
          {
            v24 = v13;
          }
          else
          {
            v24 = *(_BYTE *)(88 * v22 + 0x10);
          }
          v25 = *((_OWORD *)v23 + 1);
          LOBYTE(v35) = 1;
          LOBYTE(v34) = v24;
          v26 = v12[1];
          *(_OWORD *)&v45[1] = *(_OWORD *)v23;
          v27 = *((_OWORD *)v23 + 2);
          *(_OWORD *)&v45[3] = v25;
          LODWORD(v45[0]) = 1;
          v28 = *((_OWORD *)v23 + 3);
          *(_OWORD *)&v45[5] = v27;
          v29 = *((_OWORD *)v23 + 4);
          *(_OWORD *)&v45[7] = v28;
          *(_QWORD *)&v28 = v23[10];
          *(_OWORD *)&v45[9] = v29;
          v45[11] = v28;
          MessageRoutingInfo = sub_140817258(&v38, v40, 0LL, v39, a5, v26, a6, v34, v35);
          if ( MessageRoutingInfo < 0 )
            goto LABEL_13;
          v30 = 6LL * (unsigned int)v12[1];
          if ( *(_DWORD *)v23 == 3 )
          {
            v31 = *(_OWORD *)(v23 + 3);
            DWORD2(v42) = *((_DWORD *)v23 + 1);
            v32 = *((_DWORD *)v23 + 18);
            v43 = v31;
            LODWORD(v42) = 0;
            v33 = *(_OWORD *)(v23 + 5);
            LODWORD(v44[0]) = v32;
            *(_OWORD *)((char *)v44 + 4) = v33;
            MessageRoutingInfo = HalGetMessageRoutingInfo((int *)&v42, v45);
            if ( MessageRoutingInfo < 0 )
              goto LABEL_13;
            v23 = &v45[1];
          }
          *(_QWORD *)&v12[2 * v30 + 2] = v23[9];
          v12[2 * v30 + 8] = *((_DWORD *)v23 + 20);
          *(_QWORD *)&v12[2 * v30 + 4] = v23[3];
          *(_QWORD *)&v12[2 * v30 + 6] = v38 + 112;
          v12[2 * v30 + 9] = *((_DWORD *)v23 + 1);
          LOBYTE(v12[2 * v30 + 10]) = *((_BYTE *)v23 + 8);
          v12[2 * v30 + 11] = *((_DWORD *)v23 + 4);
          v12[2 * v30 + 12] = *((_DWORD *)v23 + 3);
          ++v12[1];
        }
        v19 = v36;
        v22 = (unsigned int)(P + 1);
      }
      MessageRoutingInfo = 0;
      *v41 = v12;
    }
    else
    {
      MessageRoutingInfo = -1073741670;
    }
  }
  else
  {
LABEL_12:
    MessageRoutingInfo = -1073741811;
  }
LABEL_13:
  if ( MessageRoutingInfo < 0 && v12 )
  {
    if ( v12[1] )
    {
      do
        IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[12 * v7++ + 6]);
      while ( v7 < v12[1] );
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)MessageRoutingInfo;
}
