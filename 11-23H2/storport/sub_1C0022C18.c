/*
 * XREFs of sub_1C0022C18 @ 0x1C0022C18
 * Callers:
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0018524 @ 0x1C0018524 (sub_1C0018524.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C0022C18(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *MasterIrp; // rsi
  size_t Length; // r15
  signed int v7; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // edi
  _DWORD Dst[2]; // [rsp+20h] [rbp-89h] BYREF
  __int128 *v15; // [rsp+28h] [rbp-81h]
  _BYTE Src[144]; // [rsp+30h] [rbp-79h] BYREF
  __int128 v17; // [rsp+C0h] [rbp+17h] BYREF

  memset_0(Dst, 0, 0x98uLL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v17 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !sub_1C0004890(a1, 13) )
    goto LABEL_2;
  v9 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_2:
      v7 = -1073741637;
LABEL_3:
      a2->IoStatus.Information = 0LL;
      return sub_1C0003440(a2, 0, v7);
    }
LABEL_10:
    v7 = 0;
    return sub_1C0003440(a2, 0, v7);
  }
  memset_0(MasterIrp, 0, Length);
  if ( (unsigned int)Length < 0x10 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v7 = -1073741789;
      goto LABEL_3;
    }
    *(_DWORD *)&MasterIrp->Type = 16;
    *(_DWORD *)(&MasterIrp->Size + 1) = 16;
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(a1 + 24);
  LOWORD(v17) = 1;
  DWORD1(v17) = 4;
  WORD1(v17) = *(_WORD *)(v10 + 56);
  WORD4(v17) = *(_WORD *)(a1 + 96);
  BYTE10(v17) = *(_BYTE *)(a1 + 98);
  Dst[0] = 1;
  v15 = &v17;
  Dst[1] = 152;
  v7 = sub_1C0018524(v10 + 336);
  if ( v7 < 0 )
    goto LABEL_3;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( Src[v12] );
  v13 = v12 + 12;
  *(_DWORD *)&MasterIrp->Type = 16;
  *(_DWORD *)(&MasterIrp->Size + 1) = v13;
  if ( (unsigned int)Length < v13 )
  {
LABEL_9:
    a2->IoStatus.Information = 8LL;
    goto LABEL_10;
  }
  do
    ++v11;
  while ( Src[v11] );
  LODWORD(MasterIrp->MdlAddress) = v11;
  memmove((char *)&MasterIrp->MdlAddress + 4, Src, (unsigned int)v11);
  a2->IoStatus.Information = v13;
  return sub_1C0003440(a2, 0, v7);
}
