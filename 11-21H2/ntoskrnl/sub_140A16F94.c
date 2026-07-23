/*
 * XREFs of sub_140A16F94 @ 0x140A16F94
 * Callers:
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     sub_14036BFE0 @ 0x14036BFE0 (sub_14036BFE0.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     sub_140649CA0 @ 0x140649CA0 (sub_140649CA0.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A17288 @ 0x140A17288 (sub_140A17288.c)
 */

__int64 __fastcall sub_140A16F94(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        _WORD *a3,
        int a4,
        _WORD *a5,
        unsigned __int16 a6)
{
  int v8; // ebx
  __int64 v9; // rcx
  SIZE_T v10; // rdx
  PVOID v11; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v15; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  while ( 1 )
  {
    *((_QWORD *)a1 + 2) = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *((_QWORD *)a1 + 2) = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
LABEL_20:
    sub_140A17288(a1);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_20;
  }
  v15 = *a2;
  v8 = sub_1402DE190(v15, a6, (__int16 *)&v15);
  if ( v8 < 0 )
    goto LABEL_19;
  v8 = sub_1402DE190(v15, 4, (__int16 *)&v15);
  if ( v8 < 0 )
    goto LABEL_19;
  v10 = v15;
  a1[1] = v15;
  *a1 = 0;
  v11 = sub_14075B444(v9, v10);
  *((_QWORD *)a1 + 1) = v11;
  if ( !v11 )
  {
    v8 = -1073741801;
    goto LABEL_20;
  }
  v8 = sub_140208AD8(a1, a2);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) != 92 )
  {
    v8 = sub_14036BFE0(a1, &dword_1400126A8);
    if ( v8 < 0 )
      goto LABEL_19;
  }
  if ( a5 && a6 && (v8 = sub_140649CA0(a1, a5, a6), v8 < 0)
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)a1,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v8 = ZwOpenFile((PHANDLE)a1 + 3, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u),
        v8 < 0) )
  {
LABEL_19:
    sub_1406E0C3C(1LL, (__int64)"AslpPathWildcardAllocMatchNode");
    goto LABEL_20;
  }
  return (unsigned int)v8;
}
