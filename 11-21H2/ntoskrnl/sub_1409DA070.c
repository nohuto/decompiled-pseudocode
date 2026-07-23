/*
 * XREFs of sub_1409DA070 @ 0x1409DA070
 * Callers:
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062AE30 @ 0x14062AE30 (sub_14062AE30.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_14096A278 @ 0x14096A278 (sub_14096A278.c)
 */

__int64 __fastcall sub_1409DA070(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  BOOL v8; // r14d
  struct _EX_RUNDOWN_REF *v9; // rdi
  int v10; // ebx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  void *v14; // rdi

  v8 = a4 != 0;
  v9 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)KeGetCurrentThread() + 23);
  if ( !sub_140347810(v9 + 139) )
    return (unsigned int)-1073741558;
  sub_1402AD030(v9 + 139);
  if ( (*(_BYTE *)(a1 + 106) & 1) != 0 )
  {
    v10 = -1073741558;
    goto LABEL_11;
  }
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 96)) )
  {
    v11 = a3 << 12;
    v12 = a2 << 12;
    v13 = MmSecureVirtualMemoryEx(v12, v11, 1, 10);
    v14 = (void *)v13;
    if ( v13 )
    {
      v10 = sub_14096A278(v12, v11, v13, v8);
      if ( v10 >= 0 )
      {
        v10 = 0;
        *a5 = v14;
        return (unsigned int)v10;
      }
      MmUnsecureVirtualMemory(v14);
    }
    else
    {
      v10 = -1073741670;
    }
LABEL_11:
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 96));
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741558;
}
