/*
 * XREFs of NtUserRegisterEdgy @ 0x1C01FB790
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C0207E98 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C0208FB0 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int i; // edi
  __int128 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  int updated; // eax
  __int64 v18; // rdx
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+60h] [rbp-38h]
  __int128 v23; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 0LL);
  if ( !a1 )
  {
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8, v7);
    goto LABEL_28;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v11 = (__int128 *)(a2 + 32LL * i);
    if ( v11 + 2 < v11 || (unsigned __int64)(v11 + 2) > MmUserProbeAddress )
      v11 = (__int128 *)MmUserProbeAddress;
    v22 = *v11;
    v23 = v11[1];
    v20 = v22;
    v21 = (unsigned __int64)v23;
    if ( a3 )
    {
      if ( !HMValidateHandle(v20, 0x13u)
        || *((_QWORD *)&v20 + 1)
        && ((v13 = ValidateHwnd(*((_QWORD *)&v20 + 1)), (v15 = v13) == 0)
         || (v16 = *(_QWORD *)(v13 + 40), *(char *)(v16 + 19) < 0)
         || *(char *)(v16 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v14)
         || *(_DWORD *)(v15 + 260)) )
      {
        UserSetLastError(87LL, v12);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 456LL),
                  v20,
                  (unsigned int)v21,
                  *((_QWORD *)&v20 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener(&v20);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v18);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
