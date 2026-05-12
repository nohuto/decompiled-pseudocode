/*
 * XREFs of sub_1C00A0DEC @ 0x1C00A0DEC
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001E954 @ 0x1C001E954 (sub_1C001E954.c)
 *     sub_1C003B6C8 @ 0x1C003B6C8 (sub_1C003B6C8.c)
 *     sub_1C003B7E8 @ 0x1C003B7E8 (sub_1C003B7E8.c)
 *     sub_1C003BA08 @ 0x1C003BA08 (sub_1C003BA08.c)
 *     sub_1C003BA8C @ 0x1C003BA8C (sub_1C003BA8C.c)
 *     sub_1C003BBA4 @ 0x1C003BBA4 (sub_1C003BBA4.c)
 *     sub_1C00A0EE4 @ 0x1C00A0EE4 (sub_1C00A0EE4.c)
 *     sub_1C00A1028 @ 0x1C00A1028 (sub_1C00A1028.c)
 *     sub_1C00A47DC @ 0x1C00A47DC (sub_1C00A47DC.c)
 *     sub_1C00A87D8 @ 0x1C00A87D8 (sub_1C00A87D8.c)
 */

__int64 __fastcall sub_1C00A0DEC(_DWORD *a1, IRP *a2)
{
  int v3; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _IRP *MasterIrp; // r9
  bool v6; // cf
  int v7; // r8d
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  int v10; // r10d
  int v11; // r8d
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  size_t Length; // [rsp+38h] [rbp+18h] BYREF

  v3 = -1073741811;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = CurrentStackLocation->Parameters.Create.Options < 8;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v6
    || ((v7 = *(_DWORD *)&MasterIrp->Type, v8 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 5), (unsigned int)v8 > 0x3C)
     || (v9 = 0x1811500000001801LL, !_bittest64(&v9, v8)))
    && v7 != 1 )
  {
    a2->IoStatus.Information = 0LL;
    v14 = -1073741808;
    return sub_1C0003440(a2, 0, v14);
  }
  v10 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v3 = 0;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      v3 = -1073741808;
    }
    goto LABEL_10;
  }
  if ( v7 <= 51 )
  {
    if ( v7 == 51 )
    {
      v13 = sub_1C003BBA4((__int64)a1, a2, &Length);
    }
    else
    {
      v16 = v7 - 1;
      if ( v16 )
      {
        v17 = v16 - 4;
        if ( v17 )
        {
          v18 = v17 - 11;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 == 32 )
              {
                v3 = sub_1C003B7E8((__int64)a1, a2, &Length);
                a2->IoStatus.Information = Length;
              }
              goto LABEL_10;
            }
            v13 = sub_1C003B6C8((__int64)a1, (__int64)a2, &Length);
          }
          else
          {
            v13 = sub_1C003BA08(a1, (__int64)a2, &Length);
          }
        }
        else
        {
          v13 = sub_1C00A47DC(a1, MasterIrp, &Length);
        }
      }
      else
      {
        v13 = sub_1C00A1028(a1, MasterIrp, &Length);
      }
    }
  }
  else
  {
    v11 = v7 - 53;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v20 = v12 - 7;
        if ( v20 )
        {
          if ( v20 != 1 )
            goto LABEL_10;
          v13 = sub_1C00A87D8(a1, MasterIrp, &Length);
        }
        else
        {
          v13 = sub_1C003BA8C((__int64)a1, MasterIrp, &Length);
        }
      }
      else
      {
        v13 = sub_1C00A0EE4(a1, MasterIrp, &Length);
      }
    }
    else
    {
      v13 = sub_1C001E954((__int64)a1, (__int64)a2, &Length);
    }
  }
  v3 = v13;
  a2->IoStatus.Information = Length;
LABEL_10:
  v14 = v3;
  return sub_1C0003440(a2, 0, v14);
}
