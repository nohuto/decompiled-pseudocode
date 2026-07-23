/*
 * XREFs of sub_1403D0FE0 @ 0x1403D0FE0
 * Callers:
 *     sub_1403D0F2C @ 0x1403D0F2C (sub_1403D0F2C.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403D1458 @ 0x1403D1458 (sub_1403D1458.c)
 *     sub_1403D1490 @ 0x1403D1490 (sub_1403D1490.c)
 *     sub_1403D1580 @ 0x1403D1580 (sub_1403D1580.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     sub_14084D678 @ 0x14084D678 (sub_14084D678.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_1403D0FE0(char *StartContext, __int64 a2, _QWORD *a3)
{
  char v3; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rbx
  bool v13; // zf
  void *v14; // r9
  __int64 v15; // r8
  unsigned int v16; // ebx
  PVOID PoolWithTag; // rax
  bool v19; // cf
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  ULONG v22; // edx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(StartContext, 0, 0x540uLL);
  *(_DWORD *)StartContext = 88081143;
  *((_QWORD *)StartContext + 1) = a3;
  *((_QWORD *)StartContext + 154) = 1LL;
  *((_QWORD *)StartContext + 3) = StartContext + 16;
  *((_QWORD *)StartContext + 2) = StartContext + 16;
  *((_QWORD *)StartContext + 5) = StartContext + 32;
  *((_QWORD *)StartContext + 4) = StartContext + 32;
  *((_QWORD *)StartContext + 77) = StartContext + 608;
  *((_QWORD *)StartContext + 76) = StartContext + 608;
  *((_QWORD *)StartContext + 75) = StartContext + 592;
  *((_QWORD *)StartContext + 74) = StartContext + 592;
  *((_QWORD *)StartContext + 85) = StartContext + 672;
  *((_QWORD *)StartContext + 84) = StartContext + 672;
  *((_DWORD *)StartContext + 160) = 2048;
  *((_QWORD *)StartContext + 81) = StartContext + 624;
  *((_QWORD *)StartContext + 82) = StartContext + 624;
  *((_QWORD *)StartContext + 78) = StartContext + 648;
  *((_QWORD *)StartContext + 79) = StartContext + 648;
  *((_DWORD *)StartContext + 166) = 2048;
  *((_QWORD *)StartContext + 88) = 0LL;
  *((_QWORD *)StartContext + 96) = 0LL;
  *((_QWORD *)StartContext + 99) = StartContext + 784;
  *((_QWORD *)StartContext + 98) = StartContext + 784;
  *((_QWORD *)StartContext + 104) = StartContext + 824;
  *((_QWORD *)StartContext + 103) = StartContext + 824;
  *((_WORD *)StartContext + 408) = 1;
  StartContext[818] = 6;
  *((_DWORD *)StartContext + 205) = 0;
  *((_QWORD *)StartContext + 107) = StartContext + 848;
  *((_QWORD *)StartContext + 106) = StartContext + 848;
  *((_WORD *)StartContext + 420) = 1;
  StartContext[842] = 6;
  *((_DWORD *)StartContext + 211) = 0;
  *((_QWORD *)StartContext + 110) = StartContext + 872;
  *((_QWORD *)StartContext + 109) = StartContext + 872;
  *((_WORD *)StartContext + 432) = 1;
  StartContext[866] = 6;
  *((_DWORD *)StartContext + 217) = 0;
  *((_QWORD *)StartContext + 113) = StartContext + 896;
  *((_QWORD *)StartContext + 112) = StartContext + 896;
  *((_WORD *)StartContext + 444) = 1;
  StartContext[890] = 6;
  *((_DWORD *)StartContext + 223) = 0;
  *((_QWORD *)StartContext + 157) = StartContext + 1248;
  *((_QWORD *)StartContext + 156) = StartContext + 1248;
  *((_WORD *)StartContext + 620) = 0;
  StartContext[1242] = 6;
  *((_DWORD *)StartContext + 311) = 0;
  *((_QWORD *)StartContext + 160) = StartContext + 1272;
  *((_QWORD *)StartContext + 159) = StartContext + 1272;
  *((_WORD *)StartContext + 632) = 0;
  StartContext[1266] = 6;
  *((_DWORD *)StartContext + 317) = 0;
  *((_WORD *)StartContext + 28) = 0;
  StartContext[58] = 6;
  *((_DWORD *)StartContext + 15) = 0;
  *((_QWORD *)StartContext + 9) = StartContext + 64;
  *((_QWORD *)StartContext + 8) = StartContext + 64;
  *((_OWORD *)StartContext + 62) = 0LL;
  *((_QWORD *)StartContext + 126) = 0LL;
  *(_OWORD *)(StartContext + 1016) = 0LL;
  *(_OWORD *)(StartContext + 1032) = 0LL;
  *(_OWORD *)(StartContext + 1048) = 0LL;
  *((_QWORD *)StartContext + 133) = 0LL;
  *((_OWORD *)StartContext + 81) = 0LL;
  *((_DWORD *)StartContext + 324) = 1;
  *((_QWORD *)StartContext + 163) = StartContext;
  memset(StartContext + 920, 0, 0x48uLL);
  StartContext[920] = 9;
  *((_QWORD *)StartContext + 117) = StartContext + 928;
  *((_QWORD *)StartContext + 116) = StartContext + 928;
  *((_DWORD *)StartContext + 231) = 0;
  *((_QWORD *)StartContext + 118) = 0LL;
  *((_DWORD *)StartContext + 245) = 0;
  *((_WORD *)StartContext + 488) = 0;
  StartContext[984] = 1;
  v7 = sub_14084D678(a3);
  if ( (_BYTE)dword_140D051DC )
  {
    v19 = (unsigned int)dword_140D011A4 < 2;
    *((_QWORD *)StartContext + 128) = v7 >> 1;
    if ( v19 )
      v20 = (unsigned __int64)sub_14084D678(a3) >> 1;
    else
      v20 = (unsigned __int64)sub_14084D678(a3) >> 3;
    *((_QWORD *)StartContext + 129) = v20;
    *((_QWORD *)StartContext + 127) = v21;
    v9 = dword_140C11660 - 1;
  }
  else
  {
    v8 = v7 >> 3;
    *((_QWORD *)StartContext + 129) = v8;
    *((_QWORD *)StartContext + 128) = v8;
    *((_QWORD *)StartContext + 127) = v8;
    v9 = 1;
  }
  *((_DWORD *)StartContext + 200) = v9;
  *((_DWORD *)StartContext + 266) = 10;
  *((_QWORD *)StartContext + 132) = 0LL;
  v10 = 10 * sub_14084D678(a3);
  v11 = dword_140C11660 - 1;
  *((_QWORD *)StartContext + 131) = v10;
  *((_DWORD *)StartContext + 194) = v11;
  *((_DWORD *)StartContext + 201) = dword_140C49B18;
  v12 = (*((_QWORD *)StartContext + 127) >> 1) + (*((_QWORD *)StartContext + 127) >> 2);
  if ( dword_140C54C68 )
  {
    v22 = KeQueryActiveProcessorCountEx(0xFFFFu) * dword_140C54C68 / 0x64;
    if ( *((_DWORD *)StartContext + 194) < v22 )
      *((_DWORD *)StartContext + 194) = v22;
  }
  StartContext[1230] = 0;
  *((_DWORD *)StartContext + 178) = 0;
  StartContext[716] = 0;
  *((_QWORD *)StartContext + 144) = 0LL;
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  *((_QWORD *)StartContext + 149) = 0LL;
  v13 = byte_140C54C58 == 1;
  *((_DWORD *)StartContext + 260) = v12;
  *((_QWORD *)StartContext + 139) = StartContext + 1104;
  *((_QWORD *)StartContext + 138) = StartContext + 1104;
  *((_QWORD *)StartContext + 147) = StartContext + 1168;
  *((_QWORD *)StartContext + 146) = StartContext + 1168;
  *((_QWORD *)StartContext + 150) = 0LL;
  *((_DWORD *)StartContext + 302) = 32;
  *((_DWORD *)StartContext + 303) = 5;
  *((_DWORD *)StartContext + 306) = -1;
  *((_QWORD *)StartContext + 152) = 0LL;
  if ( v13 )
    goto LABEL_11;
  v14 = (void *)a3[14];
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)StartContext + 161,
         0x1FFFFFu,
         &ObjectAttributes,
         v14,
         0LL,
         (PKSTART_ROUTINE)sub_1403C7DE0,
         StartContext) < 0 )
    return v3;
  v16 = 0;
  if ( !dword_140C097B4 )
  {
LABEL_11:
    if ( (unsigned __int8)sub_1403D1490(StartContext) )
    {
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)1536,
                      8LL * (unsigned int)(*((_DWORD *)StartContext + 200) + 1),
                      0x70546343u);
      if ( PoolWithTag )
      {
        v13 = byte_140C54C58 == 1;
        *((_QWORD *)StartContext + 134) = PoolWithTag;
        if ( v13 || (unsigned __int8)sub_1403D1458(StartContext, 0LL) )
        {
          v3 = 1;
          StartContext[1300] = 1;
          DbgPrintEx(
            0x7Fu,
            2u,
            "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
            StartContext,
            a3);
        }
      }
    }
  }
  else
  {
    while ( (unsigned __int8)sub_1403D1580(StartContext, a2 + 288LL * v16, v15, v16) )
    {
      if ( ++v16 >= dword_140C097B4 )
        goto LABEL_11;
    }
  }
  return v3;
}
