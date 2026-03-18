/*
 * XREFs of xxxDW_DestroyOwnedWindows @ 0x1C0063700
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall xxxDW_DestroyOwnedWindows(__int64 a1)
{
  _QWORD *v2; // r14
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *i; // rbx
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 784LL);
  v11[2] = 0LL;
  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    result = *(_QWORD *)(result + 8);
    v4 = *(_QWORD *)(result + 24);
    if ( v4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v11;
      v11[1] = v4;
      HMLockObject(v4);
LABEL_4:
      for ( i = *(_QWORD **)(v4 + 112); i; i = (_QWORD *)i[11] )
      {
        if ( i[15] == a1 )
        {
          if ( (*gpsi & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 488LL) & 1) != 0 || i != v2 )
          {
            if ( (*(_WORD *)(i[5] + 42LL) & 0x2FFF) == 0x2AA || !(unsigned int)xxxDestroyWindow(i) )
            {
              *(_QWORD *)(i[5] + 64LL) = 0LL;
              HMAssignmentUnlock(i + 15);
              if ( (unsigned int)IsWindowDesktopComposed(i) )
              {
                v10 = (void *)ReferenceDwmApiPort();
                DwmAsyncOwnerChange(v10);
              }
            }
            goto LABEL_4;
          }
          *(_QWORD *)(i[5] + 64LL) = 0LL;
          HMAssignmentUnlock(i + 15);
        }
      }
      return ThreadUnlock1(v7, v6, v8);
    }
  }
  return result;
}
