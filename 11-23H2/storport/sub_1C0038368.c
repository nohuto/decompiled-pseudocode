/*
 * XREFs of sub_1C0038368 @ 0x1C0038368
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 */

__int64 __fastcall sub_1C0038368(__int64 a1, IRP *a2)
{
  unsigned __int64 v2; // rbx
  int v4; // r15d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // r13
  unsigned __int64 Options; // rdx
  unsigned __int64 Length; // r8
  unsigned int v9; // ebp
  unsigned int v10; // esi
  signed int v11; // eax
  unsigned int i; // r12d
  char QuadPart_high; // al
  unsigned int j; // ebp
  unsigned int k; // ebp

  v2 = 0LL;
  v4 = a1;
  if ( !*(_DWORD *)(a1 + 5488) || !*(_DWORD *)(a1 + 5492) )
    goto LABEL_32;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (((unsigned int)Length | CurrentStackLocation->Parameters.Create.Options) & 0x1FF) != 0 )
  {
LABEL_31:
    v11 = -1073741811;
    goto LABEL_33;
  }
  if ( HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) == 1
    || HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) == 2 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    if ( HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) != 3 )
    {
      if ( HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) == 4 )
      {
LABEL_10:
        v9 = 1;
        v10 = (unsigned int)Length >> 9;
        goto LABEL_13;
      }
      if ( HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) != 6 )
      {
        if ( HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) == 7 )
          goto LABEL_10;
LABEL_32:
        v11 = -1073741808;
        goto LABEL_33;
      }
    }
    v10 = 1;
    v9 = (unsigned int)Options >> 9;
  }
LABEL_13:
  if ( Options < (unsigned __int64)v9 << 9 )
    goto LABEL_31;
  if ( Length >= (unsigned __int64)v10 << 9 )
  {
    for ( i = 0; i < 0x14; ++i )
    {
      LOBYTE(Length) = -75;
      v11 = sub_1C0038AB8(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v9);
      if ( v11 != -2147483631 )
        break;
    }
    if ( v11 >= 0 )
    {
      QuadPart_high = HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart);
      if ( QuadPart_high != 3 && QuadPart_high != 6 )
        goto LABEL_26;
      memset_0(MasterIrp, 0, 0x1FFuLL);
      HIBYTE(MasterIrp[2].Overlay.AllocationSize.QuadPart) = 5;
      for ( j = 0; j < 0x14; ++j )
      {
        LOBYTE(Length) = -75;
        v11 = sub_1C0038AB8(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, 1);
        if ( v11 != -2147483631 )
          break;
      }
      if ( v11 >= 0 )
      {
LABEL_26:
        for ( k = 0; k < 0x14; ++k )
        {
          LOBYTE(Length) = -94;
          v11 = sub_1C0038AB8(v4, (_DWORD)a2, Length, (_DWORD)MasterIrp, v10);
          if ( v11 != -2147483631 )
            break;
        }
        if ( v11 >= 0 )
          v2 = (unsigned __int64)v10 << 9;
      }
    }
  }
  else
  {
    v11 = -2147483643;
  }
LABEL_33:
  a2->IoStatus.Information = v2;
  return sub_1C0003440(a2, 0, v11);
}
