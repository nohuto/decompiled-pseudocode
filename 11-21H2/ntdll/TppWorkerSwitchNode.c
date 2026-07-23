/*
 * XREFs of TppWorkerSwitchNode @ 0x18001B15C
 * Callers:
 *     TppWorkerFindTask @ 0x180018A28 (TppWorkerFindTask.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     TppETWWorkerNodeSwitch @ 0x180124CA4 (TppETWWorkerNodeSwitch.c)
 */

int __fastcall TppWorkerSwitchNode(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  int v5; // edi
  struct _PEB *v6; // rax
  __int64 v8; // rcx
  __int16 v9; // si
  unsigned __int16 v10; // bp
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 ThreadInformation; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a2 + 344);
  v5 = a1;
  LODWORD(v6) = *(_DWORD *)(a1 + 428);
  v13 = a4;
  if ( a3 == (_DWORD)v4 )
  {
    if ( (_DWORD)v6 == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      v6 = *(struct _PEB **)(a1 + 40);
      _InterlockedIncrement((volatile signed __int32 *)v6 + a3);
    }
  }
  else
  {
    if ( (_DWORD)v6 == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v4));
      else
        *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * a3));
    }
    *(_DWORD *)(a2 + 344) = a3;
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_WORD *)(v8 + 16LL * a3 + 8);
    v10 = *(_WORD *)(v8 + 16 * v4 + 8);
    LODWORD(v6) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v6 )
    {
      v6 = NtCurrentPeb();
      v11 = (__int64)v6->SharedData + 556;
    }
    else
    {
      v11 = 2147353478LL;
    }
    if ( *(_BYTE *)v11 )
      LODWORD(v6) = TppETWWorkerNodeSwitch(v5, v4, a3, v10, v9);
    if ( v10 != v9 )
    {
      ThreadInformation = 0LL;
      WORD4(ThreadInformation) = v9;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
      LODWORD(v6) = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v13, 4u);
    }
  }
  return (int)v6;
}
