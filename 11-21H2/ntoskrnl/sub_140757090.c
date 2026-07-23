/*
 * XREFs of sub_140757090 @ 0x140757090
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     NtMapViewOfSection @ 0x1406FB000 (NtMapViewOfSection.c)
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     sub_14092AAC4 @ 0x14092AAC4 (sub_14092AAC4.c)
 *     sub_14092AB78 @ 0x14092AB78 (sub_14092AB78.c)
 */

int __fastcall sub_140757090(
        PVOID Object,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *v12; // rbx
  __int64 v13; // rbx
  PIMAGE_NT_HEADERS v14; // rcx
  _QWORD v16[34]; // [rsp+30h] [rbp-138h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 562) )
  {
    v11 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)v11 + 344);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( *((_QWORD *)Object + 175) )
      {
        v12 = KeGetCurrentThread();
        if ( (*((_DWORD *)v12 + 29) & 0x400) != 0 || *((_BYTE *)v12 + 586) == 1 )
          v13 = 0LL;
        else
          v13 = *((_QWORD *)v12 + 30);
        if ( v13 && Object == *((PVOID *)v11 + 68) )
        {
          LODWORD(CurrentThread) = sub_14092AB78(v13);
          if ( (_DWORD)CurrentThread )
            return (int)CurrentThread;
          v16[9] = v13 + 40;
        }
        if ( a2 )
          v16[6] = sub_14092AAC4(a2);
        else
          v16[6] = 0LL;
        v16[7] = a3;
        v16[8] = __PAIR64__(a7, a6);
        if ( a3 )
          v14 = RtlImageNtHeader(a3);
        else
          v14 = 0LL;
        if ( v14 )
          v16[8] = *(_QWORD *)&v14->FileHeader.PointerToSymbolTable;
        v16[0] = 0x800500028LL;
        LODWORD(v16[5]) = 5;
        LODWORD(CurrentThread) = sub_14092A070(Object);
        if ( v16[6] )
          LODWORD(CurrentThread) = ObCloseHandle((HANDLE)v16[6], 0);
      }
    }
  }
  return (int)CurrentThread;
}
