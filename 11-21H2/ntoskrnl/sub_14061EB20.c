/*
 * XREFs of sub_14061EB20 @ 0x14061EB20
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_14061EB20(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
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
  _QWORD v23[10]; // [rsp+48h] [rbp-31h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+47h]

  memset(v23, 0, 0x48uLL);
  v13 = sub_140604844(509);
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
  v23[0] = v17;
LABEL_13:
  v23[3] = Class;
  LODWORD(v23[2]) = CreateOptions;
  v23[1] = Disposition;
  v23[7] = KeyHandle;
  LODWORD(v23[6]) = DesiredAccess;
  v23[5] = ObjectAttributes;
  LODWORD(v23[4]) = TitleIndex;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v23, v11);
  }
LABEL_18:
  result = ZwCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition);
  LODWORD(v23[8]) = result;
  if ( v13 )
  {
    v21 = (_QWORD **)(v13 + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          sub_14042A5E0(v23, v20);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return v23[8];
    }
  }
  return result;
}
