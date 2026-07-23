/*
 * XREFs of sub_14091BF58 @ 0x14091BF58
 * Callers:
 *     sub_14091C3F0 @ 0x14091C3F0 (sub_14091C3F0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14091C758 @ 0x14091C758 (sub_14091C758.c)
 */

__int64 __fastcall sub_14091BF58(void *a1, void *a2, ULONG a3, _PRIVILEGE_SET **a4, _DWORD *a5)
{
  unsigned int *v5; // rdi
  NTSTATUS v6; // ebx
  struct _LOOKASIDE_LIST_EX *v7; // r9
  SIZE_T v8; // r12
  _PRIVILEGE_SET *v9; // rax
  _PRIVILEGE_SET *v10; // rsi
  _PRIVILEGE_SET *v11; // rax
  int v12; // r13d
  unsigned int v13; // r14d
  __int64 v14; // r15
  unsigned int v16; // [rsp+40h] [rbp-38h]
  _PRIVILEGE_SET *v17; // [rsp+48h] [rbp-30h]
  PVOID ppvBuffer; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN plsnRecord; // [rsp+58h] [rbp-20h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp-18h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp-10h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+50h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+58h] BYREF
  _PRIVILEGE_SET **v25; // [rsp+D8h] [rbp+60h]

  v25 = a4;
  ppvBuffer = a2;
  v5 = (unsigned int *)a2;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  pcbBuffer = a3;
  v6 = sub_14091C758(a2, a3);
  if ( v6 >= 0 )
  {
    v8 = v5[1];
    v16 = v5[12];
    v9 = (_PRIVILEGE_SET *)Allocate(PagedPool, v8, 0x20204D43u, v7);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, v8);
      v11 = v10;
      v12 = 0;
      v13 = v8;
      v17 = v10;
      if ( !v5[13] )
      {
        do
        {
          v14 = v5[14];
          if ( (unsigned int)v14 > v13 )
            break;
          memmove(v11, v5 + 16, (unsigned int)v14);
          v17 = (_PRIVILEGE_SET *)((char *)v17 + v14);
          v13 -= v14;
          if ( ++v12 >= v16 )
          {
            if ( v13 )
              break;
            v6 = 0;
            *v25 = v10;
            *a5 = v8;
            return (unsigned int)v6;
          }
          peRecordType = 1;
          v6 = ClfsReadNextLogRecord(
                 a1,
                 &ppvBuffer,
                 &pcbBuffer,
                 &peRecordType,
                 0LL,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &plsnRecord);
          if ( v6 < 0 )
            goto LABEL_11;
          v5 = (unsigned int *)ppvBuffer;
          v6 = sub_14091C758(ppvBuffer, pcbBuffer);
          if ( v6 < 0 )
            goto LABEL_11;
          v11 = v17;
        }
        while ( v5[13] == v12 );
      }
      v6 = -1073741762;
LABEL_11:
      SeFreePrivileges(v10);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
