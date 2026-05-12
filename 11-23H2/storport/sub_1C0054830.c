/*
 * XREFs of sub_1C0054830 @ 0x1C0054830
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 */

__int64 __fastcall sub_1C0054830(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rcx
  struct _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // r14d
  char v11; // r11
  __int64 v12; // r9
  const wchar_t *v13; // rax
  __int64 v14; // rdi
  int v15; // r9d
  const wchar_t *v16; // rbp
  int v18; // [rsp+B0h] [rbp-68h]
  __int128 v19; // [rsp+B8h] [rbp-60h] BYREF
  char v20[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_18;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v4->Flags + v8 + 24;
  if ( v9 < 0x1C )
    v9 = 28;
  if ( *(_DWORD *)(&v4->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(v4->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
      {
        v10 = -2147483631;
      }
      else
      {
        v5 = 1;
        v10 = sub_1C005A560(a1, v20);
        if ( v10 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
            v10 = sub_1C005B9F4(
                    a1,
                    HIDWORD(v4->MdlAddress),
                    v4->Flags,
                    (char *)&v4->AssociatedIrp + *(&v4->Flags + 1),
                    *(&v4->Flags + 1),
                    &v4->AssociatedIrp,
                    v20);
          else
            v10 = -1073741637;
        }
        *(_DWORD *)(a1 + 456) &= ~8u;
      }
    }
    else
    {
      v10 = -1073741637;
    }
  }
  else
  {
LABEL_18:
    v10 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v10 < 0 )
  {
    if ( v5 )
    {
      v18 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v19);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v13 = *(const wchar_t **)(v12 + 5016);
        v14 = v12 + 5000;
        v15 = *(_DWORD *)(v12 + 56);
        v16 = (const wchar_t *)&unk_1C0082788;
        if ( v13 )
          v16 = v13;
        sub_1C0050984(
          v4->Flags,
          LODWORD(v4->MdlAddress),
          a1 + 186,
          v15,
          v11,
          SBYTE1(v18),
          SBYTE2(v18),
          a1 + 2024,
          v14,
          *((const wchar_t **)&v19 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v16,
          "TcgSetLockingObjectMetadata",
          v20,
          v10,
          (char)v4->MdlAddress,
          v4->Flags,
          *(&v4->Flags + 1),
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
