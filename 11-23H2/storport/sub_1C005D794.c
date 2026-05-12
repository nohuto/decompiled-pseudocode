/*
 * XREFs of sub_1C005D794 @ 0x1C005D794
 * Callers:
 *     sub_1C00266DA @ 0x1C00266DA (sub_1C00266DA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C005D794(__int64 a1, IRP *a2, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r15d
  __int64 Options; // rbp
  int v9; // edi
  struct _IRP *v10; // rcx
  USHORT v11; // ax
  struct _IRP *MasterIrp; // rbx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  unsigned __int16 Size; // ax
  unsigned __int64 v17; // r8
  _DWORD *p_MdlAddress; // rsi
  unsigned int v19; // edx
  unsigned __int16 v20; // ax
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rcx
  const char *i; // rdx
  __int128 v25; // [rsp+20h] [rbp-68h] BYREF
  __int128 v26; // [rsp+30h] [rbp-58h]
  __int128 v27; // [rsp+40h] [rbp-48h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v25 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v26 = 0LL;
  v27 = 0LL;
  v9 = 0;
  if ( !IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x30 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 48 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      goto LABEL_16;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x28 )
    return 3221225485LL;
  v10 = a2->AssociatedIrp.MasterIrp;
  if ( v10->Type != 40 )
    return 3221225561LL;
  v11 = v10->Size;
  if ( (v11 & 4) != 0 && !LODWORD(v10->MdlAddress) || (v11 & 2) != 0 && !LODWORD(v10->MdlAddress) )
    return 3221225485LL;
  MasterIrp = (struct _IRP *)&v25;
  v13 = *(_OWORD *)&v10->Type;
  *((_QWORD *)&v27 + 1) = v10->ThreadListEntry.Flink;
  v14 = *(_QWORD *)&v10->Flags;
  *(_QWORD *)&v27 = v10->AssociatedIrp.MasterIrp;
  *((_QWORD *)&v26 + 1) = *(&v10->Flags + 1);
  v25 = v13;
  *(_QWORD *)&v26 = v14;
LABEL_16:
  if ( a3 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    if ( (*(unsigned int *)(v21 + 152) & (__int64)MasterIrp->AssociatedIrp.MasterIrp) == 0 )
    {
      p_MdlAddress = &MasterIrp->MdlAddress;
      goto LABEL_30;
    }
    return 3221225485LL;
  }
  v17 = (unsigned __int64)MasterIrp->AssociatedIrp.MasterIrp;
  p_MdlAddress = &MasterIrp->MdlAddress;
  if ( (unsigned __int16)MasterIrp->Type > v17 && *p_MdlAddress )
    return 3221225485LL;
  if ( v17 > 0xFFFFFFFF )
    return 3221225621LL;
  v19 = v17 + *p_MdlAddress;
  if ( v19 < (unsigned int)v17 )
    return 3221225621LL;
  v20 = MasterIrp->Size;
  if ( (v20 & 4) != 0 && v19 > (unsigned int)Options )
    return 3221225485LL;
  if ( (v20 & 2) != 0 && v19 > Length )
    return 3221225485LL;
  v21 = *(_QWORD *)(a1 + 8);
  if ( ((__int64)((__int64)a2->AssociatedIrp.MasterIrp + v17) & *(unsigned int *)(v21 + 152)) != 0 )
    return 3221225485LL;
LABEL_30:
  if ( (*(_DWORD *)(v21 + 152) & *p_MdlAddress) != 0 || (unsigned int)(HIDWORD(MasterIrp->MdlAddress) - 1) > 0x1A5DF )
    return 3221225485LL;
  if ( Length > (unsigned int)Options )
    memset_0((char *)a2->AssociatedIrp.MasterIrp + Options, 0, Length - (unsigned int)Options);
  v22 = BYTE6(MasterIrp->ThreadListEntry.Blink);
  if ( v22 == -76 )
    return byte_1C0093B06 == 0 ? 0xC00000BB : 0;
  if ( v22 == -15 )
  {
    if ( !a3 )
    {
      if ( byte_1C0093B06 )
      {
        if ( (unsigned int)Options >= 0x230 && *p_MdlAddress >= 0x200u )
        {
          v23 = (char *)MasterIrp->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
          if ( (*v23 & 1) == 0 )
          {
            for ( i = "AutoATAWindowsString12345678901";
                  *(unsigned __int8 *)i == i[v23 + 2 - "AutoATAWindowsString12345678901"];
                  ++i )
            {
              if ( (unsigned int)++v9 >= 0x20 )
                return 0LL;
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  return 0LL;
}
