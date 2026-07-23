/*
 * XREFs of sub_140624100 @ 0x140624100
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140624100(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v20; // rdx
  _QWORD **v21; // rdi
  _QWORD *v22; // rbx
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v13 = sub_140604844(580);
  if ( !v13 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v13 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v16 = *((_DWORD *)v13 + 3);
  if ( (v16 & 0x18) == 0 )
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v17 = sub_140628C98(v12, v11, v14, v15);
    goto LABEL_12;
  }
  v17 = retaddr;
LABEL_12:
  *(_QWORD *)&v23 = v17;
LABEL_13:
  BYTE8(v24) = RestartScan;
  *(_QWORD *)&v24 = Context;
  *((_QWORD *)&v23 + 1) = ReturnLength;
  *((_QWORD *)&v25 + 1) = DirectoryHandle;
  *(_QWORD *)&v25 = Buffer;
  HIDWORD(v24) = Length;
  BYTE9(v24) = ReturnSingleEntry;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v23, v11);
  }
LABEL_18:
  result = ZwQueryDirectoryObject(
             DirectoryHandle,
             Buffer,
             Length,
             ReturnSingleEntry,
             RestartScan,
             Context,
             ReturnLength);
  LODWORD(v26) = result;
  if ( v13 )
  {
    v21 = (_QWORD **)(v13 + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          sub_14042A5E0(&v23, v20);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return v26;
    }
  }
  return result;
}
