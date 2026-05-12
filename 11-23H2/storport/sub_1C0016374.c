/*
 * XREFs of sub_1C0016374 @ 0x1C0016374
 * Callers:
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007728 @ 0x1C0007728 (sub_1C0007728.c)
 *     sub_1C000775C @ 0x1C000775C (sub_1C000775C.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     sub_1C00166D4 @ 0x1C00166D4 (sub_1C00166D4.c)
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 */

NTSTATUS __fastcall sub_1C0016374(__int64 a1, IRP *a2)
{
  unsigned __int16 v4; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  signed int v11; // esi
  unsigned __int16 *v12; // r14
  __int64 v13; // r12
  void (__fastcall *v14)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v15; // eax
  __int64 v16; // rcx
  struct _IO_STACK_LOCATION *v17; // rax
  int v18; // eax
  int v19; // esi
  signed __int32 v20[8]; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v21[4]; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v22 = 0;
  v21[0] = 0;
  memset(&v24, 0, sizeof(v24));
  v4 = 0;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 14LL, &unk_1C0083210, a1, a2);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( byte_1C0093BE8 )
    {
      v25 = 0LL;
      IoGetActivityIdIrp(a2, &v25);
      if ( (byte_1C0093A02 & 0x20) != 0 )
        sub_1C003275C(v6, &unk_1C0083220, &v25, a2, a2->IoStatus.Status);
    }
    return sub_1C00140E4(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4200)) > 300000000 )
    *(_BYTE *)(a1 + 106) = 1;
  v8 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
  {
    v9 = sub_1C00AC730(a1);
    if ( byte_1C0093BE8 )
    {
      v26 = 0LL;
      IoGetActivityIdIrp(a2, &v26);
      if ( (byte_1C0093A03 & 0x40) != 0 )
        sub_1C003275C(v10, &unk_1C0083290, &v26, a2, v9);
    }
    if ( v9 >= 0 )
      goto LABEL_20;
    v8 = a1;
  }
  v11 = sub_1C00166D4(v8, &v22, v21);
  if ( v11 >= 0 )
  {
LABEL_20:
    v11 = sub_1C0018F00(a1, &v23);
    v22 = v11;
  }
  if ( v21[0] )
  {
    v12 = *(unsigned __int16 **)(a1 + 4776);
    *(_BYTE *)(a1 + 104) &= ~0x40u;
    *(_QWORD *)(a1 + 4776) = 0LL;
    if ( v12 )
      v4 = *v12;
    v13 = *(_QWORD *)(a1 + 4792);
    *(_QWORD *)(a1 + 4792) = 0LL;
    v14 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4784);
    *(_QWORD *)(a1 + 4784) = 0LL;
    *(_QWORD *)(a1 + 4764) = 0LL;
    _InterlockedOr(v20, 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 4760), 0);
    if ( v14 )
    {
      sub_1C000775C(a1, &v24);
      v15 = sub_1C000E318(v22);
      v14(*(_QWORD *)(a1 + 576) + 16LL, v13, v4, v12, v15);
      sub_1C0007728(a1, &v24);
    }
  }
  a2->IoStatus.Information = v23;
  a2->IoStatus.Status = v11;
  if ( v11 < 0 )
  {
    v18 = sub_1C0003440(a2, 0, v11);
  }
  else
  {
    if ( byte_1C0093BE8 )
    {
      v25 = 0LL;
      IoGetActivityIdIrp(a2, &v25);
      if ( (byte_1C0093A02 & 0x20) != 0 )
        sub_1C003275C(v16, &unk_1C0083220, &v25, a2, v11);
    }
    v17 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
    *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
    v17[-1].FileObject = v17->FileObject;
    v17[-1].Control = 0;
    v18 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
  }
  v19 = v18;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 15LL, &unk_1C0083210, a1, a2, v18);
  }
  return v19;
}
