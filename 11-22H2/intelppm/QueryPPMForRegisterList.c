/*
 * XREFs of QueryPPMForRegisterList @ 0x1C002DCF0
 * Callers:
 *     InitMeasRegisters @ 0x1C002DC20 (InitMeasRegisters.c)
 *     InitPkgIdleStateStats @ 0x1C00344A0 (InitPkgIdleStateStats.c)
 * Callees:
 *     GetCPUFamilyAndModel @ 0x1C0046008 (GetCPUFamilyAndModel.c)
 */

__int64 __fastcall QueryPPMForRegisterList(__int64 *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // ebp
  unsigned int v4; // esi
  __int128 *v5; // rdi
  _WORD *v6; // r8
  unsigned int v7; // edx
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
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  GetCPUFamilyAndModel(&v15, &v14);
  v6 = &unk_1C0016582;
  v7 = 0;
  while ( v15 != *(v6 - 1) || v14 != *v6 )
  {
    ++v7;
    v6 += 12;
    if ( v7 >= 0x32 )
      goto LABEL_5;
  }
  v4 = *((unsigned __int16 *)&IntelPPMSocInfo + 12 * v7 + 4);
  v5 = (__int128 *)*((_QWORD *)&IntelPPMSocInfo + 3 * v7 + 2);
  v3 = *((_DWORD *)&IntelPPMSocInfo + 6 * v7 + 1);
LABEL_5:
  if ( v7 != 50 && v4 && v5 )
  {
    if ( a1 )
    {
      Pool2 = ExAllocatePool2(256LL, 32 * v4 + 16, 1919119952LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = v4;
        *(_QWORD *)Pool2 = v3;
        v11 = v4;
        v12 = Pool2 - (_QWORD)v5;
        do
        {
          v13 = *v5;
          v5 += 2;
          *(__int128 *)((char *)v5 + v12 - 16) = v13;
          *(__int128 *)((char *)v5 + v12) = *(v5 - 1);
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
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v1;
}
