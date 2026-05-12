/*
 * XREFs of sub_1C00516D0 @ 0x1C00516D0
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C00516D0(__int64 a1, IRP *a2)
{
  unsigned int *v3; // rbp
  unsigned int *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  const wchar_t *v11; // rdx
  __int128 v13; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v14; // [rsp+C8h] [rbp-60h] BYREF
  char v15[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v3 = MasterIrp;
  if ( *(_WORD *)MasterIrp != 1 )
    goto LABEL_18;
  v8 = MasterIrp[4];
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v8 + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( MasterIrp[1] == v9 && Options >= v9 )
  {
    if ( MasterIrp[3] )
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
            v10 = sub_1C00594D4(a1, v3[3], v3[4], (int)v3 + 20, (__int64)v15);
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
          v3[2],
          (__int64)v11,
          a1 + 5000,
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
          "TcgEraseLockingObject",
          v15,
          v10,
          v3[2],
          v3[4],
          0,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
