/*
 * XREFs of IoRetrievePriorityInfo @ 0x14033FD80
 * Callers:
 *     <none>
 * Callees:
 *     IoGetIoPriorityHint @ 0x140221E10 (IoGetIoPriorityHint.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // r14d
  int v5; // ebp
  _DWORD *FileObjectExtension; // rax
  IO_PRIORITY_HINT v9; // edx
  ULONG v10; // eax
  ULONG v11; // edx
  int v13; // edx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v16; // rcx
  __int64 i; // rcx
  __int64 v18; // r9
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( !Irp || (Irp->Flags & 0xE0000) == 0 )
  {
    if ( FileObject )
    {
      FileObjectExtension = FileObject->FileObjectExtension;
      if ( FileObjectExtension )
      {
        v13 = FileObjectExtension[20];
        if ( v13 )
        {
          v9 = v13 - 1;
        }
        else
        {
          if ( !Thread )
            goto LABEL_42;
          v9 = (unsigned int)sub_14033D760((__int64)Thread);
        }
        goto LABEL_7;
      }
      if ( Thread )
      {
        v9 = (*((_DWORD *)Thread + 344) >> 9) & 7;
        if ( (*(_DWORD *)(*((_QWORD *)Thread + 68) + 1124LL) & 0x100000) != 0 )
        {
          v9 = IoPriorityVeryLow;
        }
        else if ( (unsigned int)v9 >= IoPriorityNormal )
        {
LABEL_7:
          PriorityInfo->IoPriority = v9;
          goto LABEL_8;
        }
        if ( Thread == KeGetCurrentThread() && *((_DWORD *)Thread + 360) )
          v9 = IoPriorityNormal;
        goto LABEL_7;
      }
    }
    else if ( Thread )
    {
      PriorityInfo->IoPriority = sub_14033D760((__int64)Thread);
      goto LABEL_9;
    }
LABEL_42:
    *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
    return 0;
  }
  PriorityInfo->IoPriority = IoGetIoPriorityHint(Irp);
LABEL_8:
  if ( !Thread )
    goto LABEL_42;
LABEL_9:
  if ( *((char *)Thread + 195) >= 16 || !*((_QWORD *)Thread + 13) )
    goto LABEL_11;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = *((_QWORD *)Thread + 13);
  if ( v16 )
  {
    for ( i = *((unsigned int *)CurrentPrcb + 54) + v16; i; i = *(_QWORD *)(i + 408) )
    {
      v4 = (*(unsigned __int8 *)(i + 112) >> 3) & 1;
      if ( v4 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(v19);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v4 )
    v10 = 1;
  else
LABEL_11:
    v10 = *((char *)Thread + 563);
  PriorityInfo->ThreadPriority = v10;
  v11 = (*((_DWORD *)Thread + 344) >> 12) & 7;
  if ( (*(_DWORD *)(*((_QWORD *)Thread + 68) + 1124LL) & 0x100000) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)Thread + 344) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
