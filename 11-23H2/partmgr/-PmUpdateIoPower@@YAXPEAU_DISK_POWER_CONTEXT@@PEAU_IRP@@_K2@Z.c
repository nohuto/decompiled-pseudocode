/*
 * XREFs of ?PmUpdateIoPower@@YAXPEAU_DISK_POWER_CONTEXT@@PEAU_IRP@@_K2@Z @ 0x1C0001340
 * Callers:
 *     ?PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001010 (-PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     McTemplateK0pxxxquu_EtwWriteTransfer @ 0x1C000CB2E (McTemplateK0pxxxquu_EtwWriteTransfer.c)
 *     McTemplateK0xxx_EtwWriteTransfer @ 0x1C000FBA4 (McTemplateK0xxx_EtwWriteTransfer.c)
 */

void __fastcall PmUpdateIoPower(
        struct _DISK_POWER_CONTEXT *a1,
        struct _IRP *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v7; // rbx
  LARGE_INTEGER ByteOffset; // rbp
  __int64 Information_low; // r14
  LONGLONG v10; // rdi
  unsigned __int64 v11; // r11
  signed __int32 v12; // edx
  __int64 v13; // r15
  signed __int32 v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  char v17; // r13
  char v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  PEPROCESS RequestorProcess; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  PEPROCESS v27; // rbp

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 3) > 1u )
  {
    if ( CurrentStackLocation->MajorFunction != 9 )
      return;
    ByteOffset.QuadPart = 0LL;
    LODWORD(Information_low) = 0;
    v10 = 0LL;
  }
  else
  {
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    Information_low = LODWORD(a2->IoStatus.Information);
    v10 = Information_low + ByteOffset.QuadPart;
  }
  v11 = *((_QWORD *)a1 + 27);
  v12 = *((_DWORD *)a1 + 58);
  v13 = *((_QWORD *)a1 + 28);
  if ( v11 < a3 && v11 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 27, a3, v11) )
  {
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, 0, v12);
    *((_QWORD *)a1 + 28) = v10;
    v15 = a3 - a4;
    v16 = a3 - v11;
    v17 = v14;
    if ( v15 < v11 )
      a4 = v16;
    if ( v14 )
    {
      v18 = 1;
      v19 = 32LL * (unsigned int)(v14 - 1);
      v20 = a4;
      v7 = *(_QWORD *)((char *)a1 + v19 + 16);
      if ( a4 >= *(_QWORD *)((char *)a1 + v19 + 8) )
        v20 = *(_QWORD *)((char *)a1 + v19 + 8);
      a4 -= v20;
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 9 )
      {
        v18 = 1;
        goto LABEL_30;
      }
      v18 = ByteOffset.QuadPart != v13;
    }
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      if ( (unsigned int)Information_low >= 0x10000 )
      {
        if ( v18 )
          v21 = *((unsigned int *)a1 + 46);
        else
          v21 = *((unsigned int *)a1 + 48);
      }
      else if ( v18 )
      {
        v21 = *((unsigned int *)a1 + 42);
      }
      else
      {
        v21 = *((unsigned int *)a1 + 44);
      }
LABEL_16:
      v22 = a4 * v21 + v7;
      RequestorProcess = IoGetRequestorProcess(a2);
      v27 = RequestorProcess;
      if ( (Microsoft_Windows_PartitionEnableBits & 2) != 0 )
        McTemplateK0pxxxquu_EtwWriteTransfer(
          v25,
          v24,
          v26,
          (_DWORD)RequestorProcess,
          v22,
          a4,
          v10,
          Information_low,
          v17,
          v18);
      PsUpdateComponentPower(v27, 1LL, v22 / 0x2710);
      return;
    }
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      if ( (unsigned int)Information_low >= 0x10000 )
      {
        if ( v18 )
          v21 = *((unsigned int *)a1 + 47);
        else
          v21 = *((unsigned int *)a1 + 49);
      }
      else if ( v18 )
      {
        v21 = *((unsigned int *)a1 + 43);
      }
      else
      {
        v21 = *((unsigned int *)a1 + 45);
      }
      goto LABEL_16;
    }
LABEL_30:
    v21 = *((unsigned int *)a1 + 50);
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_PartitionEnableBits & 2) != 0 )
    McTemplateK0xxx_EtwWriteTransfer((_DWORD)a1, v12, a3, v11, *((_QWORD *)a1 + 27), a3);
}
