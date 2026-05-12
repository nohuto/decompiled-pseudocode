/*
 * XREFs of sub_1C0019FDC @ 0x1C0019FDC
 * Callers:
 *     sub_1C0019ED0 @ 0x1C0019ED0 (sub_1C0019ED0.c)
 * Callees:
 *     sub_1C0004BDC @ 0x1C0004BDC (sub_1C0004BDC.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C001A174 @ 0x1C001A174 (sub_1C001A174.c)
 *     sub_1C00215F4 @ 0x1C00215F4 (sub_1C00215F4.c)
 *     sub_1C0022D64 @ 0x1C0022D64 (sub_1C0022D64.c)
 *     sub_1C0065E24 @ 0x1C0065E24 (sub_1C0065E24.c)
 */

__int64 *__fastcall sub_1C0019FDC(char *Context, _QWORD *a2)
{
  __int64 *v2; // rdi
  char v3; // bp
  PSLIST_ENTRY v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)(*((_QWORD *)Context + 6) + 932LL) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
    v3 = 1;
  }
  if ( *((_DWORD *)Context + 6) )
  {
    if ( *((_DWORD *)Context + 10) != 1 && !(unsigned __int8)sub_1C001A174(Context) )
    {
      v7 = sub_1C0004BDC((__int64)(Context + 64));
      if ( v7
        || *((_DWORD *)Context + 34) < *((_DWORD *)Context + 36)
        && (sub_1C0065E24(Context), (v7 = sub_1C0004BDC((__int64)(Context + 64))) != 0LL) )
      {
        if ( !v3 )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
        if ( !*((_DWORD *)Context + 6) || *((int *)Context + 10) > 0 || (unsigned __int8)sub_1C001A174(Context) )
          goto LABEL_23;
        v10 = Context + 8;
        v2 = (__int64 *)*((_QWORD *)Context + 1);
        if ( (char *)v2[1] == Context + 8 )
        {
          v11 = *v2;
          if ( *(__int64 **)(*v2 + 8) == v2 )
          {
            *v10 = v11;
            *(_QWORD *)(v11 + 8) = v10;
            _InterlockedIncrement((volatile signed __int32 *)Context + 48);
            v12 = *((_DWORD *)Context + 48);
            if ( v12 <= *((_DWORD *)Context + 9) )
              v12 = *((_DWORD *)Context + 9);
            --*((_DWORD *)Context + 6);
            *((_DWORD *)Context + 9) = v12;
            if ( (*((_BYTE *)v2 + 22) & 0x20) == 0 )
              goto LABEL_23;
            v13 = (_QWORD *)sub_1C00215F4(v2, v8, v9);
            v14 = *v13;
            if ( *(_QWORD **)(*v13 + 8LL) == v13 )
            {
              v15 = (_QWORD *)v13[1];
              if ( (_QWORD *)*v15 == v13 )
              {
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
LABEL_23:
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( v2 )
                {
                  a2[3] = v7 + 53;
                  a2[2] = v7 + 3;
                  a2[1] = v7 + 69;
                  sub_1C0004C64((__int64)&v7[3], v16, *((_DWORD *)&v7[49].Next + 2), *((void **)&v7[50].Next + 1));
                }
                else
                {
                  sub_1C0022D64(Context + 64, v7);
                }
                return v2;
              }
            }
          }
        }
        __fastfail(3u);
      }
    }
  }
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
