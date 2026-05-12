/*
 * XREFs of ?PmIsConversionInProgress@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FE1C
 * Callers:
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmIsConversionInProgress(PDEVICE_OBJECT *a1, struct _PARTITION_EXTENSION *a2)
{
  _OWORD *Pool2; // rdi
  _DWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char *v15; // rcx
  int v16; // ebx
  __int64 v18; // rax
  unsigned int v19; // ecx

  Pool2 = (_OWORD *)ExAllocatePool2(258LL, 48LL, 1112108368LL);
  if ( Pool2 )
  {
    v5 = (_DWORD *)ExAllocatePool2(258LL, 56LL, 1112108368LL);
    if ( v5 )
    {
      v6 = 28;
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[2] = 0LL;
      *(_DWORD *)Pool2 = 28;
      *((_DWORD *)Pool2 + 1) = -2147483620;
      v7 = *((unsigned int *)Pool2 + 6);
      v8 = *((_QWORD *)a2 + 23);
      v9 = *((_QWORD *)a2 + 22);
      if ( (_DWORD)v7 )
      {
        v11 = v7 + *((_DWORD *)Pool2 + 5);
      }
      else
      {
        v10 = *((_DWORD *)Pool2 + 4);
        if ( v10 )
          v6 = v10 + *((_DWORD *)Pool2 + 3);
        v11 = (v6 + 7) & 0xFFFFFFF8;
      }
      if ( 48 - v11 >= 0x10 )
      {
        v12 = *((_DWORD *)Pool2 + 5);
        if ( !v12 )
        {
          *((_DWORD *)Pool2 + 5) = v11;
          v12 = v11;
        }
        v13 = v12;
        v14 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
        v15 = (char *)Pool2 + v13;
        *(_QWORD *)&v15[v14] = v9;
        *(_QWORD *)&v15[v14 + 8] = v8;
        *((_DWORD *)Pool2 + 6) += 16;
      }
      v16 = PmSendDeviceControl(a1[2], 0x2D9404u, Pool2, 0x30u, v5, 0x38u, 0);
      if ( v16 >= 0 )
      {
        if ( v5[1] != -2147483620
          || (v18 = (unsigned int)v5[7], (unsigned int)v18 < 0x24)
          || (unsigned int)v18 > 0x38
          || (v18 & 3) != 0
          || (v19 = v5[8], v19 < 0x14)
          || v19 > 56 - (int)v18 )
        {
          v16 = -1073739509;
        }
        else
        {
          *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)((char *)v5 + v18 + 4);
        }
      }
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v16 = -1073741670;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
