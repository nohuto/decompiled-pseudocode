/*
 * XREFs of PnpFindBestConfigurationWorker @ 0x140816048
 * Callers:
 *     PnpFindBestConfiguration @ 0x140815FF0 (PnpFindBestConfiguration.c)
 * Callees:
 *     IopSaveRestoreConfiguration @ 0x140815DBC (IopSaveRestoreConfiguration.c)
 *     IopRetestConfiguration @ 0x140815F2C (IopRetestConfiguration.c)
 *     IopTestConfiguration @ 0x1408161CC (IopTestConfiguration.c)
 *     PnpSelectFirstConfiguration @ 0x14081683C (PnpSelectFirstConfiguration.c)
 *     IopAddRemoveReqDescs @ 0x140818AC8 (IopAddRemoveReqDescs.c)
 *     IopSelectNextConfiguration @ 0x14081AFC4 (IopSelectNextConfiguration.c)
 */

__int64 __fastcall PnpFindBestConfigurationWorker(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r12d
  int v9; // esi
  __int128 v10; // xmm0
  unsigned int v12; // edx
  __int64 *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD **v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r15
  _OWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  *((_QWORD *)&v19[0] + 1) = v19;
  *((_QWORD *)a3 + 1) = a3;
  *(_QWORD *)&v19[0] = v19;
  *(_QWORD *)a3 = a3;
  PnpSelectFirstConfiguration();
  v6 = -1;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = PnpFindBestConfigurationTimeout;
  while ( 1 )
  {
    v9 = IopTestConfiguration(a1, (unsigned int)v3, a3);
    if ( v9 >= 0 )
    {
      v10 = *a3;
      v19[0] = *a3;
      if ( (_DWORD)v3 == 1 )
        goto LABEL_4;
      v12 = 0;
      if ( (_DWORD)v3 )
      {
        v13 = (__int64 *)(a1 + 32);
        v14 = v3;
        do
        {
          v15 = *v13;
          v13 += 8;
          v12 += ***(_DWORD ***)(v15 + 16);
          --v14;
        }
        while ( v14 );
      }
      if ( v12 < v6 )
      {
        v6 = v12;
        IopSaveRestoreConfiguration(a1, v3, (_QWORD **)a3, 1);
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000014] - v7) / 10000) >= v8 )
      break;
    if ( !(unsigned __int8)IopSelectNextConfiguration(a1, (unsigned int)v3, a3) )
      goto LABEL_15;
  }
  if ( (_DWORD)v3 )
  {
    v17 = a1 + 32;
    v18 = v3;
    do
    {
      IopAddRemoveReqDescs(
        **(_QWORD **)(*(_QWORD *)v17 + 16LL) + 24LL,
        *(unsigned int *)(**(_QWORD **)(*(_QWORD *)v17 + 16LL) + 20LL),
        0LL,
        0LL);
      v17 += 64LL;
      --v18;
    }
    while ( v18 );
  }
LABEL_15:
  v10 = v19[0];
LABEL_4:
  if ( (_OWORD *)v10 == v19 )
  {
    if ( v9 != -1073739512 )
      return (unsigned int)-1073741823;
  }
  else
  {
    v9 = 0;
    if ( (_DWORD)v3 != 1 )
    {
      *a3 = v10;
      IopSaveRestoreConfiguration(a1, v3, (_QWORD **)a3, 0);
      return (unsigned int)IopRetestConfiguration(a1, v3, v16);
    }
  }
  return (unsigned int)v9;
}
