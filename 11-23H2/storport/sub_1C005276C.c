/*
 * XREFs of sub_1C005276C @ 0x1C005276C
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 */

__int64 __fastcall sub_1C005276C(__int64 a1, IRP *a2)
{
  struct _IRP *v3; // rsi
  struct _IRP *MasterIrp; // rcx
  char v5; // r15
  unsigned int Options; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // edi
  const wchar_t *v11; // r8
  __int128 v13; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v14; // [rsp+C8h] [rbp-60h] BYREF
  char v15[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_18;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v3->Flags + v8 + 24;
  if ( v9 < 0x1C )
    v9 = 28;
  if ( *(_DWORD *)(&v3->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(v3->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
      {
        v10 = -2147483631;
      }
      else
      {
        v5 = 1;
        v10 = sub_1C005A560(a1, v15);
        if ( v10 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
            v10 = sub_1C005B9F4(
                    a1,
                    HIDWORD(v3->MdlAddress),
                    v3->Flags,
                    (char *)&v3->AssociatedIrp + *(&v3->Flags + 1),
                    *(&v3->Flags + 1),
                    &v3->AssociatedIrp,
                    v15);
          else
            v10 = -1073741637;
        }
        *(_DWORD *)(a1 + 128) &= ~1u;
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
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v13);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v11 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v11 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          v3->Flags,
          LODWORD(v3->MdlAddress),
          (__int64)v11,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v14,
          a1 + 5000,
          *((const wchar_t **)&v13 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v11,
          "TcgSetLockingObjectMetadata",
          v15,
          v10,
          (char)v3->MdlAddress,
          v3->Flags,
          *(&v3->Flags + 1),
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
