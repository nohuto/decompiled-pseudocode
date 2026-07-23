/*
 * XREFs of ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F7288
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14041C340 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14041CFA0 (ZwQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpQueryPortableWorkspaceEfiLauncherInformation(bool *a1, int a2, _DWORD *a3)
{
  unsigned int *v5; // rsi
  ULONG *v6; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v9; // eax
  bool v10; // al
  unsigned int *Pool2; // rax
  NTSTATUS v12; // eax
  ULONG *v13; // rax
  unsigned int *v14; // r8
  unsigned int *i; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  ULONG Count; // [rsp+28h] [rbp-40h] BYREF
  unsigned int *v19; // [rsp+30h] [rbp-38h]
  ULONG *v20; // [rsp+38h] [rbp-30h]
  ULONG BufferLength; // [rsp+88h] [rbp+20h] BYREF

  BufferLength = 0;
  Count = 0;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  if ( dword_140C31AF0 != 2 )
  {
    v7 = -1073741821;
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
    *a3 = 1;
    v7 = -1073741820;
    goto LABEL_3;
  }
  v9 = ZwEnumerateBootEntries(0LL, &BufferLength);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( v9 != -1073741789 )
      goto LABEL_3;
    Pool2 = (unsigned int *)ExAllocatePool2(257LL, BufferLength, 1868983881LL);
    v5 = Pool2;
    v19 = Pool2;
    if ( !Pool2 )
      goto LABEL_14;
    v7 = ZwEnumerateBootEntries(Pool2, &BufferLength);
    if ( v7 < 0 )
      goto LABEL_3;
    v12 = ZwQueryBootEntryOrder(0LL, &Count);
    v7 = v12;
    if ( v12 >= 0 )
      goto LABEL_11;
    if ( v12 != -1073741789 )
      goto LABEL_3;
    v13 = (ULONG *)ExAllocatePool2(257LL, 4LL * Count, 1868983881LL);
    v6 = v13;
    v20 = v13;
    if ( !v13 )
    {
LABEL_14:
      v7 = -1073741670;
      goto LABEL_3;
    }
    v7 = ZwQueryBootEntryOrder(v13, &Count);
    if ( v7 < 0 )
      goto LABEL_3;
    v14 = 0LL;
    for ( i = v5; ; i = (unsigned int *)((char *)i + v17) )
    {
      if ( i[7] == 16 )
      {
        v16 = *((_QWORD *)i + 4) - PORTABLE_WORKSPACE_LAUNCHER_EFI_ENTRY_ID;
        if ( !v16 )
          v16 = *((_QWORD *)i + 5) - 0x1536958043F38A81LL;
        if ( !v16 )
          break;
      }
      v17 = *i;
      if ( !(_DWORD)v17 )
        goto LABEL_27;
    }
    v14 = i + 1;
LABEL_27:
    if ( v14 )
    {
      v10 = v14[2] == *v6;
      goto LABEL_29;
    }
  }
LABEL_11:
  v10 = 0;
LABEL_29:
  *a1 = v10;
  *a3 = 1;
  v7 = 0;
LABEL_3:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6F666E49u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6F666E49u);
  return (unsigned int)v7;
}
