/*
 * XREFs of sub_1C00A3030 @ 0x1C00A3030
 * Callers:
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 * Callees:
 *     sub_1C001EBC4 @ 0x1C001EBC4 (sub_1C001EBC4.c)
 *     sub_1C001ED9C @ 0x1C001ED9C (sub_1C001ED9C.c)
 *     sub_1C001F1F4 @ 0x1C001F1F4 (sub_1C001F1F4.c)
 *     sub_1C001F244 @ 0x1C001F244 (sub_1C001F244.c)
 *     sub_1C0022E40 @ 0x1C0022E40 (sub_1C0022E40.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00A3200 @ 0x1C00A3200 (sub_1C00A3200.c)
 *     sub_1C00A3308 @ 0x1C00A3308 (sub_1C00A3308.c)
 *     sub_1C00A332C @ 0x1C00A332C (sub_1C00A332C.c)
 */

__int64 __fastcall sub_1C00A3030(
        struct _DEVICE_OBJECT *a1,
        PIRP a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // r15
  void *v11; // rdi
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  void *v14; // rax
  void *v15; // rbx
  KPROCESSOR_MODE AccessMode; // cl
  PIRP v17; // rbp
  _QWORD *v18; // r14
  __int64 Pool2; // rax
  __int64 v20; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v23[4]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  *(_OWORD *)v23 = 0LL;
  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v12 = sub_1C00A3200((_DWORD)a1, (_DWORD)a2, a3, a5, a6, (__int64)v23);
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = v8;
    v14 = (void *)sub_1C00A3308(v23, a2, v13);
    v15 = v14;
    if ( v8 )
      AccessMode = a2->RequestorMode;
    else
      AccessMode = 0;
    v17 = sub_1C001EBC4((__int64)a1, v14, v23[3], LOBYTE(v23[2]) != 0, AccessMode, a2, 0, 0LL, 0, 0LL);
    if ( v17 )
    {
      v18 = (_QWORD *)sub_1C00A332C(v23, v15);
      if ( v18
        && (v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v18,
            v18[6] = v17,
            Pool2 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
            (v11 = (void *)Pool2) != 0LL) )
      {
        *(_QWORD *)(Pool2 + 24) = v18;
        *(_QWORD *)(Pool2 + 8) = v17;
        v20 = Pool2;
        *(_BYTE *)Pool2 = v8;
        *(_QWORD *)(Pool2 + 16) = a2;
        *(_QWORD *)(Pool2 + 32) = sub_1C0022E40;
        *(_QWORD *)(Pool2 + 40) = a8;
        CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1C001EB00;
        CurrentStackLocation[-1].Context = v11;
        CurrentStackLocation[-1].Control = -32;
        v12 = sub_1C001ED9C((__int64)a2, v20);
        if ( v12 == 259 )
        {
          IofCallDriver(a1, v17);
          return 259LL;
        }
      }
      else
      {
        v12 = -1073741670;
      }
      sub_1C001F1F4(v17);
      if ( v18 )
        sub_1C001F244(v18);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x69506C50u);
    }
    else
    {
      v12 = -1073741670;
    }
  }
  a2->IoStatus.Status = v12;
  sub_1C0022E40(a2);
  return (unsigned int)v12;
}
