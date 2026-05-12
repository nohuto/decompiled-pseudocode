/*
 * XREFs of sub_1C0067DA0 @ 0x1C0067DA0
 * Callers:
 *     EnableCallback @ 0x1C003F9E0 (EnableCallback.c)
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00224A4 @ 0x1C00224A4 (sub_1C00224A4.c)
 *     sub_1C00224D4 @ 0x1C00224D4 (sub_1C00224D4.c)
 *     sub_1C0067AB0 @ 0x1C0067AB0 (sub_1C0067AB0.c)
 *     sub_1C0067B7C @ 0x1C0067B7C (sub_1C0067B7C.c)
 *     sub_1C0067C04 @ 0x1C0067C04 (sub_1C0067C04.c)
 *     sub_1C0067C80 @ 0x1C0067C80 (sub_1C0067C80.c)
 *     sub_1C0067D10 @ 0x1C0067D10 (sub_1C0067D10.c)
 */

void __fastcall sub_1C0067DA0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  bool v7; // al
  __int64 v8; // rax
  char *v9; // r13
  char *v10; // r14
  char *i; // rdi
  __int64 *v12; // r15
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 *v15; // rsi
  __int64 *v16; // r12
  unsigned int v17; // ebp
  __int64 *v18; // rsi
  __int64 *v19; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char *v21; // [rsp+90h] [rbp+8h]
  char v22; // [rsp+98h] [rbp+10h]

  v22 = a2;
  v6 = a2;
  byte_1C0093BE8 = a2 != 0;
  qword_1C0094158 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    qword_1C0094158 = **(_QWORD **)a6;
  byte_1C0093BD9 = (byte_1C0093A04 & 0x20) != 0 || (byte_1C0093A05 & 9) != 0;
  v7 = (byte_1C0093A05 & 0x60) != 0 || (byte_1C0093A06 & 0x20) != 0;
  byte_1C0093BDA = v7;
  byte_1C0093BD8 = (byte_1C0093A03 & 0x10) != 0;
  v8 = sub_1C00224A4();
  v21 = (char *)v8;
  v9 = (char *)v8;
  if ( v8 )
  {
    v10 = (char *)(v8 + 8);
    for ( i = *(char **)(v8 + 8); i != v10; i = *(char **)i )
    {
      v12 = 0LL;
      v13 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)i + 7, &LockHandle);
      if ( *((_DWORD *)i + 12) )
      {
        v14 = (__int64 *)(i + 32);
        v15 = (__int64 *)*((_QWORD *)i + 4);
        if ( v15 != (__int64 *)(i + 32) )
        {
          do
          {
            v16 = v15 - 8;
            if ( sub_1C0067AB0((__int64)(v15 - 8), v22) )
              LODWORD(v13) = v13 + 1;
            v15 = (__int64 *)*v15;
            v17 = v13;
          }
          while ( v15 != v14 );
          v9 = v21;
          v13 = (unsigned int)v13;
          if ( (_DWORD)v13 )
          {
            v12 = (__int64 *)sub_1C0007CF4(64LL, 8LL * (unsigned int)v13, 1413833042LL, v16[1]);
            if ( v12 )
            {
              v18 = (__int64 *)*v14;
              v13 = 0LL;
              if ( (__int64 *)*v14 != v14 )
              {
                do
                {
                  if ( (unsigned int)v13 >= v17 )
                    break;
                  if ( sub_1C0067AB0((__int64)(v18 - 8), v22) && (int)sub_1C00076F4((__int64)(v18 - 8)) >= 0 )
                  {
                    v12[v13] = (__int64)(v18 - 8);
                    v13 = (unsigned int)(v13 + 1);
                  }
                  v18 = (__int64 *)*v18;
                }
                while ( v18 != v14 );
                v9 = v21;
              }
            }
          }
          v6 = v22;
        }
        v10 = v9 + 8;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v12 )
      {
        if ( (_DWORD)v13 )
        {
          v19 = v12;
          do
          {
            sub_1C0067C04(*v19, v6);
            sub_1C0067D10(*v19);
            sub_1C0067C80(*v19);
            sub_1C0067B7C(*v19);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v19++ + 296));
            --v13;
          }
          while ( v13 );
        }
        ExFreePoolWithTag(v12, 0x54456152u);
      }
    }
    sub_1C00224D4(v9);
  }
}
