/*
 * XREFs of sub_1C00524E0 @ 0x1C00524E0
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B7F4 @ 0x1C005B7F4 (sub_1C005B7F4.c)
 */

__int64 __fastcall sub_1C00524E0(__int64 a1, IRP *a2)
{
  struct _IRP *v3; // rsi
  struct _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // edi
  const wchar_t *v12; // r8
  __int128 v14; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-60h] BYREF
  char v16[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( !MasterIrp )
    goto LABEL_19;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_19;
  v3 = MasterIrp;
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
  if ( *(_DWORD *)(&v3->Size + 1) == v10 && Options >= v10 )
  {
    if ( HIDWORD(v3->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        v11 = -2147483631;
      }
      else
      {
        v5 = 1;
        v11 = sub_1C005A560(a1, v16);
        if ( v11 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
            v11 = sub_1C005B7F4(
                    a1,
                    HIDWORD(v3->MdlAddress),
                    v3->Flags,
                    (int)v3 + 24,
                    *(&v3->Flags + 1),
                    (__int64)&v3->AssociatedIrp + v3->Flags,
                    (__int64)v16);
          else
            v11 = -1073741637;
        }
        *(_DWORD *)(a1 + 128) &= ~1u;
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
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v14);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v12 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          v3->Flags,
          LODWORD(v3->MdlAddress),
          (__int64)v12,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v15,
          a1 + 5000,
          *((const wchar_t **)&v14 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v12,
          "TcgSetLockingObjectAuthKey",
          v16,
          v11,
          (char)v3->MdlAddress,
          v3->Flags,
          *(&v3->Flags + 1),
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v11);
}
