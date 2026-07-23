/*
 * XREFs of sub_140610690 @ 0x140610690
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoRegisterDriverReinitialization @ 0x140855570 (IoRegisterDriverReinitialization.c)
 */

void __fastcall sub_140610690(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 *i; // rbx
  __int64 v14; // rdx
  _QWORD **v15; // rdi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v17 = 0LL;
  v18 = 0LL;
  v8 = sub_140604844(193);
  if ( !v8 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v7 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v8 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v11 = *((_DWORD *)v8 + 3);
  if ( (v11 & 0x18) == 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v12 = sub_140628C98(v7, v6, v9, v10);
    goto LABEL_12;
  }
  v12 = retaddr;
LABEL_12:
  *(_QWORD *)&v17 = v12;
LABEL_13:
  *((_QWORD *)&v18 + 1) = DriverObject;
  *(_QWORD *)&v18 = DriverReinitializationRoutine;
  *((_QWORD *)&v17 + 1) = Context;
  for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v17, v6);
  }
LABEL_18:
  IoRegisterDriverReinitialization(DriverObject, DriverReinitializationRoutine, Context);
  if ( v8 )
  {
    v15 = (_QWORD **)(v8 + 6);
    for ( j = *v15; j != v15; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        sub_14042A5E0(&v17, v14);
    }
  }
}
