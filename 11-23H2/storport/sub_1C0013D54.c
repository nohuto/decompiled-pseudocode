/*
 * XREFs of sub_1C0013D54 @ 0x1C0013D54
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     sub_1C001AA4C @ 0x1C001AA4C (sub_1C001AA4C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     sub_1C001D420 @ 0x1C001D420 (sub_1C001D420.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0073F38 @ 0x1C0073F38 (sub_1C0073F38.c)
 *     sub_1C0073F80 @ 0x1C0073F80 (sub_1C0073F80.c)
 *     sub_1C0074A70 @ 0x1C0074A70 (sub_1C0074A70.c)
 */

__int64 __fastcall sub_1C0013D54(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // r14
  char v5; // r15
  int v6; // eax
  ULONG Options; // r12d
  BOOLEAN Lock; // dl
  PIRP v9; // rax
  __int64 v10; // r8
  IRP *v11; // r13
  signed int Status; // edi
  struct _IO_STACK_LOCATION *v13; // rcx
  struct _IO_STACK_LOCATION *v14; // rax
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // eax
  BOOLEAN v24; // [rsp+30h] [rbp-D0h]
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  char v27; // [rsp+33h] [rbp-CDh] BYREF
  char v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  char v50[16]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  v33 = 0LL;
  if ( !v2 || (v6 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v6 - 5) <= 1 )
  {
    Status = -1073741810;
    goto LABEL_25;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v24 = Lock;
  if ( Options == 1 )
  {
    v4 = (volatile signed __int32 *)(a1 + 972);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v4 = (volatile signed __int32 *)(a1 + 980);
  }
  else
  {
    v16 = CurrentStackLocation->Parameters.Create.Options - 3;
    if ( CurrentStackLocation->Parameters.Create.Options != 3 )
    {
      if ( CurrentStackLocation->Parameters.Create.Options == 4 )
      {
        v17 = *(_BYTE *)(a1 + 450);
        if ( Lock )
        {
          *(_BYTE *)(a1 + 450) = v17 | 1;
          *(_BYTE *)(v2 + 104) |= 0x80u;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4868LL) )
            sub_1C0073F80(a1);
          if ( (unsigned int)dword_1C00930C8 > 5 && (unsigned __int8)sub_1C001ABEC(v16, 0x400000000000LL) )
          {
            v18 = *(_QWORD *)(v2 + 4656);
            v35 = v2 + 5000;
            v36 = 16LL;
            v37 = a1 + 2024;
            v29 = *(_DWORD *)(v2 + 56);
            v39 = &v29;
            v25 = *(_BYTE *)(a1 + 96);
            v41 = &v25;
            v26 = *(_BYTE *)(a1 + 97);
            v43 = &v26;
            v27 = *(_BYTE *)(a1 + 98);
            v45 = &v27;
            v38 = 16LL;
            v40 = 4LL;
            v42 = 1LL;
            v44 = 1LL;
            v46 = 1LL;
            sub_1C001AA4C(v47, v18);
            v19 = *(_QWORD *)(v2 + 4664);
            v28 = *(_BYTE *)(a1 + 3344);
            v48 = &v28;
            v49 = 1LL;
            sub_1C001AA4C(v50, v19);
            sub_1C001D420((int)&v34, (int)&dword_1C0085171, v20, v21, 0xBu, &v34);
          }
        }
        else
        {
          *(_BYTE *)(a1 + 450) = v17 & 0xFE;
          *(_BYTE *)(v2 + 104) &= ~0x80u;
          sub_1C0073F38();
        }
        v5 = 1;
      }
      goto LABEL_10;
    }
    v4 = (volatile signed __int32 *)(a1 + 976);
  }
  v5 = 1;
  if ( v4 && !*v4 && !Lock )
  {
    Status = -1073741823;
    goto LABEL_25;
  }
LABEL_10:
  v9 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
  v11 = v9;
  if ( !v9 )
  {
    Status = -1073741801;
    goto LABEL_25;
  }
  LOBYTE(v10) = 1;
  Status = sub_1C00071D4(a1, (__int64)v9, v10);
  if ( Status < 0 )
    goto LABEL_24;
  v13 = CurrentStackLocation;
  v11->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
  v14 = v11->Tail.Overlay.CurrentStackLocation;
  v11->IoStatus.Status = -1073741637;
  *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
  *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v13->Parameters.SetQuota + 6);
  *(_OWORD *)&v14[-1].FileObject = *(_OWORD *)&v13->FileObject;
  v14[-1].Context = v13->Context;
  Status = sub_1C0018124(*(PDEVICE_OBJECT *)(v2 + 8), v11);
  if ( Status >= 0 )
  {
    Status = v11->IoStatus.Status;
    if ( Status >= 0 )
      goto LABEL_14;
  }
  if ( Status == -1073741637 && Options == 4 )
  {
    Status = 0;
LABEL_14:
    if ( v4 )
    {
      if ( v24 )
        _InterlockedIncrement(v4);
      else
        _InterlockedDecrement(v4);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( Options == 1 )
        sub_1C0074A70(*(_QWORD *)(a1 + 8), *(unsigned int *)v4);
    }
    if ( v5 && sub_1C0004890(a1, 1) )
    {
      v22 = *(_QWORD *)(a1 + 24);
      LOWORD(v33) = 1;
      WORD1(v33) = *(_WORD *)(v22 + 56);
      WORD4(v33) = *(_WORD *)(a1 + 96);
      BYTE10(v33) = *(_BYTE *)(a1 + 98);
      *(_QWORD *)&v31 = &v33;
      BYTE12(v31) = v24;
      DWORD1(v33) = 4;
      DWORD2(v31) = Options;
      sub_1C0018524(v22 + 336, 1LL, &v31);
    }
    if ( Options == 3 )
    {
      v23 = *(_DWORD *)(a1 + 976);
      if ( v23 == 1 )
      {
        if ( !*(_QWORD *)(v2 + 4952) )
        {
          *(_QWORD *)(v2 + 4952) = a1;
          sub_1C0012E40(v2);
        }
      }
      else if ( !v23 && a1 == *(_QWORD *)(v2 + 4952) )
      {
        *(_QWORD *)(v2 + 4952) = 0LL;
      }
    }
  }
  sub_1C000729C(a1);
LABEL_24:
  IoFreeIrp(v11);
LABEL_25:
  sub_1C0003440(Irp, 0, Status);
  return (unsigned int)Status;
}
