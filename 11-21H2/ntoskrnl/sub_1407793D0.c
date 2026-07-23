/*
 * XREFs of sub_1407793D0 @ 0x1407793D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DDABC @ 0x1402DDABC (sub_1402DDABC.c)
 *     sub_1402DF554 @ 0x1402DF554 (sub_1402DF554.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140562004 @ 0x140562004 (sub_140562004.c)
 *     sub_14056205C @ 0x14056205C (sub_14056205C.c)
 *     sub_140778C00 @ 0x140778C00 (sub_140778C00.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077C610 @ 0x14077C610 (sub_14077C610.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407793D0(__int64 a1, unsigned __int16 *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ecx
  volatile signed __int32 *v5; // rdi
  size_t v7; // r12
  void *v9; // r14
  __int64 result; // rax
  _QWORD *v11; // r13
  __int64 v12; // rax
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // r15d
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  NTSTATUS v19; // eax
  void *Pool2; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // r9
  struct _KEVENT *p_Event; // rax
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+38h] BYREF

  v4 = *a2;
  LODWORD(v28) = 0;
  v5 = 0LL;
  v26 = 0LL;
  v7 = a3;
  v25 = 0LL;
  WORD1(v26) = v4;
  LOWORD(v26) = v4;
  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = sub_14077C610((char *)&v26 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    v11 = (_QWORD *)sub_140779C10(&v26, 1399877200LL);
    sub_1402DF554(a4, *((void **)&v26 + 1));
    if ( v11 && (v12 = v11[39], (v13 = *(_DWORD **)(v12 + 40)) != 0LL) )
    {
      if ( v13 == qword_140C46278 && *((_DWORD *)a2 + 4) )
      {
        v16 = -1073741790;
        goto LABEL_12;
      }
      v14 = *((_DWORD *)a2 + 4);
      v15 = *((_DWORD *)a2 + 7) & 1;
      if ( !v14 )
      {
        sub_140778C00(*(_QWORD *)(v12 + 40), (int *)a2 + 5);
        *((_DWORD *)a2 + 6) = v13[101];
        *((_DWORD *)a2 + 8) = v13[102];
        v16 = 0;
        goto LABEL_9;
      }
      v17 = v14 - 1;
      if ( !v17 )
      {
        if ( v15 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, v7, 1433431632LL);
          v9 = Pool2;
          if ( !Pool2 )
          {
            v16 = -1073741670;
            goto LABEL_12;
          }
          memmove(Pool2, a2, v7);
        }
        else
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
        }
        v21 = &v25;
        v22 = &v28;
        v23 = (__int64)v9;
        if ( v15 )
          v21 = 0LL;
        p_Event = &Event;
        if ( v15 )
        {
          v22 = 0LL;
          p_Event = 0LL;
        }
        else
        {
          v23 = (__int64)a2;
        }
        v18 = sub_1402DCF44(v11, 15, 0, v23, (__int64)p_Event, (__int64)v22, v21);
        v16 = v18;
        if ( v15 )
          goto LABEL_26;
        goto LABEL_22;
      }
      if ( v17 == 1 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v18 = sub_1402DCF44(v11, 1, 0, 0LL, (__int64)&Event, (__int64)&v28, &v25);
        v16 = v18;
LABEL_22:
        if ( v18 >= 0 )
        {
          v19 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          v5 = (volatile signed __int32 *)v25;
          v16 = v19;
          if ( v19 != 257 )
            goto LABEL_24;
          if ( !(unsigned int)sub_14056205C((volatile signed __int32 *)v25) )
          {
            sub_140562004((__int64)v5);
            v16 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_24:
            if ( !v16 )
              v16 = v28;
            goto LABEL_9;
          }
          v16 = -1073741536;
LABEL_9:
          if ( v5 )
            sub_1402DDABC(v5);
          goto LABEL_12;
        }
LABEL_26:
        v5 = (volatile signed __int32 *)v25;
        goto LABEL_9;
      }
      v16 = -1073741808;
    }
    else
    {
      v16 = -1073741810;
      v9 = 0LL;
      if ( !v11 )
        return (unsigned int)v16;
    }
LABEL_12:
    ObfDereferenceObjectWithTag(v11, 0x53706E50u);
    if ( v16 < 0 )
    {
      if ( v9 )
        ExFreePoolWithTag(v9, 0x55706E50u);
    }
    return (unsigned int)v16;
  }
  return result;
}
