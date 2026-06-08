/*
 * XREFs of QueryPPMForRegisterList @ 0x1C002CB00
 * Callers:
 *     InitMeasRegisters @ 0x1C002CA30 (InitMeasRegisters.c)
 *     InitPkgIdleStateStats @ 0x1C0033330 (InitPkgIdleStateStats.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x1C0044008 (GetCPUFamilyAndModel.c)
 */

__int64 __fastcall QueryPPMForRegisterList(__int64 *a1)
{
  unsigned int v1; // ebx
  _WORD *v3; // r8
  unsigned int i; // edx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int128 *v7; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  unsigned __int8 v14; // [rsp+48h] [rbp+10h] BYREF
  __int16 v15; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v15 = 0;
  v14 = 0;
  GetCPUFamilyAndModel(&v15, &v14);
  v3 = &unk_1C0015582;
  for ( i = 0; i < 0x1B; ++i )
  {
    if ( v15 == *(v3 - 1) && v14 == *v3 )
    {
      v6 = *((unsigned __int16 *)&IntelPPMSocInfo + 12 * i + 4);
      v7 = (__int128 *)*((_QWORD *)&IntelPPMSocInfo + 3 * i + 2);
      v5 = *((_DWORD *)&IntelPPMSocInfo + 6 * i + 1);
      goto LABEL_9;
    }
    v3 += 12;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( i == 27 )
    return (unsigned int)-1073741637;
LABEL_9:
  if ( !v6 || !v7 )
    return (unsigned int)-1073741637;
  if ( a1 )
  {
    Pool2 = ExAllocatePool2(256LL, 32 * v6 + 16, 1919119952LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = v6;
      *(_QWORD *)Pool2 = v5;
      v11 = v6;
      v12 = Pool2 - (_QWORD)v7;
      do
      {
        v13 = *v7;
        v7 += 2;
        *(__int128 *)((char *)v7 + v12 - 16) = v13;
        *(__int128 *)((char *)v7 + v12) = *(v7 - 1);
        --v11;
      }
      while ( v11 );
      *a1 = v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
