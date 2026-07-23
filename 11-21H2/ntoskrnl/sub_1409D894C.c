/*
 * XREFs of sub_1409D894C @ 0x1409D894C
 * Callers:
 *     sub_1409D8074 @ 0x1409D8074 (sub_1409D8074.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409D847C @ 0x1409D847C (sub_1409D847C.c)
 *     sub_1409D8810 @ 0x1409D8810 (sub_1409D8810.c)
 */

unsigned __int64 __fastcall sub_1409D894C(__int64 a1, __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rbp
  _PRIVILEGE_SET *v7; // rax
  _PRIVILEGE_SET *v8; // r14
  _PRIVILEGE_SET *p_Control; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  int v12; // eax

  v4 = ((unsigned __int64)*(unsigned int *)(a1 + 8) + 31) >> 5;
  v6 = 0LL;
  v7 = (_PRIVILEGE_SET *)sub_140260C2C(4 * v4, 0x72436D73u);
  v8 = v7;
  if ( !v7 )
    return v6;
  p_Control = v7;
  if ( v4 )
  {
    if ( ((unsigned __int8)v7 & 4) != 0 )
    {
      v7->PrivilegeCount = -1;
      if ( !--v4 )
        goto LABEL_8;
      p_Control = (_PRIVILEGE_SET *)&v7->Control;
    }
    memset(p_Control, 0xFFu, 8 * (v4 >> 1));
    if ( (v4 & 1) != 0 )
      *((_DWORD *)p_Control + v4 - 1) = -1;
  }
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  v11 = a1 + 168;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  while ( v11 < a1 + 552 )
  {
    if ( *(_DWORD *)v11 == -1 )
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( (v12 & 4) == 0 )
      {
        *(_QWORD *)(v11 + 8) = v8;
        *(_DWORD *)(v11 + 4) = v12 | 4;
        v8 = 0LL;
        if ( (int)sub_1409D847C(a1, a3, v11) < 0 )
        {
          if ( v11 )
          {
            sub_1409D8810(a1, v11, 1);
            return v6;
          }
        }
        else
        {
          v6 = v11;
        }
        break;
      }
    }
    v11 += 24LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 160);
  sub_1402AFC00(a1 + 160);
  KeLeaveCriticalRegion();
  if ( v8 )
    SeFreePrivileges(v8);
  return v6;
}
