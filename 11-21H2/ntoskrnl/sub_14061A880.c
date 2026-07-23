/*
 * XREFs of sub_14061A880 @ 0x14061A880
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     PsSetCreateThreadNotifyRoutine @ 0x1408325E0 (PsSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __fastcall sub_14061A880(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v11; // rdx
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = sub_140604844(400);
  if ( !v4 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v3 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)v4 + 3);
  if ( (v7 & 0x18) == 0 )
  {
    if ( (v7 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v8 = sub_140628C98(v3, v2, v5, v6);
    goto LABEL_12;
  }
  v8 = retaddr;
LABEL_12:
  *(_QWORD *)&v14 = v8;
LABEL_13:
  *((_QWORD *)&v14 + 1) = NotifyRoutine;
  for ( i = (__int64 *)v4[4]; i != v4 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v14, v2);
  }
LABEL_18:
  result = PsSetCreateThreadNotifyRoutine(NotifyRoutine);
  LODWORD(v15) = result;
  if ( v4 )
  {
    v12 = (_QWORD **)(v4 + 6);
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        if ( v13 != (_QWORD *)16 )
          sub_14042A5E0(&v14, v11);
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != v12 );
      return v15;
    }
  }
  return result;
}
