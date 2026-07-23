/*
 * XREFs of sub_14071BC94 @ 0x14071BC94
 * Callers:
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_1406E7AC4 @ 0x1406E7AC4 (sub_1406E7AC4.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071B3F0 @ 0x14071B3F0 (sub_14071B3F0.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_14091CDE8 @ 0x14091CDE8 (sub_14091CDE8.c)
 *     sub_14091D070 @ 0x14091D070 (sub_14091D070.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

void __fastcall sub_14071BC94(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // ebp
  ULONG_PTR v11; // rbx
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _LIST_ENTRY v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v19[0] = 0LL;
  InitializeListHead(v19);
  while ( *(_QWORD *)(BugCheckParameter2 + 16) != BugCheckParameter2 + 16 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL) )
    {
      sub_14071B6EC();
      v9 = *(_DWORD *)(v4 + 68);
      if ( v9 )
      {
        if ( v9 > 3 )
        {
          if ( v9 <= 5 )
          {
            sub_14079B22C(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), *(unsigned int *)(v4 + 92));
          }
          else if ( v9 == 9 )
          {
            v10 = *(_DWORD *)(v4 + 96);
            v11 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL);
            if ( (int)sub_14071F300(v11, v10) >= 0 )
              sub_1402A2104(v11, v10);
          }
          else if ( v9 == 12 )
          {
            v5 = *(unsigned int *)(v4 + 96);
            if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
              sub_14079BD98(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5);
          }
        }
      }
      else
      {
        v5 = *(unsigned int *)(v4 + 88);
        if ( (unsigned int)(v5 - 1) <= 0xFFFFFFFD )
          sub_1407164DC(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 32LL), v5, 0);
      }
      sub_140AB4260(v6, v5, v7, v8);
    }
    sub_14071B6EC();
    v13 = *(_QWORD *)(v4 + 48);
    if ( *(_QWORD *)(v13 + 288) == BugCheckParameter2 )
    {
      v14 = *(unsigned int *)(v13 + 284);
      if ( (_DWORD)v14 != -1 )
      {
        sub_14079BD98(*(_QWORD *)(v13 + 32), v14);
        *(_DWORD *)(v13 + 280) = 0;
        *(_DWORD *)(v13 + 284) = -1;
      }
      *(_QWORD *)(v13 + 288) = 0LL;
    }
    if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(v13 + 240), BugCheckParameter2, v12) && !*(_DWORD *)(v4 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)sub_14091D070(v13, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10000uLL);
        if ( (int)sub_14069E26C(v13, 4, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10100uLL);
        sub_14091CDE8(v13, 8LL, 6LL, v19);
        sub_14069E21C(v13, 8LL, 4, (__int64)v19, 0LL);
        sub_14067EE40(v13, 8LL, (__int64)v19, 0);
        *(_WORD *)(v13 + 8) |= 0x20u;
        sub_14067EDC0(v13, (__int64)v19);
        if ( (*(_DWORD *)(v13 + 8) & 0x20000) == 0 )
          sub_14067EB68(v13);
      }
      *(_QWORD *)(v13 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v13 + 40) != -1 )
    {
      if ( *(_QWORD *)(v13 + 32) )
        sub_14071B3F0(v13);
    }
    sub_14071BC64((volatile signed __int64 *)v13);
    sub_14071C120(v4);
    ExFreePoolWithTag((PVOID)v4, 0x77554D43u);
    sub_1406FEA54(v13, (__int64)v19, 1);
    sub_140346C60(v19);
    sub_140AB4260(v16, v15, v17, v18);
  }
}
