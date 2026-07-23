/*
 * XREFs of sub_14065FA0C @ 0x14065FA0C
 * Callers:
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_140945380 @ 0x140945380 (sub_140945380.c)
 *     sub_140959330 @ 0x140959330 (sub_140959330.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D20D4 @ 0x1402D20D4 (sub_1402D20D4.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14076729C @ 0x14076729C (sub_14076729C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_1409508E0 @ 0x1409508E0 (sub_1409508E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14065FA0C(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  char *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  PVOID v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  char *Pool2; // rax
  int v17; // ebx
  int v18; // edi
  NTSTATUS v19; // ebx
  char *v20; // r13
  unsigned int v21; // ecx
  int v23; // ecx
  _WORD *v24; // rax
  int v25; // [rsp+48h] [rbp-59h]
  int v26; // [rsp+50h] [rbp-51h]
  char v27; // [rsp+78h] [rbp-29h]
  _DWORD v28[3]; // [rsp+7Ch] [rbp-25h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF

  v7 = a5 & 8;
  v28[0] = 0;
  memset(&Event, 0, sizeof(Event));
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v27 = 0;
  v11 = 0LL;
  *(_DWORD *)a2 = 0;
  if ( (a5 & 8) != 0 )
    sub_1402D2774(&stru_14003B550, a1);
  v12 = (_QWORD *)sub_140779C10(a1, 1131441744LL);
  Object = v12;
  if ( !v12 )
  {
    v20 = a2;
    v19 = -1073741810;
    goto LABEL_27;
  }
  v13 = *(PVOID *)(v12[39] + 40LL);
  if ( !v13 )
  {
    v19 = -1073741810;
LABEL_35:
    v20 = a2;
    goto LABEL_24;
  }
  if ( v13 == qword_140C46278 )
  {
    v19 = -1073741790;
    goto LABEL_35;
  }
  v14 = *(unsigned int *)a4;
  if ( !(_DWORD)v14 )
  {
    v17 = 1;
    goto LABEL_9;
  }
  v15 = (unsigned int)v14;
  Pool2 = (char *)ExAllocatePool2(256LL, v14 + 20, 538996816LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    v19 = -1073741670;
    goto LABEL_35;
  }
  memset(Pool2, 0, v15 + 20);
  v11 = (unsigned __int16 *)(v10 + 4);
  *((_WORD *)v10 + 2) = 0;
  *(_QWORD *)(v10 + 12) = v10 + 20;
  v17 = 0;
  *((_WORD *)v10 + 3) = *a4;
  v27 = 1;
LABEL_9:
  if ( v7 && a6 )
    v17 = 1;
  v28[1] = (a5 & 0xB) != 0;
  if ( (a5 & 2) != 0 )
  {
    v18 = 22;
  }
  else if ( v7 )
  {
    v18 = 47;
  }
  else
  {
    v18 = 21;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v19 = sub_14076729C(
          Object,
          v17,
          v18,
          0,
          (__int64)&Event,
          v25,
          v26,
          (__int64)v28,
          (__int64)v10,
          (__int64)v11,
          (__int64)&P);
  if ( v19 >= 0 )
  {
    v19 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
    if ( v19 != 257 )
      goto LABEL_15;
    v9 = (volatile __int32 *)P;
    if ( (unsigned int)sub_1409508E0(P) )
    {
      v20 = a2;
      v19 = -1073741536;
      goto LABEL_24;
    }
    if ( _InterlockedExchange(v9 + 17, 1) )
    {
      v19 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_15:
      v20 = a2;
      if ( v19 >= 0 )
        v19 = v28[0];
      if ( v10 )
        *(_DWORD *)a2 = *(_DWORD *)v10;
      if ( v11 )
      {
        v21 = *v11;
        if ( (_WORD)v21 )
        {
          if ( v21 >= *(_DWORD *)a4 )
          {
            LOWORD(v21) = *a4 - 2;
            *v11 = v21;
          }
          memmove(a3, *((const void **)v11 + 1), (unsigned __int16)v21);
          a3[(unsigned __int64)*v11 >> 1] = 0;
          LOWORD(v21) = *v11;
        }
        *(_DWORD *)a4 = (unsigned __int16)v21;
      }
      if ( *(_DWORD *)a2 == 6 && *(_DWORD *)a4 >= 2u )
      {
        v23 = 0;
        v24 = a3;
        if ( *a3 )
        {
          while ( *v24 != 92 || ++v23 != 3 )
          {
            if ( !*++v24 )
              goto LABEL_23;
          }
          *v24 = 0;
          *(_DWORD *)a4 = (unsigned __int16)((_WORD)v24 - (_WORD)a3);
        }
      }
      goto LABEL_23;
    }
    v19 = -1073741536;
    v27 = 0;
    *((_BYTE *)P + 72) = 1;
    _InterlockedExchange(v9 + 17, 0);
  }
  v20 = a2;
LABEL_23:
  v9 = (volatile __int32 *)P;
LABEL_24:
  ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_27:
  if ( v7 )
    sub_1402D20D4(&stru_14003B560, a1, v19, (__int64)v11, *v20);
  if ( v27 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v19;
}
