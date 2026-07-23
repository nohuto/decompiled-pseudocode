/*
 * XREFs of sub_14065F5D4 @ 0x14065F5D4
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_1409596B0 @ 0x1409596B0 (sub_1409596B0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_1402DDABC @ 0x1402DDABC (sub_1402DDABC.c)
 *     sub_140562004 @ 0x140562004 (sub_140562004.c)
 *     sub_14056205C @ 0x14056205C (sub_14056205C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 */

__int64 __fastcall sub_14065F5D4(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rax
  void *v8; // rsi
  int v9; // eax
  volatile signed __int32 *v10; // rdi
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v7 = sub_140779C10(a1, 1131441744LL);
  v8 = (void *)v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = sub_1402DCF44(
             v8,
             a2,
             0,
             0LL,
             (unsigned __int64)&Event & -(__int64)(a4 != 0),
             a5 & -(__int64)(a4 != 0),
             (__int64 *)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      v10 = v13;
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( a4 )
        {
          v11 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v11 == 257 )
          {
            if ( (unsigned int)sub_14056205C(v10) )
            {
              v11 = -1073741536;
            }
            else
            {
              sub_140562004((__int64)v10);
              v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v10 )
        sub_1402DDABC(v10);
    }
    else
    {
      v11 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v11;
}
