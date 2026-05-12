/*
 * XREFs of sub_1C00606A0 @ 0x1C00606A0
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C00606A0(__int64 a1, IRP *a2)
{
  _DWORD *p_Type; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v6; // ecx
  size_t Length; // rbp
  unsigned int v8; // r8d
  char v9; // r14
  int v10; // eax
  int v11; // eax
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF

  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  memset(v13, 0, sizeof(v13));
  v6 = p_Type[1];
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !v6 )
  {
    memset_0(p_Type, 0, Length);
    if ( (unsigned int)Length < 8 )
    {
      v8 = -1073741789;
      goto LABEL_15;
    }
    if ( (unsigned int)Length < 0xC )
    {
      *p_Type = 16;
      p_Type[1] = 16;
      a2->IoStatus.Information = 8LL;
      goto LABEL_22;
    }
    v9 = 1;
    if ( (*(_BYTE *)(a1 + 128) & 1) != 0 )
    {
      v10 = (unsigned int)Length < 0x10 ? 12 : 16;
      *p_Type = v10;
      p_Type[1] = v10;
    }
    else
    {
      if ( (unsigned int)Length >= 0x10 )
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
        {
          v8 = -2147483631;
          goto LABEL_15;
        }
        v11 = sub_1C005A560((int *)a1, v13);
        *p_Type = 16;
        p_Type[1] = 16;
        if ( v11 >= 0 && **(_DWORD **)(a1 + 3504) == 512 )
          p_Type[3] = 2;
        else
          v9 = 0;
        *((_BYTE *)p_Type + 8) = v9;
        *(_DWORD *)(a1 + 456) &= ~8u;
        goto LABEL_21;
      }
      *p_Type = 12;
      p_Type[1] = 12;
    }
    *((_BYTE *)p_Type + 8) = 0;
LABEL_21:
    a2->IoStatus.Information = (unsigned int)p_Type[1];
    goto LABEL_22;
  }
  if ( v6 == 1 )
  {
LABEL_22:
    v8 = 0;
    return sub_1C0003440(a2, 0, v8);
  }
  v8 = -1073741637;
LABEL_15:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v8);
}
