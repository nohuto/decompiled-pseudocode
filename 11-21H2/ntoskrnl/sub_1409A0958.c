/*
 * XREFs of sub_1409A0958 @ 0x1409A0958
 * Callers:
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_1405C81FC @ 0x1405C81FC (sub_1405C81FC.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_1405D0FDC @ 0x1405D0FDC (sub_1405D0FDC.c)
 *     sub_1405D11D8 @ 0x1405D11D8 (sub_1405D11D8.c)
 *     sub_1405DF244 @ 0x1405DF244 (sub_1405DF244.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_140989608 @ 0x140989608 (sub_140989608.c)
 *     sub_14098D024 @ 0x14098D024 (sub_14098D024.c)
 */

void __fastcall sub_1409A0958(__int64 a1, __int16 a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r13d
  char v7; // r12
  __int128 *v8; // rdi
  char v9; // r15
  unsigned __int16 *v10; // r14
  __int64 v11; // r12
  char v12; // r13
  int v13; // eax
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // r14
  ULONG_PTR *v16; // r12
  ULONG_PTR v17; // r12
  __int64 v18; // rcx
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+40h] BYREF
  int v21; // [rsp+C0h] [rbp+50h]
  __int64 v22; // [rsp+C8h] [rbp+58h] BYREF

  v21 = a3;
  v5 = (unsigned int)(10000 * *(_DWORD *)(a1 + 8));
  v6 = 0;
  v22 = 0LL;
  v7 = a3;
  v19 = 0LL;
  v20 = 0;
  if ( (int)sub_1405CB06C(v5, &v19) >= 0 )
  {
    v8 = (__int128 *)v19;
    v9 = (_QWORD)v19 != (_QWORD)&v19;
    if ( (__int128 *)v19 != &v19 )
    {
      do
      {
        v10 = (unsigned __int16 *)(*((_QWORD *)v8 - 103) + 56LL);
        if ( *((_DWORD *)v8 + 8) )
        {
          v11 = 0LL;
          v12 = v21;
          do
          {
            sub_1405D0FDC(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 8),
              *(_BYTE *)(a1 + 24) != 0,
              *(_DWORD *)(a1 + 20),
              1u,
              a2,
              v10,
              (unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 8 * v11) + 56LL),
              0,
              v12);
            v11 = (unsigned int)(v11 + 1);
          }
          while ( (unsigned int)v11 < *((_DWORD *)v8 + 8) );
          v7 = v21;
        }
        else
        {
          sub_1405D0FDC(
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 12),
            *(_DWORD *)(a1 + 8),
            *(_BYTE *)(a1 + 24) != 0,
            *(_DWORD *)(a1 + 20),
            1u,
            a2,
            v10,
            0LL,
            0,
            v7);
        }
        v8 = *(__int128 **)v8;
      }
      while ( v8 != &v19 );
      v8 = (__int128 *)v19;
      v6 = v20;
    }
    if ( !v9 )
    {
      sub_1405C81FC((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), &v20, &v22);
      v6 = v20;
      sub_1405D0FDC(
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 8),
        *(_BYTE *)(a1 + 24) != 0,
        *(_DWORD *)(a1 + 20),
        0,
        a2,
        0LL,
        0LL,
        v20,
        v7);
      v8 = (__int128 *)v19;
    }
    v13 = *(unsigned __int8 *)(a1 + 24);
    if ( !(_BYTE)v13 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        sub_1405D11D8(*(_DWORD *)a1, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 8), v13, *(_DWORD *)(a1 + 20), v9, a2);
        v8 = (__int128 *)v19;
      }
      if ( v9 )
      {
        v14 = (ULONG_PTR)v8 - 872;
        v15 = v14 + 872;
        v16 = (ULONG_PTR *)(v14 + 48);
        if ( *(_DWORD *)(v14 + 904) )
          v16 = *(ULONG_PTR **)(v14 + 896);
        v17 = *v16;
      }
      else
      {
        v17 = 0LL;
        v14 = 0LL;
        v15 = 0LL;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)sub_1402DA4B0() || sub_140989608()) && v9 && (a2 & 0x20) != 0 )
          sub_1405CAE6C(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v9 )
      {
        if ( (a2 & 0x40) != 0 )
        {
          __int2c();
        }
        else if ( (a2 & 0x20) != 0 )
        {
          sub_1405CAE6C(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
        }
      }
      if ( sub_1405DF244() && (a2 & 4) != 0 )
      {
        if ( v9 )
        {
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 2LL, v14, *(unsigned int *)(v15 + 16), v17, 0LL, 0LL, 0);
        }
        else if ( v6 )
        {
          if ( qword_140D04890 )
            v18 = *(_QWORD *)(qword_140D04890 + 104);
          else
            v18 = 0LL;
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v6, v22, v18, 0LL, 0LL, 0);
        }
      }
    }
    sub_14098D024(&v19);
  }
}
