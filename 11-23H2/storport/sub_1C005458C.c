/*
 * XREFs of sub_1C005458C @ 0x1C005458C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 */

__int64 __fastcall sub_1C005458C(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rcx
  struct _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // edx
  unsigned int Flags; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // r14d
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rdi
  int v16; // r9d
  const wchar_t *v17; // rbp
  int v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+B8h] [rbp-60h] BYREF
  char v21[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( !MasterIrp )
    goto LABEL_19;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_19;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_19;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_19;
  v9 = *(&MasterIrp->Flags + 1);
  if ( v9 > 0x20 )
    goto LABEL_19;
  v10 = v9 + Flags + 24;
  if ( v10 < 0x1C )
    v10 = 28;
  if ( *(_DWORD *)(&v4->Size + 1) == v10 && Options >= v10 )
  {
    if ( HIDWORD(v4->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v5 = 1;
        v11 = sub_1C005A560(a1, v21);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
            v11 = sub_1C005B7F4(
                    a1,
                    HIDWORD(v4->MdlAddress),
                    v4->Flags,
                    (int)v4 + 24,
                    *(&v4->Flags + 1),
                    (__int64)&v4->AssociatedIrp + v4->Flags,
                    (__int64)v21);
          else
            v11 = -1073741637;
        }
        *(_DWORD *)(a1 + 456) &= ~8u;
      }
    }
    else
    {
      v11 = -1073741637;
    }
  }
  else
  {
LABEL_19:
    v11 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v11 < 0 )
  {
    if ( v5 )
    {
      v19 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v20);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5016);
        v15 = v13 + 5000;
        v16 = *(_DWORD *)(v13 + 56);
        v17 = (const wchar_t *)&unk_1C0082788;
        if ( v14 )
          v17 = v14;
        sub_1C0050984(
          v4->Flags,
          LODWORD(v4->MdlAddress),
          a1 + 186,
          v16,
          v12,
          SBYTE1(v19),
          SBYTE2(v19),
          a1 + 2024,
          v15,
          *((const wchar_t **)&v20 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v17,
          "TcgSetLockingObjectAuthKey",
          v21,
          v11,
          (char)v4->MdlAddress,
          v4->Flags,
          *(&v4->Flags + 1),
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v11);
}
