/*
 * XREFs of sub_1C0026040 @ 0x1C0026040
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0026040(__int64 a1, __int64 a2, __int16 *a3)
{
  char v4; // si
  UNICODE_STRING *p_FileName; // rbp
  __int64 v7; // rdi
  IRP *MasterIrp; // rdi
  __int64 v9; // rax
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v11; // ecx
  PFILE_OBJECT OriginalFileObject; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG Options; // edx
  ULONG Length; // eax
  KIRQL CurrentIrql; // al
  __int16 v17; // cx

  v4 = 0;
  p_FileName = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  if ( (unsigned __int16)(*a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 96);
    if ( !v7 || *(_DWORD *)v7 != 523124044 || (MasterIrp = *(IRP **)(v7 + 768)) == 0LL )
    {
      MasterIrp = *(IRP **)(a2 + 80);
      goto LABEL_14;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 48);
    if ( !v9 || *(_DWORD *)v9 != 523124044 )
      goto LABEL_47;
    MasterIrp = *(IRP **)(v9 + 768);
    if ( !MasterIrp )
    {
      MasterIrp = *(IRP **)(v9 + 176);
LABEL_14:
      if ( !MasterIrp )
        goto LABEL_47;
    }
  }
  if ( (MasterIrp->Flags & 8) == 0 || (MasterIrp = MasterIrp->AssociatedIrp.MasterIrp) != 0LL )
  {
    IoPriorityHint = IoGetIoPriorityHint(MasterIrp);
    *((_DWORD *)a3 + 2) = 0;
    v11 = 0;
    *((_DWORD *)a3 + 1) = IoPriorityHint;
    if ( (MasterIrp->Flags & 1) != 0 )
    {
      *((_DWORD *)a3 + 2) = 1;
      v11 = 1;
    }
    if ( (MasterIrp->Flags & 0x42) != 0 )
    {
      v11 |= 2u;
      *((_DWORD *)a3 + 2) = v11;
    }
    OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (OriginalFileObject->Flags & 0x20) != 0 )
      {
        v11 |= 4u;
        *((_DWORD *)a3 + 2) = v11;
      }
      if ( (OriginalFileObject->Flags & 0x18000) != 0 )
      {
        v11 |= 8u;
        *((_DWORD *)a3 + 2) = v11;
      }
      if ( (OriginalFileObject->Flags & 0x10) != 0 )
        *((_DWORD *)a3 + 2) = v11 | 0x10;
      p_FileName = &OriginalFileObject->FileName;
    }
    else
    {
      *((_DWORD *)a3 + 2) = v11 | 0x40;
    }
    CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation )
    {
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
        *((_DWORD *)a3 + 3) = Options;
        Length = CurrentStackLocation->Parameters.Read.Length;
LABEL_36:
        *((_BYTE *)a3 + 20) = 0;
        goto LABEL_37;
      }
      if ( CurrentStackLocation->MajorFunction == 4 )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
        *((_DWORD *)a3 + 3) = Options;
        Length = CurrentStackLocation->Parameters.Read.Length;
        *((_BYTE *)a3 + 20) = 1;
LABEL_37:
        *((_DWORD *)a3 + 4) = Length;
        if ( (Options & 0xFFFF0000) == 0x56530000 )
        {
          *((_DWORD *)a3 + 2) |= 0x80u;
        }
        else if ( CurrentStackLocation && CurrentStackLocation->MajorFunction == 4 && Options )
        {
          *((_DWORD *)a3 + 2) |= 0x100u;
        }
        if ( *a3 == 2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          *((_QWORD *)a3 + 3) = p_FileName;
          if ( CurrentIrql > 2u )
            *((_DWORD *)a3 + 8) = -1;
          else
            *((_DWORD *)a3 + 8) = IoGetRequestorProcessId(MasterIrp);
        }
        goto LABEL_48;
      }
    }
    Options = 0;
    *((_DWORD *)a3 + 3) = 0;
    Length = 0;
    goto LABEL_36;
  }
LABEL_47:
  v4 = 1;
LABEL_48:
  v17 = *a3;
  if ( (unsigned __int16)(*a3 - 1) <= 1u )
    a3[1] = 40;
  if ( v4 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *((_BYTE *)a3 + 20) = 0;
    *((_DWORD *)a3 + 4) = 0;
    *((_DWORD *)a3 + 1) = 2;
    if ( v17 == 2 )
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_DWORD *)a3 + 8) = 0;
    }
  }
  return 0LL;
}
