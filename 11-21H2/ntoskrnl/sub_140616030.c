/*
 * XREFs of sub_140616030 @ 0x140616030
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_140616030(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v21; // rdx
  _QWORD **v22; // rdi
  _QWORD *v23; // rbx
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v14 = sub_140604844(309);
  if ( !v14 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v14 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v17 = *((_DWORD *)v14 + 3);
  if ( (v17 & 0x18) == 0 )
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v18 = sub_140628C98(v13, v12, v15, v16);
    goto LABEL_12;
  }
  v18 = retaddr;
LABEL_12:
  *(_QWORD *)&v24 = v18;
LABEL_13:
  BYTE9(v25) = WaitMode;
  BYTE8(v25) = Alertable;
  *(_QWORD *)&v25 = Timeout;
  *((_QWORD *)&v24 + 1) = WaitBlockArray;
  LODWORD(v27) = Count;
  *((_QWORD *)&v26 + 1) = Object;
  LODWORD(v26) = WaitType;
  HIDWORD(v25) = WaitReason;
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v24, v12);
  }
LABEL_18:
  result = KeWaitForMultipleObjects(Count, Object, WaitType, WaitReason, WaitMode, Alertable, Timeout, WaitBlockArray);
  HIDWORD(v27) = result;
  if ( v14 )
  {
    v22 = (_QWORD **)(v14 + 6);
    v23 = *v22;
    if ( *v22 != v22 )
    {
      do
      {
        if ( v23 != (_QWORD *)16 )
          sub_14042A5E0(&v24, v21);
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v22 );
      return HIDWORD(v27);
    }
  }
  return result;
}
