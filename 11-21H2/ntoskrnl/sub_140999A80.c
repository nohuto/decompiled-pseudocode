/*
 * XREFs of sub_140999A80 @ 0x140999A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140850D98 @ 0x140850D98 (sub_140850D98.c)
 *     sub_140999230 @ 0x140999230 (sub_140999230.c)
 *     sub_140999574 @ 0x140999574 (sub_140999574.c)
 *     sub_140999610 @ 0x140999610 (sub_140999610.c)
 */

void __fastcall sub_140999A80(__int64 a1)
{
  IRP *v1; // rsi
  ULONG_PTR v2; // r13
  struct _DEVICE_OBJECT *v3; // rax
  unsigned __int8 v5; // di
  char v6; // r12
  char v7; // r15
  int Status; // eax
  ULONG v9; // r14d
  __int64 *v10; // rax
  char *v11; // rdx
  char v12; // al
  ULONG v13; // eax
  ULONG v14; // edx
  __int64 v15; // rcx
  IRP *v16; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  int v21; // [rsp+48h] [rbp-49h] BYREF
  PIRP Irp; // [rsp+50h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+90h] [rbp-1h]
  int v27; // [rsp+94h] [rbp+3h]
  __int64 *v28; // [rsp+98h] [rbp+7h]
  int v29; // [rsp+A0h] [rbp+Fh]
  int v30; // [rsp+A4h] [rbp+13h]
  __int64 *v31; // [rsp+A8h] [rbp+17h]
  int v32; // [rsp+B0h] [rbp+1Fh]
  int v33; // [rsp+B4h] [rbp+23h]

  v1 = *(IRP **)(a1 + 56);
  v2 = a1 + 400;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  Irp = v1;
  DeviceObject = v3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  sub_1402D66A8(a1 + 400);
  if ( *(_BYTE *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 64) = 4;
LABEL_3:
    if ( *(_BYTE *)(a1 + 80) )
    {
      v7 = 1;
      *(_BYTE *)(a1 + 80) = 0;
    }
    KeSetEvent((PRKEVENT)(a1 + 416), 0, 0);
    goto LABEL_57;
  }
  Status = v1->IoStatus.Status;
  v9 = 8;
  if ( Status >= 0 )
  {
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      v27 = 0;
      v30 = 0;
      v25 = &v19;
      v21 = *(unsigned __int8 *)(a1 + 64);
      v19 = a1;
      v28 = (__int64 *)&v21;
      v26 = 8;
      v29 = 4;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003190D, 0LL, 0LL, 4u, v24);
    }
    if ( !*(_BYTE *)(a1 + 64) )
    {
      if ( (unsigned int)dword_140C03A00 <= 2 )
        goto LABEL_46;
      v20 = a1;
      v10 = &v20;
      v11 = byte_140031723;
      goto LABEL_32;
    }
    if ( *(_BYTE *)(a1 + 64) != 1 )
    {
      if ( *(_BYTE *)(a1 + 64) != 2 )
      {
        if ( *(_BYTE *)(a1 + 64) != 3 )
        {
          if ( *(_BYTE *)(a1 + 64) == 4 )
          {
            if ( (unsigned int)dword_140C03A00 <= 2 )
              goto LABEL_46;
            v19 = a1;
            v10 = &v19;
            v11 = (char *)&word_1400317C6;
          }
          else
          {
            if ( (unsigned int)dword_140C03A00 <= 2 )
              goto LABEL_46;
            v19 = a1;
            v10 = &v19;
            v11 = &byte_140031797;
          }
LABEL_32:
          v27 = 0;
          v25 = v10;
          v26 = 8;
          sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)v11, 0LL, 0LL, 3u, v24);
          goto LABEL_46;
        }
        if ( (unsigned int)dword_140C03A00 > 5 )
        {
          v27 = 0;
          v30 = 0;
          v33 = 0;
          v25 = &v20;
          v21 = *(_DWORD *)(a1 + 92);
          v28 = (__int64 *)&v21;
          LODWORD(v19) = *(_DWORD *)(a1 + 96);
          v31 = &v19;
          v20 = a1;
          v26 = 8;
          v29 = 4;
          v32 = 4;
          sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003174D, 0LL, 0LL, 5u, v24);
        }
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 96);
        goto LABEL_43;
      }
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v25 = &v20;
        LODWORD(v19) = *(unsigned __int8 *)(a1 + 72);
        v28 = &v19;
        v21 = *(_DWORD *)(a1 + 76);
        v31 = (__int64 *)&v21;
        v20 = a1;
        v26 = 8;
        v29 = 4;
        v32 = 4;
        sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_1400318D1, 0LL, 0LL, 5u, v24);
      }
      v12 = *(_BYTE *)(a1 + 72);
      if ( *(_BYTE *)(a1 + 80) )
      {
        if ( v12 )
        {
LABEL_28:
          sub_140999610(a1, *(_DWORD *)(a1 + 76));
          v5 = (*(_BYTE *)(a1 + 88) != 0) + 2;
          goto LABEL_46;
        }
      }
      else if ( !v12 )
      {
        goto LABEL_28;
      }
      v7 = 1;
      *(_BYTE *)(a1 + 80) = v12;
      v6 = v12;
      goto LABEL_28;
    }
    sub_140999230(a1);
LABEL_43:
    v5 = 2;
    goto LABEL_46;
  }
  if ( Status == -1073741667 || Status == -1073741536 )
  {
    v5 = *(_BYTE *)(a1 + 64);
    if ( v5 == 1 )
      *(_BYTE *)(a1 + 88) = 0;
  }
  else
  {
    if ( (unsigned int)dword_140C03A00 > 5 )
    {
      v27 = 0;
      v30 = 0;
      v25 = &v20;
      LODWORD(v19) = *(unsigned __int8 *)(a1 + 64);
      v20 = a1;
      v28 = &v19;
      v26 = 8;
      v29 = 4;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140031820, 0LL, 0LL, 4u, v24);
    }
    switch ( *(_BYTE *)(a1 + 64) )
    {
      case 1:
        goto LABEL_42;
      case 2:
        goto LABEL_3;
      case 3:
        if ( (unsigned int)dword_140C03A00 > 2 )
        {
          v27 = 0;
          v25 = &v20;
          v20 = a1;
          v26 = 8;
          sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_1400317ED, 0LL, 0LL, 3u, v24);
        }
LABEL_42:
        *(_BYTE *)(a1 + 88) = 0;
        goto LABEL_43;
    }
  }
LABEL_46:
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    v27 = 0;
    v30 = 0;
    v25 = &v20;
    LODWORD(v19) = v5;
    v20 = a1;
    v28 = &v19;
    v26 = 8;
    v29 = 4;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003189B, 0LL, 0LL, 4u, v24);
  }
  switch ( v5 )
  {
    case 1u:
      v9 = 0;
      v14 = 2703940;
      v13 = 20;
      v15 = 108LL;
      goto LABEL_56;
    case 2u:
      v9 = 12;
      v14 = 2703936;
      v13 = 12;
      v15 = 68LL;
      goto LABEL_56;
    case 3u:
      v13 = 0;
      v14 = 2720328;
      v15 = 92LL;
LABEL_56:
      sub_140850D98(*(IRP **)(a1 + 56), v14, 1, (struct _IRP *)(v15 + a1), v9, v13);
      v16 = Irp;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1405D8F20;
      v18 = DeviceObject;
      CurrentStackLocation[-1].Context = (PVOID)a1;
      CurrentStackLocation[-1].Control = -32;
      *(_BYTE *)(a1 + 64) = v5;
      IofCallDriver(v18, v16);
      goto LABEL_57;
  }
  if ( (unsigned int)dword_140C03A00 > 2 )
  {
    v27 = 0;
    v30 = 0;
    v25 = &v20;
    LODWORD(v19) = *(unsigned __int8 *)(a1 + 64);
    v20 = a1;
    v28 = &v19;
    v26 = 8;
    v29 = 4;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14003185B, 0LL, 0LL, 4u, v24);
  }
LABEL_57:
  if ( v7 )
    sub_140999574(v6);
  sub_1402935D0(v2);
}
