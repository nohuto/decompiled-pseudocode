/*
 * XREFs of sub_140627F70 @ 0x140627F70
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140627F70(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v19; // rdx
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v12 = sub_140604844(638);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)v12 + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v16 = sub_140628C98(v11, v10, v13, v14);
    goto LABEL_12;
  }
  v16 = retaddr;
LABEL_12:
  *(_QWORD *)&v22 = v16;
LABEL_13:
  *(_QWORD *)&v23 = Data;
  DWORD2(v22) = DataSize;
  *((_QWORD *)&v24 + 1) = KeyHandle;
  *(_QWORD *)&v24 = ValueName;
  *((_QWORD *)&v23 + 1) = __PAIR64__(TitleIndex, Type);
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v22, v10);
  }
LABEL_18:
  result = ZwSetValueKey(KeyHandle, ValueName, TitleIndex, Type, Data, DataSize);
  LODWORD(v25) = result;
  if ( v12 )
  {
    v20 = (_QWORD **)(v12 + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          sub_14042A5E0(&v22, v19);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return v25;
    }
  }
  return result;
}
