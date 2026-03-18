/*
 * XREFs of InitProcessSystemDpi @ 0x1C00C7550
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C00C76E0 (GetDPIServerInfoForDpi.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 v2; // r14
  __int64 ThreadTeb; // rax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOL v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    v4 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v5 = *(unsigned int *)(v4 + 48);
    ProbeForRead((volatile void *)(unsigned int)v5, 0x488uLL, 4u);
    v2 = *(_QWORD *)(v5 + 480);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1360LL) + 720LL);
  }
  v6 = v2 & 0x40000000000000LL;
  v7 = v2 & 0x20000000000000LL;
  v16 = 0;
  v15 = 0;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL, 0, &v16, &v15);
  if ( v6 )
    v12 = 0;
  else
    v12 = v7 || v15 || v16 != 0;
  if ( v12 )
  {
    v13 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96) + 40LL) + 64LL);
    *(_WORD *)(a1 + 284) = v13;
    return GetDPIServerInfoForDpi(v13);
  }
  else
  {
    result = *(unsigned __int16 *)(gpsi + 6998LL);
    *(_WORD *)(a1 + 284) = result;
  }
  return result;
}
