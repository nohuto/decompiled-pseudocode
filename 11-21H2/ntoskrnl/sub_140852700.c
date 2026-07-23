/*
 * XREFs of sub_140852700 @ 0x140852700
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140852700(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  struct _KEVENT *v10; // rcx
  struct _KEVENT *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 || a2 == 7 )
      goto LABEL_4;
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
        goto LABEL_4;
      goto LABEL_19;
    }
LABEL_20:
    v9 = -1073741822;
    goto LABEL_9;
  }
  if ( a2 >= 4 )
    goto LABEL_20;
  if ( (unsigned int)a2 <= 1 )
  {
LABEL_4:
    v8 = sub_14042A5E0(a1, a3);
    goto LABEL_5;
  }
  if ( a2 != 2 && a2 != 3 )
  {
LABEL_19:
    v9 = -1073741811;
    goto LABEL_9;
  }
  v8 = sub_14042A5E0(a1, v7);
LABEL_5:
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v12 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeResetEvent(v12);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v10 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v10, 0, 0);
    }
  }
LABEL_9:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v9;
}
