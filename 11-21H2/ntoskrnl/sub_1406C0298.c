/*
 * XREFs of sub_1406C0298 @ 0x1406C0298
 * Callers:
 *     sub_1406C0250 @ 0x1406C0250 (sub_1406C0250.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1406C05A4 @ 0x1406C05A4 (sub_1406C05A4.c)
 *     sub_1407EC1B0 @ 0x1407EC1B0 (sub_1407EC1B0.c)
 */

struct _KTHREAD *__fastcall sub_1406C0298(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  unsigned int v3; // eax
  WNF_STATE_NAME *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  WNF_STATE_NAME **v9; // rax
  ULONG v10; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _BYTE Buffer[40]; // [rsp+50h] [rbp-48h] BYREF

  v10 = 0;
  StateName = 0LL;
  ExAcquireFastMutex(&stru_140C237C0);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2[6].Data[1];
    v4 = v2;
    while ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v6 = sub_1406C05A4(v2, Buffer, 36LL, &v10);
      KeReleaseGuardedMutex(&stru_140C237C0);
      v7 = v10;
      if ( v6 < 0 )
        v7 = 0;
      v10 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( *((_DWORD *)KeGetCurrentThread() + 121) )
        goto LABEL_19;
      ExAcquireFastMutex(&stru_140C237C0);
      v3 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v3;
      if ( updated < 0 )
      {
        v3 |= 1u;
        v2[6].Data[1] = v3;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v3 & 2) == 0 && (v3 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v4 || (v9 = (WNF_STATE_NAME **)v4[1], *v9 != v4) )
        __fastfail(3u);
      *v9 = v2;
      v2[1] = (WNF_STATE_NAME)v9;
      sub_1407EC1B0(v4);
    }
  }
  KeReleaseGuardedMutex(&stru_140C237C0);
  result = KeGetCurrentThread();
  if ( *((_DWORD *)result + 121) )
LABEL_19:
    __fastfail(0x20u);
  return result;
}
