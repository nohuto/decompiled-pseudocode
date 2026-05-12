/*
 * XREFs of StorEtwMiniportEventProxy @ 0x1C0019370
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1C00194BC (RaidNtStatusToStorStatus.c)
 *     StorEtwMiniportEvent @ 0x1C0019528 (StorEtwMiniportEvent.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall StorEtwMiniportEventProxy(__int64 a1, int a2, __int64 *a3)
{
  _DWORD *Adapter; // rax
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbp
  __int64 v13; // r14
  int v14; // r15d
  int v15; // r12d
  __int64 *v16; // rdi
  __int64 v17; // r13
  unsigned int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned int v21; // eax
  _QWORD v23[8]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v24[64]; // [rsp+A0h] [rbp-88h] BYREF

  memset(v23, 0, sizeof(v23));
  Adapter = RaidpPortGetAdapter(a1);
  v7 = 0LL;
  v8 = (int)Adapter;
  if ( !Adapter )
    return 3238002694LL;
  v9 = *a3;
  v10 = *((_DWORD *)a3 + 2);
  v11 = *((_DWORD *)a3 + 4);
  v12 = a3[3];
  v13 = a3[4];
  v14 = *((_DWORD *)a3 + 10);
  v15 = *((_DWORD *)a3 + 12);
  v16 = a3 + 8;
  v17 = *(v16 - 1);
  if ( a2 == 85 || a2 == 58 )
  {
    v18 = 2;
  }
  else if ( a2 == 59 || a2 == 86 )
  {
    v18 = 4;
  }
  else
  {
    v18 = 8;
  }
  v19 = v18;
  do
  {
    v20 = *v16;
    v16 += 2;
    v23[v7++] = v20;
    v23[v7 + 7] = *(v16 - 1);
    --v19;
  }
  while ( v19 );
  v21 = StorEtwMiniportEvent(v8, v9, v10, v11, v12, v13, v14, v15, v17, v18, (__int64)v23, (__int64)v24);
  return RaidNtStatusToStorStatus(v21);
}
