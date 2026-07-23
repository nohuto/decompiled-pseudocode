/*
 * XREFs of sub_1406C8DC0 @ 0x1406C8DC0
 * Callers:
 *     sub_1406C8B78 @ 0x1406C8B78 (sub_1406C8B78.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406C8DC0(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&stru_140C546A8);
  dword_140C546E4 = 2;
  v7 = (unsigned int *)qword_140C54698;
  if ( qword_140C54698 == &qword_140C54698 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_140C54698 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140C54698;
      if ( *((PVOID **)qword_140C54698 + 1) != &qword_140C54698 || *(PVOID *)(v9 + 8) != qword_140C54698 )
        __fastfail(3u);
      qword_140C54698 = *(PVOID *)qword_140C54698;
      *(_QWORD *)(v9 + 8) = &qword_140C54698;
      --dword_140C546E0;
      KeReleaseGuardedMutex(&stru_140C546A8);
      v6 = 0;
      if ( *((_BYTE *)KeGetCurrentThread() + 562) )
        ProbeForWrite(a1, v4, 8u);
      memmove(a1, v7 + 4, v7[6]);
      *a3 = v7[6];
      ExFreePoolWithTag(v7, 0);
      v10 = 0;
    }
  }
  if ( v6 )
    KeReleaseGuardedMutex(&stru_140C546A8);
  return v10;
}
