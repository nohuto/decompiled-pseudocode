/*
 * XREFs of ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x1C013C14C
 * Callers:
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x1C013BF80 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 * Callees:
 *     ??_GLwfBindProperties@@QEAAPEAXI@Z @ 0x1C00B36F4 (--_GLwfBindProperties@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<LwfBindProperties,1>::moveElements(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // r12d
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // rdi
  __int64 v35; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v20 = a3;
      v21 = a2 - a3;
      if ( a3 < a2 )
      {
        v22 = (unsigned __int64)a3 << 6;
        do
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = (unsigned __int64)(v20 + v21) << 6;
          ++v20;
          v25 = v23 + v24;
          *(_OWORD *)(v22 + v23) = *(_OWORD *)v25;
          *(_DWORD *)(v22 + v23 + 16) = *(_DWORD *)(v25 + 16);
          v22 += 64LL;
          *(_DWORD *)(v22 + v23 - 44) = *(_DWORD *)(v25 + 20);
          *(_QWORD *)(v22 + v23 - 40) = *(_QWORD *)(v25 + 24);
          v26 = *(_DWORD *)(v25 + 32);
          *(_QWORD *)(v25 + 24) = 0LL;
          *(_QWORD *)(v25 + 16) = 0LL;
          *(_DWORD *)(v22 + v23 - 32) = v26;
          *(_DWORD *)(v22 + v23 - 28) = *(_DWORD *)(v25 + 36);
          *(_QWORD *)(v22 + v23 - 24) = *(_QWORD *)(v25 + 40);
          *(_QWORD *)(v25 + 40) = 0LL;
          *(_QWORD *)(v25 + 32) = 0LL;
          *(_DWORD *)(v22 + v23 - 16) = *(_DWORD *)(v25 + 48);
          *(_BYTE *)(v22 + v23 - 12) = *(_BYTE *)(v25 + 52);
          *(_DWORD *)(v22 + v23 - 8) = *(_DWORD *)(v25 + 56);
        }
        while ( v20 < a2 );
      }
      v27 = a3 + a4;
      if ( v20 < a3 + a4 )
      {
        v28 = (unsigned __int64)v20 << 6;
        do
        {
          LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(*(_QWORD *)(a1 + 8)
                                                                              + ((unsigned __int64)v20 << 6)));
          v29 = *(_QWORD *)(a1 + 8);
          v30 = (unsigned __int64)(v20 + v21) << 6;
          ++v20;
          v31 = v29 + v30;
          *(_OWORD *)(v28 + v29) = *(_OWORD *)v31;
          *(_DWORD *)(v28 + v29 + 16) = *(_DWORD *)(v31 + 16);
          v28 += 64LL;
          *(_DWORD *)(v28 + v29 - 44) = *(_DWORD *)(v31 + 20);
          *(_QWORD *)(v28 + v29 - 40) = *(_QWORD *)(v31 + 24);
          v32 = *(_DWORD *)(v31 + 32);
          *(_QWORD *)(v31 + 24) = 0LL;
          *(_QWORD *)(v31 + 16) = 0LL;
          *(_DWORD *)(v28 + v29 - 32) = v32;
          *(_DWORD *)(v28 + v29 - 28) = *(_DWORD *)(v31 + 36);
          *(_QWORD *)(v28 + v29 - 24) = *(_QWORD *)(v31 + 40);
          *(_QWORD *)(v31 + 40) = 0LL;
          *(_QWORD *)(v31 + 32) = 0LL;
          *(_DWORD *)(v28 + v29 - 16) = *(_DWORD *)(v31 + 48);
          *(_BYTE *)(v28 + v29 - 12) = *(_BYTE *)(v31 + 52);
          *(_DWORD *)(v28 + v29 - 8) = *(_DWORD *)(v31 + 56);
        }
        while ( v20 < v27 );
      }
      v33 = a2 + a4;
      if ( v20 < a2 + a4 )
      {
        v34 = (unsigned __int64)v20 << 6;
        v35 = v33 - v20;
        do
        {
          LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(v34 + *(_QWORD *)(a1 + 8)));
          v34 += 64LL;
          --v35;
        }
        while ( v35 );
      }
    }
    else
    {
      v8 = a3 + a4;
      v9 = a3 - a2;
      v10 = a3 + a4 - 1;
      if ( v10 >= *(_DWORD *)(a1 + 4) )
      {
        do
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = v11 + ((unsigned __int64)v10 << 6);
          v13 = v11 + ((unsigned __int64)(v8 - v9 - 1) << 6);
          --v8;
          *(_OWORD *)v12 = *(_OWORD *)v13;
          *(_DWORD *)(v12 + 16) = *(_DWORD *)(v13 + 16);
          *(_DWORD *)(v12 + 20) = *(_DWORD *)(v13 + 20);
          *(_QWORD *)(v12 + 24) = *(_QWORD *)(v13 + 24);
          v14 = *(_DWORD *)(v13 + 32);
          *(_QWORD *)(v13 + 24) = 0LL;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_DWORD *)(v12 + 32) = v14;
          *(_DWORD *)(v12 + 36) = *(_DWORD *)(v13 + 36);
          *(_QWORD *)(v12 + 40) = *(_QWORD *)(v13 + 40);
          *(_QWORD *)(v13 + 40) = 0LL;
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_DWORD *)(v12 + 48) = *(_DWORD *)(v13 + 48);
          *(_BYTE *)(v12 + 52) = *(_BYTE *)(v13 + 52);
          *(_DWORD *)(v12 + 56) = *(_DWORD *)(v13 + 56);
          v10 = v8 - 1;
        }
        while ( v8 - 1 >= *(_DWORD *)(a1 + 4) );
      }
      for ( ; v8 > a3; *(_DWORD *)(v16 + v15 + 56) = *(_DWORD *)(v18 + 56) )
      {
        v15 = (unsigned __int64)(v8 - 1) << 6;
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(v15 + *(_QWORD *)(a1 + 8)));
        v16 = *(_QWORD *)(a1 + 8);
        v17 = v8 - v9 - 1;
        --v8;
        v18 = v16 + (v17 << 6);
        *(_OWORD *)(v16 + v15) = *(_OWORD *)v18;
        *(_DWORD *)(v16 + v15 + 16) = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v16 + v15 + 20) = *(_DWORD *)(v18 + 20);
        *(_QWORD *)(v16 + v15 + 24) = *(_QWORD *)(v18 + 24);
        v19 = *(_DWORD *)(v18 + 32);
        *(_QWORD *)(v18 + 24) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_DWORD *)(v16 + v15 + 32) = v19;
        *(_DWORD *)(v16 + v15 + 36) = *(_DWORD *)(v18 + 36);
        *(_QWORD *)(v16 + v15 + 40) = *(_QWORD *)(v18 + 40);
        *(_QWORD *)(v18 + 40) = 0LL;
        *(_QWORD *)(v18 + 32) = 0LL;
        *(_DWORD *)(v16 + v15 + 48) = *(_DWORD *)(v18 + 48);
        *(_BYTE *)(v16 + v15 + 52) = *(_BYTE *)(v18 + 52);
      }
      while ( v8 > a2 )
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(*(_QWORD *)(a1 + 8)
                                                                            + ((unsigned __int64)--v8 << 6)));
    }
  }
}
