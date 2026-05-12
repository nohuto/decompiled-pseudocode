/*
 * XREFs of sub_1C00221E0 @ 0x1C00221E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001C0C0 @ 0x1C001C0C0 (sub_1C001C0C0.c)
 *     sub_1C00222EC @ 0x1C00222EC (sub_1C00222EC.c)
 */

void __fastcall sub_1C00221E0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KDPC *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _KTIMER *v15; // rcx
  ULONG v16; // r9d
  LARGE_INTEGER v17; // rdx

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v9 = &::Dpc;
  v10 = v7 / 10000000;
  *(_QWORD *)&qword_1C0093B20 = v7 / 10000000;
  if ( Dpc == &::Dpc )
  {
    sub_1C00222EC();
    if ( dword_1C0093400 )
      v5 = 4;
    if ( dword_1C0093408 )
      v5 |= 0x10u;
    sub_1C001C0C0(v5 | 0x60, v11, v12, v13);
    v14 = qword_1C0093410;
    v15 = &Timer;
    v16 = 300000;
    goto LABEL_7;
  }
  v9 = &stru_1C00937A0;
  if ( Dpc == &stru_1C00937A0 )
  {
    sub_1C001C0C0(0x80u, v10, v7, v8);
    v14 = qword_1C0093420;
    v15 = &stru_1C0093760;
    v16 = 300000;
LABEL_7:
    v17.QuadPart = -v14;
LABEL_8:
    KeSetCoalescableTimer(v15, v17, 0, v16, v9);
    return;
  }
  v9 = &stru_1C00936E0;
  if ( Dpc == &stru_1C00936E0 )
  {
    sub_1C001C0C0(3u, v10, v7, v8);
    v17.QuadPart = -138000000000LL;
    v15 = &stru_1C00935A0;
    v16 = 300000;
    goto LABEL_8;
  }
  v9 = &stru_1C00935E0;
  if ( Dpc == &stru_1C00935E0 )
  {
    sub_1C001C0C0(8u, v10, v7, v8);
    v17.QuadPart = -864000000000LL;
    v15 = &stru_1C00936A0;
    v16 = 900000;
    goto LABEL_8;
  }
  v9 = &stru_1C0093720;
  if ( Dpc == &stru_1C0093720 )
  {
    sub_1C001C0C0(0x100u, v10, v7, v8);
    v14 = qword_1C0093480;
    v15 = &stru_1C0093660;
    v16 = 900000;
    goto LABEL_7;
  }
}
